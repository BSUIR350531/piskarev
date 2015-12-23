/********************************************************************************
** Form generated from reading UI file 'tabataroundwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABATAROUNDWIDGET_H
#define UI_TABATAROUNDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tabataRoundWidget
{
public:
    QPushButton *pushButton;
    QSpinBox *roundBox;

    void setupUi(QWidget *tabataRoundWidget)
    {
        if (tabataRoundWidget->objectName().isEmpty())
            tabataRoundWidget->setObjectName(QStringLiteral("tabataRoundWidget"));
        tabataRoundWidget->resize(251, 116);
        pushButton = new QPushButton(tabataRoundWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(124, 42, 111, 61));
        QFont font;
        font.setFamily(QStringLiteral("MS UI Gothic"));
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(true);
        font.setWeight(75);
        pushButton->setFont(font);
        roundBox = new QSpinBox(tabataRoundWidget);
        roundBox->setObjectName(QStringLiteral("roundBox"));
        roundBox->setGeometry(QRect(20, 50, 42, 22));
        roundBox->setMinimum(8);
        roundBox->setMaximum(32);
        roundBox->setSingleStep(4);

        retranslateUi(tabataRoundWidget);

        QMetaObject::connectSlotsByName(tabataRoundWidget);
    } // setupUi

    void retranslateUi(QWidget *tabataRoundWidget)
    {
        tabataRoundWidget->setWindowTitle(QApplication::translate("tabataRoundWidget", "Form", 0));
        pushButton->setText(QApplication::translate("tabataRoundWidget", "GO!", 0));
    } // retranslateUi

};

namespace Ui {
    class tabataRoundWidget: public Ui_tabataRoundWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABATAROUNDWIDGET_H
