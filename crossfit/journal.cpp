#include "journal.h"
#include "ui_journal.h"
#include <QFile>
#include<QMessageBox>
#include <QTextStream>
#include<QTextCursor>
#include<QTextDocument>

QString notes;

Journal::Journal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Journal)
{
    ui->setupUi(this);

    QFile mFile("journal");
    if(!mFile.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::information(this, "ERROR", "path not correct");
        return;
    }
    QTextStream stream (&mFile);
    notes = stream.readAll();
    ui->textEdit->setText(notes);







}

Journal::~Journal()
{
    delete ui;
}

void Journal::on_calendarWidget_activated(const QDate &date)
{
    ui->textEdit->setText(notes);
    QString searchString;
 searchString=date.toString();
      QTextDocument *document = ui->textEdit->document();

      bool found=false;
          QTextCursor highlightCursor(document);
          QTextCursor cursor(document);

          cursor.beginEditBlock();

          QTextCharFormat plainFormat(highlightCursor.charFormat());
          QTextCharFormat colorFormat = plainFormat;
          colorFormat.setForeground(Qt::red);

          while (!highlightCursor.isNull() && !highlightCursor.atEnd()) {
              highlightCursor = document->find(searchString, highlightCursor, QTextDocument::FindWholeWords);

              if (!highlightCursor.isNull()) {
                  found = true;
                  highlightCursor.movePosition(QTextCursor::WordRight,
                                         QTextCursor::KeepAnchor);
                  highlightCursor.mergeCharFormat(colorFormat);
              }
          }

          cursor.endEditBlock();


}

void Journal::on_QuitButton_clicked()
{
    this->close();
    emit wclose();
}
