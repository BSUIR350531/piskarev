#ifndef WORKPLACE_H
#define WORKPLACE_H

#include <QWidget>

namespace Ui {
class WorkPlace;
}

class WorkPlace : public QWidget
{
    Q_OBJECT

public:
    explicit WorkPlace(QWidget *parent = 0);
    ~WorkPlace();
    void TimeWatch();

signals:
    void Wclose();

private slots:
    void on_ReadyButton_clicked();
     void ActionTimer();
     void on_pauseButton_clicked();
     int getWod(const QString& str);
     void tabataTimer();
     void setTabata(int);
     void showReady();

     void on_QuitButton_clicked();

     void on_CloseButton_clicked();

     void on_JournalButton_clicked();

private:
    Ui::WorkPlace *ui;
};

#endif // WORKPLACE_H
