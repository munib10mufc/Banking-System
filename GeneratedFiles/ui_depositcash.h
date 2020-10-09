/********************************************************************************
** Form generated from reading UI file 'depositcash.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSITCASH_H
#define UI_DEPOSITCASH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_depositCash
{
public:
    QLineEdit *AccountNumberEdit;
    QPushButton *Submit;
    QLabel *DepositAmount;
    QLabel *CurrentBalance;
    QLabel *AccountNumber;
    QLineEdit *DepositAmountEdit;
    QLabel *label;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;

    void setupUi(QWidget *depositCash)
    {
        if (depositCash->objectName().isEmpty())
            depositCash->setObjectName(QStringLiteral("depositCash"));
        depositCash->resize(657, 487);
        AccountNumberEdit = new QLineEdit(depositCash);
        AccountNumberEdit->setObjectName(QStringLiteral("AccountNumberEdit"));
        AccountNumberEdit->setGeometry(QRect(300, 140, 181, 20));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        AccountNumberEdit->setFont(font);
        Submit = new QPushButton(depositCash);
        Submit->setObjectName(QStringLiteral("Submit"));
        Submit->setGeometry(QRect(280, 240, 101, 41));
        Submit->setFont(font);
        DepositAmount = new QLabel(depositCash);
        DepositAmount->setObjectName(QStringLiteral("DepositAmount"));
        DepositAmount->setGeometry(QRect(120, 180, 171, 20));
        DepositAmount->setFont(font);
        CurrentBalance = new QLabel(depositCash);
        CurrentBalance->setObjectName(QStringLiteral("CurrentBalance"));
        CurrentBalance->setGeometry(QRect(180, 310, 271, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        font1.setPointSize(10);
        CurrentBalance->setFont(font1);
        AccountNumber = new QLabel(depositCash);
        AccountNumber->setObjectName(QStringLiteral("AccountNumber"));
        AccountNumber->setGeometry(QRect(150, 140, 141, 16));
        AccountNumber->setFont(font);
        DepositAmountEdit = new QLineEdit(depositCash);
        DepositAmountEdit->setObjectName(QStringLiteral("DepositAmountEdit"));
        DepositAmountEdit->setGeometry(QRect(300, 180, 181, 20));
        DepositAmountEdit->setFont(font);
        label = new QLabel(depositCash);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 70, 191, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("OCR A Extended"));
        font2.setPointSize(20);
        label->setFont(font2);
        graphicsView = new QGraphicsView(depositCash);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-175, -39, 1011, 621));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        pushButton = new QPushButton(depositCash);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 380, 75, 23));
        graphicsView->raise();
        AccountNumberEdit->raise();
        Submit->raise();
        DepositAmount->raise();
        CurrentBalance->raise();
        AccountNumber->raise();
        DepositAmountEdit->raise();
        label->raise();
        pushButton->raise();

        retranslateUi(depositCash);
        QObject::connect(Submit, SIGNAL(clicked()), depositCash, SLOT(onSubmitButton()));
        QObject::connect(pushButton, SIGNAL(clicked()), depositCash, SLOT(Back3()));

        QMetaObject::connectSlotsByName(depositCash);
    } // setupUi

    void retranslateUi(QWidget *depositCash)
    {
        depositCash->setWindowTitle(QApplication::translate("depositCash", "depositCash", 0));
        Submit->setText(QApplication::translate("depositCash", "Submit", 0));
        DepositAmount->setText(QApplication::translate("depositCash", "Enter amount(to deposit):", 0));
        CurrentBalance->setText(QApplication::translate("depositCash", "Current balance:", 0));
        AccountNumber->setText(QApplication::translate("depositCash", "Enter account number:", 0));
        label->setText(QApplication::translate("depositCash", "Deposit Cash", 0));
        pushButton->setText(QApplication::translate("depositCash", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class depositCash: public Ui_depositCash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSITCASH_H
