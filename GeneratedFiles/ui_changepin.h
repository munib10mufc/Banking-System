/********************************************************************************
** Form generated from reading UI file 'changepin.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPIN_H
#define UI_CHANGEPIN_H

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

class Ui_changePin
{
public:
    QLabel *reenterPin;
    QLabel *changePin_2;
    QLabel *enterOldPin;
    QPushButton *enter_pushButton;
    QLineEdit *newPin_lineEdit;
    QLabel *enterNewPin;
    QLineEdit *reenterPin_lineEdit;
    QLineEdit *oldPin_lineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *changePin)
    {
        if (changePin->objectName().isEmpty())
            changePin->setObjectName(QStringLiteral("changePin"));
        changePin->resize(605, 475);
        reenterPin = new QLabel(changePin);
        reenterPin->setObjectName(QStringLiteral("reenterPin"));
        reenterPin->setGeometry(QRect(100, 280, 111, 31));
        changePin_2 = new QLabel(changePin);
        changePin_2->setObjectName(QStringLiteral("changePin_2"));
        changePin_2->setGeometry(QRect(170, 70, 221, 41));
        enterOldPin = new QLabel(changePin);
        enterOldPin->setObjectName(QStringLiteral("enterOldPin"));
        enterOldPin->setGeometry(QRect(100, 160, 121, 31));
        enter_pushButton = new QPushButton(changePin);
        enter_pushButton->setObjectName(QStringLiteral("enter_pushButton"));
        enter_pushButton->setGeometry(QRect(340, 360, 75, 23));
        newPin_lineEdit = new QLineEdit(changePin);
        newPin_lineEdit->setObjectName(QStringLiteral("newPin_lineEdit"));
        newPin_lineEdit->setGeometry(QRect(260, 230, 151, 20));
        newPin_lineEdit->setEchoMode(QLineEdit::Password);
        enterNewPin = new QLabel(changePin);
        enterNewPin->setObjectName(QStringLiteral("enterNewPin"));
        enterNewPin->setGeometry(QRect(100, 220, 111, 21));
        reenterPin_lineEdit = new QLineEdit(changePin);
        reenterPin_lineEdit->setObjectName(QStringLiteral("reenterPin_lineEdit"));
        reenterPin_lineEdit->setGeometry(QRect(260, 290, 151, 20));
        reenterPin_lineEdit->setEchoMode(QLineEdit::Password);
        oldPin_lineEdit = new QLineEdit(changePin);
        oldPin_lineEdit->setObjectName(QStringLiteral("oldPin_lineEdit"));
        oldPin_lineEdit->setGeometry(QRect(260, 170, 151, 20));
        oldPin_lineEdit->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(changePin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 360, 75, 23));

        retranslateUi(changePin);
        QObject::connect(pushButton, SIGNAL(clicked()), changePin, SLOT(backClicked()));
        QObject::connect(enter_pushButton, SIGNAL(clicked()), changePin, SLOT(onEnterClick()));

        QMetaObject::connectSlotsByName(changePin);
    } // setupUi

    void retranslateUi(QWidget *changePin)
    {
        changePin->setWindowTitle(QApplication::translate("changePin", "changePin", 0));
        reenterPin->setText(QApplication::translate("changePin", "<html><head/><body><p><span style=\" font-size:12pt;\">reenter PIN</span></p></body></html>", 0));
        changePin_2->setText(QApplication::translate("changePin", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">change PIN</span></p></body></html>", 0));
        enterOldPin->setText(QApplication::translate("changePin", "<html><head/><body><p><span style=\" font-size:12pt;\">enter old PIN</span></p></body></html>", 0));
        enter_pushButton->setText(QApplication::translate("changePin", "Enter", 0));
        enterNewPin->setText(QApplication::translate("changePin", "<html><head/><body><p><span style=\" font-size:12pt;\">enter new PIN</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("changePin", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class changePin: public Ui_changePin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPIN_H
