#include "dialog.h"
#include "ui_dialog.h"
#include <QFile>
#include<QMessageBox>
#include <QTextStream>
#include"mainwindow.h"
#include<QPushButton>
#include <QDialogButtonBox>



Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->buttonBox->button(QDialogButtonBox::Ok), SIGNAL(clicked(bool)), SLOT (okClicked()));
     connect(ui->buttonBox->button(QDialogButtonBox::Cancel), SIGNAL(clicked()),SLOT(close()));

}

Dialog::~Dialog()
{
    delete ui;
}

QString str="";

void Dialog::on_comboBox_activated(const QString &arg1)
{
  str =  ui->comboBox->currentText();
  QFile   mFile(str);
  if(!mFile.open(QFile::ReadOnly | QFile::Text))
  {
          QMessageBox msgBox;

          msgBox.setText("Error.");

          msgBox.exec();
          return;
}
  QTextStream stream (&mFile);


  str=stream.readAll();
  ui->label_2->setText(str);
}


void Dialog::okClicked()
{
    if (str.isEmpty())
    {
            QMessageBox msgBox;

            msgBox.setText("Please, choose a workout.");

            msgBox.exec();
            return;
    }
    emit WodIsChoosed(str);
    close();
}
