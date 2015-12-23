/********************************************************************************
** Form generated from reading UI file 'journal.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOURNAL_H
#define UI_JOURNAL_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Journal
{
public:
    QTextEdit *textEdit;
    QCalendarWidget *calendarWidget;
    QCommandLinkButton *QuitButton;

    void setupUi(QWidget *Journal)
    {
        if (Journal->objectName().isEmpty())
            Journal->setObjectName(QStringLiteral("Journal"));
        Journal->resize(800, 600);
        textEdit = new QTextEdit(Journal);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 401, 601));
        textEdit->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        calendarWidget = new QCalendarWidget(Journal);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(470, 0, 321, 221));
        calendarWidget->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        QuitButton = new QCommandLinkButton(Journal);
        QuitButton->setObjectName(QStringLiteral("QuitButton"));
        QuitButton->setGeometry(QRect(510, 430, 291, 41));

        retranslateUi(Journal);

        QMetaObject::connectSlotsByName(Journal);
    } // setupUi

    void retranslateUi(QWidget *Journal)
    {
        Journal->setWindowTitle(QApplication::translate("Journal", "Form", 0));
        QuitButton->setText(QApplication::translate("Journal", "                      Back to Main Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class Journal: public Ui_Journal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOURNAL_H
