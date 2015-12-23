/********************************************************************************
** Form generated from reading UI file 'newwoddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWWODDIALOG_H
#define UI_NEWWODDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NewWodDialog
{
public:
    QDialogButtonBox *buttonBox;
    QPlainTextEdit *NameEdit;
    QPlainTextEdit *DescriptionEdit;
    QPlainTextEdit *CommentEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QDialog *NewWodDialog)
    {
        if (NewWodDialog->objectName().isEmpty())
            NewWodDialog->setObjectName(QStringLiteral("NewWodDialog"));
        NewWodDialog->resize(621, 295);
        buttonBox = new QDialogButtonBox(NewWodDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(520, 20, 81, 461));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        NameEdit = new QPlainTextEdit(NewWodDialog);
        NameEdit->setObjectName(QStringLiteral("NameEdit"));
        NameEdit->setGeometry(QRect(90, 20, 381, 31));
        DescriptionEdit = new QPlainTextEdit(NewWodDialog);
        DescriptionEdit->setObjectName(QStringLiteral("DescriptionEdit"));
        DescriptionEdit->setGeometry(QRect(90, 80, 381, 31));
        CommentEdit = new QPlainTextEdit(NewWodDialog);
        CommentEdit->setObjectName(QStringLiteral("CommentEdit"));
        CommentEdit->setGeometry(QRect(90, 150, 381, 31));
        label = new QLabel(NewWodDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 47, 13));
        label_2 = new QLabel(NewWodDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 160, 47, 13));
        label_3 = new QLabel(NewWodDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 90, 47, 13));
        pushButton = new QPushButton(NewWodDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(480, 90, 41, 23));
        buttonBox->raise();
        NameEdit->raise();
        DescriptionEdit->raise();
        CommentEdit->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_2->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        pushButton->raise();

        retranslateUi(NewWodDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewWodDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewWodDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewWodDialog);
    } // setupUi

    void retranslateUi(QDialog *NewWodDialog)
    {
        NewWodDialog->setWindowTitle(QApplication::translate("NewWodDialog", "Dialog", 0));
        label->setText(QApplication::translate("NewWodDialog", "Name", 0));
        label_2->setText(QApplication::translate("NewWodDialog", "Comment", 0));
        label_3->setText(QApplication::translate("NewWodDialog", "Exercise", 0));
        pushButton->setText(QApplication::translate("NewWodDialog", "more", 0));
    } // retranslateUi

};

namespace Ui {
    class NewWodDialog: public Ui_NewWodDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWWODDIALOG_H
