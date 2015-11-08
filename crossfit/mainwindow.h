#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
   // void selectWod();
private slots:
    //void okclicked();
    int on_NewWodButton_clicked();
    int on_qqq_clicked();
};

#endif // MAINWINDOW_H
