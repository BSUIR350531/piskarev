#ifndef TABATAROUNDWIDGET_H
#define TABATAROUNDWIDGET_H

#include <QWidget>

namespace Ui {
class tabataRoundWidget;
}

class tabataRoundWidget : public QWidget
{
    Q_OBJECT

public:
    explicit tabataRoundWidget(QWidget *parent = 0);
    ~tabataRoundWidget();
signals:
    void roundvalue(int k);

private slots:
    void on_pushButton_clicked();

private:
    Ui::tabataRoundWidget *ui;
};

#endif // TABATAROUNDWIDGET_H
