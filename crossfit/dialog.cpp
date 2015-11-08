#include "dialog.h"
#include "ui_dialog.h"
#include <QFile>
#include<QMessageBox>
#include <QTextStream>


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);


}

Dialog::~Dialog()
{
    delete ui;
}



void Dialog::on_comboBox_activated(const QString &arg1)
{
  QString str =  ui->comboBox->currentText();
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
