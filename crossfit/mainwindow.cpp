#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include"newwoddialog.h"
#include<QPushButton>
#include <QFile>
#include <QMessageBox>
#include <QTimer>
#include "workplace.h"
#include "tabataroundwidget.h"
#include<QPalette>
#include "journal.h"
#include<QCloseEvent>
#include <QtGui>
#include<QPalette>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->TabataButton->hide();
    ui->secButton->hide();
    MainWindow::setWindowFlags(Qt::Window | Qt::WindowTitleHint | Qt::CustomizeWindowHint);
     MainWindow::setWindowFlags(Qt::FramelessWindowHint);
    QBrush br(Qt::TexturePattern);
        br.setTextureImage(QImage(":/ico/rusted_metal.png"));
        QPalette plt;
        plt.setBrush(QPalette::Background, br);
        MainWindow::setPalette(plt);

 }

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::on_NewWodButton_clicked()
{
    Dialog *a=new Dialog(this);
    a->show();
    connect(a, SIGNAL(WodIsChoosed(QString)),this, SLOT(ShowWOD(QString)));
    return a->exec();
}

int MainWindow::on_qqq_clicked()
{
    NewWodDialog *wnd=new NewWodDialog(this);
    wnd->show();
    return wnd->exec();



}


void MainWindow::ShowWOD(const QString &str)
{
    WorkPlace *wnd = new WorkPlace(this);
     connect(wnd, SIGNAL(Wclose()),this,SLOT(newWindow()));
     this->centralWidget()->hide();
     wnd->show();
     connect(this,SIGNAL(sendString(QString)), wnd, SLOT(getWod(QString)));
     emit sendString(str);


}



void MainWindow::on_TimerButton_clicked()
{
    if(  ui->TabataButton->isHidden()&& ui->secButton->isHidden())
    {
        ui->TabataButton->show();
        ui->secButton->show();
    }
else
    {
        ui->TabataButton->hide();
        ui->secButton->hide();

    }

}

void MainWindow::on_secButton_clicked()
{
    WorkPlace *wnd = new WorkPlace(this);
      connect(wnd, SIGNAL(Wclose()),this,SLOT(newWindow()));
      this->centralWidget()->hide();
     wnd->show();



}

void MainWindow::on_TabataButton_clicked()
{
     tabataRoundWidget *w = new tabataRoundWidget(this);
    if(ui->TimerButton->isEnabled())
    {
        ui->NewWodButton->setEnabled(false);
        ui->qqq->setEnabled(false);
        ui->TimerButton->setEnabled(false);
        ui->secButton->setEnabled(false);
         w->show();
         w->move(200,300);
        connect(w, SIGNAL(roundvalue(int)),this, SLOT(roundValue(int)));
    }
    else
    {
        ui->NewWodButton->setEnabled(true);
        ui->qqq->setEnabled(true);
        ui->TimerButton->setEnabled(true);
        ui->secButton->setEnabled(true);

    }


}
void MainWindow::roundValue(int r)
{
    WorkPlace *wnd = new WorkPlace(this);
      connect(wnd, SIGNAL(Wclose()),this,SLOT(newWindow()));
      this->centralWidget()->hide();
     wnd->show();
     connect(this, SIGNAL(goTabata(int)),wnd, SLOT(setTabata(int)));
    emit goTabata(r);

}





void MainWindow::on_JournalButton_clicked()
{
    this->centralWidget()->hide();
    Journal *wnd = new Journal(this);
    wnd->show();
    connect(wnd, SIGNAL(wclose()),this, SLOT(newWindow()));
}

void MainWindow::newWindow()
{
    this->centralWidget()->show();
}

void MainWindow::on_CloseButton_clicked()
{
   MainWindow::close();
}
