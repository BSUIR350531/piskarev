#ifndef NEWWODWND_H
#define NEWWODWND_H

#include <QMainWindow>

namespace Ui {
class newWodWnd;
}

class newWodWnd : public QMainWindow
{
    Q_OBJECT

public:
    explicit newWodWnd(QWidget *parent = 0);
    ~newWodWnd();

private:
    Ui::newWodWnd *ui;
};

#endif // NEWWODWND_H
