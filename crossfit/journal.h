#ifndef JOURNAL_H
#define JOURNAL_H

#include <QWidget>

namespace Ui {
class Journal;
}

class Journal : public QWidget
{
    Q_OBJECT

public:
    explicit Journal(QWidget *parent = 0);
    ~Journal();

signals:
    void wclose();

private slots:
    void on_calendarWidget_activated(const QDate &date);

    void on_QuitButton_clicked();

private:
    Ui::Journal *ui;
};

#endif // JOURNAL_H
