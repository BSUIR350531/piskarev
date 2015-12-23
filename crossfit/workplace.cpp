#include "workplace.h"
#include "ui_workplace.h"
#include <QTimer>
#include "mainwindow.h"
#include<QMessageBox>
#include<QTime>
#include<QtMultimedia/QSound>
#include<QDateTime>
#include<QFile>
#include<QTextStream>
int msec=0;
int sec=0;
int min=0;
int c=2;
int i =3;
bool tabata=false;
QString WodName;
QTimer *time = new QTimer();
QTimer *ready = new QTimer();
QSound *startSound = new QSound(".//media/start.wav");
QSound *pauseSound = new QSound(".//media/pause.wav");
WorkPlace::WorkPlace(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WorkPlace)
{
    ui->setupUi(this);
    ui->label->hide();
    ui->textEdit->hide();
    ui->CloseButton->hide();
    ui->JournalButton->hide();
    ui->textEdit->setStyleSheet("backgroundcolor: QColor(255,255,255,0)");

}

WorkPlace::~WorkPlace()
{
    delete ui;
}

void WorkPlace::on_ReadyButton_clicked()
{
    ui->QuitButton->hide();
    ui->ReadyButton->hide();
    ui->textEdit->setReadOnly(true);
    connect(ready, SIGNAL(timeout()), this, SLOT (showReady()));
    ready->start(1000);
}
void WorkPlace::TimeWatch()
    {
        if(tabata==false)
        {

            connect(time, SIGNAL(timeout()), this, SLOT (ActionTimer()));
            time->start(10);
        }
        if(tabata==true)
        {
            msec=100;
            if(min%2==0) sec=20;
            else sec=10;
            connect(time, SIGNAL(timeout()), this, SLOT (tabataTimer()));
            time->start(10);
        }

}
void WorkPlace::showReady()
{
    ui->label->show();
if(i==0)
{
    ready->stop();
    ui->label->clear();
    ui->label->hide();
    startSound->play();
    TimeWatch();
}
    QString str;
    str.setNum(i);
     ui->label->setText(str);
     i--;
}


void WorkPlace::ActionTimer()
{
        ui->msecNumber->display(msec);
        ui->SecNumber_2->display(sec);
        ui->MinuteNumber_3->display(min);
         msec++;
        if (msec==100)
         {
            msec=0;
            sec++;
         }
        if(sec==60)
        {
            min++;
            sec=0;
        }
}


void WorkPlace::on_pauseButton_clicked()
{
    time->stop();
    pauseSound->play();
    ui->pauseButton->hide();
    ui->QuitButton->show();
    disconnect(time, SIGNAL(timeout()), this, SLOT (ActionTimer()));
    disconnect(ready, SIGNAL(timeout()), this, SLOT (showReady()));
    disconnect(time, SIGNAL(timeout()), this, SLOT (tabataTimer()));
    ui->ReadyButton->show();
    i=3;

}
WorkPlace::getWod(const QString& str)
{
     WodName=str.section(QRegExp("\\s+"), 0, 0,
                                QString::SectionSkipEmpty);
    ui->textEdit->show();
    QString str1= "You can change exercises if this WOD is too hard or too simple for you \n ";
    str1+=str;
     ui->textEdit->setText(str1);




}



void WorkPlace::setTabata(int r)
{
    tabata=true;
    min=r;
}


void WorkPlace::tabataTimer()
{


    ui->msecNumber->display(msec);
    ui->SecNumber_2->display(sec);
    ui->MinuteNumber_3->display(min);
     msec--;
    if (msec==0)
     {
        msec=100;
        sec--;
     }
    if(sec==3|| sec==2 ||sec==1)
    {
        ui->label->show();
        ui->label->setStyleSheet("QTextEdit { background-color : red; color : black; }");
        ui->label->setNum(sec);
    }
    if(sec==0)
    {
       ui->label->hide();
        msec=100;
        if(c%2==0)
        {

            sec=10;
            c++;

        }

        else

        {
            sec=20;
            c++;
        }
       if (c%2==0) min--;


        }

}

void WorkPlace::on_QuitButton_clicked()
{
    disconnect(time, SIGNAL(timeout()), this, SLOT (ActionTimer()));
    disconnect(ready, SIGNAL(timeout()), this, SLOT (showReady()));
    disconnect(time, SIGNAL(timeout()), this, SLOT (tabataTimer()));
    if(ui->MinuteNumber_3->intValue()==0 && ui->SecNumber_2->intValue()==0)
    {
        this->close();
        emit Wclose();
    }
    ui->CloseButton->show();
    ui->JournalButton->show();
    ui->ReadyButton->hide();
    ui->textEdit->show();
    ui->textEdit->clear();
    ui->textEdit->setText("my time");
    QString *str=new QString;
    ui->textEdit->insertPlainText(str->setNum(ui->MinuteNumber_3->intValue()));
    ui->textEdit->insertPlainText(":");
    ui->textEdit->insertPlainText(str->setNum(ui->SecNumber_2->intValue()));
    ui->textEdit->insertPlainText(":");
    ui->textEdit->insertPlainText(str->setNum(ui->msecNumber->intValue()));
    ui->textEdit->insertPlainText(" - ");
    ui->textEdit->append(QDate::currentDate().toString());
    ui->textEdit->append(QTime::currentTime().toString());

}

void WorkPlace::on_CloseButton_clicked()
{
    this->close();
    emit Wclose();

}

void WorkPlace::on_JournalButton_clicked()
{
    QFile mFile("journal");

    if(!mFile.open(QFile::WriteOnly | QFile::Text | QIODevice::Append))
    {
        QMessageBox::information(this, "ERROR", "path not correct");
        return;
    }
    QTextStream stream (&mFile);
    stream << WodName<<"  "<<ui->textEdit->toPlainText()<<endl<<endl;
    stream<<endl;
    mFile.close();
    QMessageBox *msgBox = new QMessageBox();
    msgBox->setText("Workout saved!");
    msgBox->setIcon(QMessageBox::Information);
    msgBox->setStandardButtons(QMessageBox::Ok);
    msgBox->button(QMessageBox::Ok)->animateClick(1000);
    msgBox->show();
}
