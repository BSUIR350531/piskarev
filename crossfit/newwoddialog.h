#ifndef NEWWODDIALOG_H
#define NEWWODDIALOG_H

#include <QDialog>

namespace Ui {
class NewWodDialog;
}

class NewWodDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NewWodDialog(QWidget *parent = 0);
    ~NewWodDialog();

private:
    Ui::NewWodDialog *ui;
signals:
    void FilePath(const QString &str);
private slots:


    void on_buttonBox_accepted();
    void on_pushButton_clicked();
};

#endif // NEWWODDIALOG_H
