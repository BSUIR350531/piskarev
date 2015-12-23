#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
signals:
     void sendString(const QString& str);
     void goTabata(int);
private slots:
     void newWindow();
    int on_NewWodButton_clicked();
    int on_qqq_clicked();

    void on_TimerButton_clicked();

    void on_secButton_clicked();

    void on_TabataButton_clicked();
    void roundValue(int k);
    void on_JournalButton_clicked();

    void on_CloseButton_clicked();

public slots:
   void ShowWOD(const QString& str);

};


#endif // MAINWINDOW_H
