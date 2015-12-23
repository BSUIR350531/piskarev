/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *qqq;
    QPushButton *NewWodButton;
    QPushButton *TimerButton;
    QPushButton *TabataButton;
    QPushButton *secButton;
    QPushButton *JournalButton;
    QPushButton *CloseButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        QFont font;
        font.setFamily(QStringLiteral("MS PGothic"));
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        MainWindow->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/ico/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        qqq = new QPushButton(centralWidget);
        qqq->setObjectName(QStringLiteral("qqq"));
        qqq->setGeometry(QRect(20, 190, 171, 81));
        qqq->setMaximumSize(QSize(171, 81));
        QPalette palette;
        QBrush brush(QColor(158, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        qqq->setPalette(palette);
        qqq->setStyleSheet(QString::fromUtf8("url:/new/prefix1/ico/15 - \320\272\320\276\320\277\320\270\321\217.png"));
        NewWodButton = new QPushButton(centralWidget);
        NewWodButton->setObjectName(QStringLiteral("NewWodButton"));
        NewWodButton->setGeometry(QRect(20, 40, 171, 81));
        NewWodButton->setMaximumSize(QSize(171, 81));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        NewWodButton->setPalette(palette1);
        TimerButton = new QPushButton(centralWidget);
        TimerButton->setObjectName(QStringLiteral("TimerButton"));
        TimerButton->setGeometry(QRect(20, 340, 171, 81));
        TimerButton->setMaximumSize(QSize(171, 81));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        TimerButton->setPalette(palette2);
        TabataButton = new QPushButton(centralWidget);
        TabataButton->setObjectName(QStringLiteral("TabataButton"));
        TabataButton->setGeometry(QRect(50, 480, 111, 23));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush);
        TabataButton->setPalette(palette3);
        secButton = new QPushButton(centralWidget);
        secButton->setObjectName(QStringLiteral("secButton"));
        secButton->setGeometry(QRect(50, 530, 111, 23));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush);
        secButton->setPalette(palette4);
        JournalButton = new QPushButton(centralWidget);
        JournalButton->setObjectName(QStringLiteral("JournalButton"));
        JournalButton->setGeometry(QRect(590, 30, 171, 81));
        JournalButton->setMaximumSize(QSize(171, 81));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush);
        JournalButton->setPalette(palette5);
        CloseButton = new QPushButton(centralWidget);
        CloseButton->setObjectName(QStringLiteral("CloseButton"));
        CloseButton->setGeometry(QRect(590, 480, 171, 81));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush);
        CloseButton->setPalette(palette6);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CrossInstructor", 0));
        qqq->setText(QApplication::translate("MainWindow", "New WOD", 0));
        NewWodButton->setText(QApplication::translate("MainWindow", "Select WOD", 0));
        TimerButton->setText(QApplication::translate("MainWindow", "Timer", 0));
        TabataButton->setText(QApplication::translate("MainWindow", "tabata", 0));
        secButton->setText(QApplication::translate("MainWindow", "stopwatch", 0));
        JournalButton->setText(QApplication::translate("MainWindow", "View Journal", 0));
        CloseButton->setText(QApplication::translate("MainWindow", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
