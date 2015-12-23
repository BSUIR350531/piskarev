/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(639, 480);
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 440, 621, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        comboBox = new QComboBox(Dialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(460, 70, 141, 22));
        comboBox_2 = new QComboBox(Dialog);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(460, 120, 141, 22));
        comboBox_3 = new QComboBox(Dialog);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(460, 170, 141, 22));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(500, 50, 47, 13));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 60, 311, 211));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(500, 100, 61, 16));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(500, 150, 61, 16));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Angie", 0)
         << QApplication::translate("Dialog", "Annie", 0)
         << QApplication::translate("Dialog", "Barbara", 0)
         << QApplication::translate("Dialog", "Chelsea", 0)
         << QApplication::translate("Dialog", "Cindy", 0)
         << QApplication::translate("Dialog", "Diane", 0)
         << QApplication::translate("Dialog", "Elizabeth", 0)
         << QApplication::translate("Dialog", "Fran", 0)
         << QApplication::translate("Dialog", "Frelen", 0)
         << QApplication::translate("Dialog", "Grace", 0)
         << QApplication::translate("Dialog", "Helen", 0)
         << QApplication::translate("Dialog", "Isabel", 0)
         << QApplication::translate("Dialog", "Jackie", 0)
         << QApplication::translate("Dialog", "Karen", 0)
         << QApplication::translate("Dialog", "Kelly", 0)
         << QApplication::translate("Dialog", "Linda", 0)
         << QApplication::translate("Dialog", "Lynne", 0)
         << QApplication::translate("Dialog", "Mary", 0)
         << QApplication::translate("Dialog", "Nancy", 0)
         << QApplication::translate("Dialog", "Nasty Girls", 0)
         << QApplication::translate("Dialog", "Nicole", 0)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Badger", 0)
         << QApplication::translate("Dialog", "Daniel", 0)
         << QApplication::translate("Dialog", "Erin", 0)
         << QApplication::translate("Dialog", "Jason", 0)
         << QApplication::translate("Dialog", "Josh", 0)
         << QApplication::translate("Dialog", "Joshie", 0)
         << QApplication::translate("Dialog", "JT", 0)
         << QApplication::translate("Dialog", "Joshua", 0)
         << QApplication::translate("Dialog", "Griff", 0)
         << QApplication::translate("Dialog", "Michael", 0)
         << QApplication::translate("Dialog", "Murph", 0)
         << QApplication::translate("Dialog", "Nate", 0)
         << QApplication::translate("Dialog", "Randy", 0)
         << QApplication::translate("Dialog", "Ryan", 0)
         << QApplication::translate("Dialog", "TommyV", 0)
        );
        label->setText(QApplication::translate("Dialog", "Girls WODs", 0));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("Dialog", "Hero WOD", 0));
        label_4->setText(QApplication::translate("Dialog", "My WOD", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
