/********************************************************************************
** Form generated from reading UI file 'workplace.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKPLACE_H
#define UI_WORKPLACE_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WorkPlace
{
public:
    QTextEdit *textEdit;
    QPushButton *ReadyButton;
    QLCDNumber *msecNumber;
    QLCDNumber *SecNumber_2;
    QLCDNumber *MinuteNumber_3;
    QPushButton *pauseButton;
    QLabel *label;
    QPushButton *QuitButton;
    QPushButton *JournalButton;
    QPushButton *CloseButton;
    QSpinBox *spinBox;
    QLabel *label_2;

    void setupUi(QWidget *WorkPlace)
    {
        if (WorkPlace->objectName().isEmpty())
            WorkPlace->setObjectName(QStringLiteral("WorkPlace"));
        WorkPlace->resize(800, 600);
        WorkPlace->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        textEdit = new QTextEdit(WorkPlace);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(300, 0, 501, 291));
        ReadyButton = new QPushButton(WorkPlace);
        ReadyButton->setObjectName(QStringLiteral("ReadyButton"));
        ReadyButton->setGeometry(QRect(490, 340, 231, 81));
        msecNumber = new QLCDNumber(WorkPlace);
        msecNumber->setObjectName(QStringLiteral("msecNumber"));
        msecNumber->setGeometry(QRect(590, 530, 121, 71));
        SecNumber_2 = new QLCDNumber(WorkPlace);
        SecNumber_2->setObjectName(QStringLiteral("SecNumber_2"));
        SecNumber_2->setGeometry(QRect(380, 450, 211, 151));
        MinuteNumber_3 = new QLCDNumber(WorkPlace);
        MinuteNumber_3->setObjectName(QStringLiteral("MinuteNumber_3"));
        MinuteNumber_3->setGeometry(QRect(110, 420, 271, 181));
        pauseButton = new QPushButton(WorkPlace);
        pauseButton->setObjectName(QStringLiteral("pauseButton"));
        pauseButton->setGeometry(QRect(60, 360, 301, 23));
        label = new QLabel(WorkPlace);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 10, 211, 221));
        QFont font;
        font.setPointSize(196);
        label->setFont(font);
        QuitButton = new QPushButton(WorkPlace);
        QuitButton->setObjectName(QStringLiteral("QuitButton"));
        QuitButton->setGeometry(QRect(60, 340, 301, 23));
        JournalButton = new QPushButton(WorkPlace);
        JournalButton->setObjectName(QStringLiteral("JournalButton"));
        JournalButton->setGeometry(QRect(0, 30, 301, 23));
        CloseButton = new QPushButton(WorkPlace);
        CloseButton->setObjectName(QStringLiteral("CloseButton"));
        CloseButton->setGeometry(QRect(0, 70, 301, 23));
        spinBox = new QSpinBox(WorkPlace);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(260, 260, 41, 41));
        label_2 = new QLabel(WorkPlace);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 270, 211, 20));

        retranslateUi(WorkPlace);

        QMetaObject::connectSlotsByName(WorkPlace);
    } // setupUi

    void retranslateUi(QWidget *WorkPlace)
    {
        WorkPlace->setWindowTitle(QApplication::translate("WorkPlace", "Form", 0));
        ReadyButton->setText(QApplication::translate("WorkPlace", "ARE YOU READY?", 0));
        pauseButton->setText(QApplication::translate("WorkPlace", "Pause", 0));
        label->setText(QString());
        QuitButton->setText(QApplication::translate("WorkPlace", "Quit", 0));
        JournalButton->setText(QApplication::translate("WorkPlace", "save to my journal", 0));
        CloseButton->setText(QApplication::translate("WorkPlace", "Back to Main Menu", 0));
        label_2->setText(QApplication::translate("WorkPlace", "Select a limit (min)", 0));
    } // retranslateUi

};

namespace Ui {
    class WorkPlace: public Ui_WorkPlace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKPLACE_H
