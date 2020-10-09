/********************************************************************************
** Form generated from reading UI file 'withdrawbalanceatm.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WITHDRAWBALANCEATM_H
#define UI_WITHDRAWBALANCEATM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_withDrawBalance
{
public:
    QLineEdit *lineEdit;
    QLabel *withdrawBalance;
    QLabel *enter_amount;
    QPushButton *enter_Button;
    QPushButton *pushButton;

    void setupUi(QWidget *withDrawBalance)
    {
        if (withDrawBalance->objectName().isEmpty())
            withDrawBalance->setObjectName(QStringLiteral("withDrawBalance"));
        withDrawBalance->resize(602, 452);
        lineEdit = new QLineEdit(withDrawBalance);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(340, 220, 141, 20));
        withdrawBalance = new QLabel(withDrawBalance);
        withdrawBalance->setObjectName(QStringLiteral("withdrawBalance"));
        withdrawBalance->setGeometry(QRect(180, 120, 271, 61));
        enter_amount = new QLabel(withDrawBalance);
        enter_amount->setObjectName(QStringLiteral("enter_amount"));
        enter_amount->setGeometry(QRect(160, 210, 121, 31));
        enter_Button = new QPushButton(withDrawBalance);
        enter_Button->setObjectName(QStringLiteral("enter_Button"));
        enter_Button->setGeometry(QRect(410, 300, 75, 23));
        pushButton = new QPushButton(withDrawBalance);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(290, 300, 75, 23));

        retranslateUi(withDrawBalance);
        QObject::connect(pushButton, SIGNAL(clicked()), withDrawBalance, SLOT(backClicked()));
        QObject::connect(enter_Button, SIGNAL(clicked(bool)), withDrawBalance, SLOT(onenterClicked()));

        QMetaObject::connectSlotsByName(withDrawBalance);
    } // setupUi

    void retranslateUi(QWidget *withDrawBalance)
    {
        withDrawBalance->setWindowTitle(QApplication::translate("withDrawBalance", "withDrawBalance", 0));
        withdrawBalance->setText(QApplication::translate("withDrawBalance", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">Withdraw Balance</span></p></body></html>", 0));
        enter_amount->setText(QApplication::translate("withDrawBalance", "<html><head/><body><p><span style=\" font-size:12pt;\">enter amount </span></p></body></html>", 0));
        enter_Button->setText(QApplication::translate("withDrawBalance", "enter", 0));
        pushButton->setText(QApplication::translate("withDrawBalance", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class withDrawBalance: public Ui_withDrawBalance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WITHDRAWBALANCEATM_H
