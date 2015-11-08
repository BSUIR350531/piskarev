#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include"newwoddialog.h"
#include<QPushButton>
#include <QFile>
#include <QMessageBox>

#include <QTime>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::on_NewWodButton_clicked()
{
  Dialog a;
  a.show();
  return a.exec();
}

int MainWindow::on_qqq_clicked()
{
    NewWodDialog wnd;
    wnd.show();
    return wnd.exec();
}



