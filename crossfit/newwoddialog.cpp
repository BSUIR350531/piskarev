#include "newwoddialog.h"
#include "ui_newwoddialog.h"
#include<QPushButton>
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
#include<QString>
#include <QBuffer>
#include<QVector>
QString buf;
 QVector<QString> exercise;


NewWodDialog::NewWodDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewWodDialog)
{
    ui->setupUi(this);
    connect(ui->buttonBox->button(QDialogButtonBox::Ok), SIGNAL(clicked()), SLOT (okClicked()));
    connect(ui->buttonBox->button(QDialogButtonBox::Cancel), SIGNAL(clicked()),SLOT(close()));


}

NewWodDialog::~NewWodDialog()
{
    delete ui;
}



void NewWodDialog::on_buttonBox_accepted()
{
    buf=ui->NameEdit->toPlainText();
    QFile mFile(buf);
    if(mFile.exists())
    {
        QMessageBox::critical(this,"Oops","this WOD already exists");
        return;
    }
    if(!mFile.open(QFile::WriteOnly | QFile::Text | QIODevice::Append))
    {
        QMessageBox::information(this, "ERROR", "path not correct");
        return;
    }
    QTextStream stream (&mFile);
    stream << ui->NameEdit->toPlainText()<<'\n';
    stream<<endl;
    if (!exercise.isEmpty())
    {
        for(int i=0;i<exercise.length();i++)
        stream<<exercise[i]<<'\n';
    }
    stream <<ui->DescriptionEdit->toPlainText()<<'\n';
    stream<<endl;
    stream<<ui->CommentEdit->toPlainText()<<'\n';
    stream<<endl;

    mFile.close();
    exercise.clear();


}

void NewWodDialog::on_pushButton_clicked()
{

   exercise.begin();
   exercise.push_back(ui->DescriptionEdit->toPlainText());
   ui->DescriptionEdit->clear();

}
