/********************************************************************************
** Form generated from reading UI file 'tabataroundwidg.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABATAROUNDWIDG_H
#define UI_TABATAROUNDWIDG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_tabataroundwidg
{
public:
    QPushButton *pushButton;
    QSpinBox *roundBox;

    void setupUi(QDialog *tabataroundwidg)
    {
        if (tabataroundwidg->objectName().isEmpty())
            tabataroundwidg->setObjectName(QStringLiteral("tabataroundwidg"));
        tabataroundwidg->resize(275, 131);
        pushButton = new QPushButton(tabataroundwidg);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 50, 111, 61));
        QFont font;
        font.setFamily(QStringLiteral("MS UI Gothic"));
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(true);
        font.setWeight(75);
        pushButton->setFont(font);
        roundBox = new QSpinBox(tabataroundwidg);
        roundBox->setObjectName(QStringLiteral("roundBox"));
        roundBox->setGeometry(QRect(50, 70, 42, 22));
        roundBox->setMinimum(8);
        roundBox->setMaximum(32);
        roundBox->setSingleStep(4);

        retranslateUi(tabataroundwidg);

        QMetaObject::connectSlotsByName(tabataroundwidg);
    } // setupUi

    void retranslateUi(QDialog *tabataroundwidg)
    {
        tabataroundwidg->setWindowTitle(QApplication::translate("tabataroundwidg", "Dialog", 0));
        pushButton->setText(QApplication::translate("tabataroundwidg", "GO!", 0));
    } // retranslateUi

};

namespace Ui {
    class tabataroundwidg: public Ui_tabataroundwidg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABATAROUNDWIDG_H
