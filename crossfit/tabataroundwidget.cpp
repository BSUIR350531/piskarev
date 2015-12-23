#include "tabataroundwidget.h"
#include "ui_tabataroundwidget.h"

tabataRoundWidget::tabataRoundWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tabataRoundWidget)
{
    ui->setupUi(this);
}

tabataRoundWidget::~tabataRoundWidget()
{
    delete ui;
}

void tabataRoundWidget::on_pushButton_clicked()
{
   int r =  ui->roundBox->value();
   emit roundvalue(r);
   tabataRoundWidget::close();

}
