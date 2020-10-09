/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

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

class Ui_welcome
{
public:
    QPushButton *enter;
    QLineEdit *Pin_line_edit;
    QLabel *insert_card_label;
    QLineEdit *insert_card_line_edit;
    QLabel *label;
    QLabel *enter_pin_label;

    void setupUi(QWidget *welcome)
    {
        if (welcome->objectName().isEmpty())
            welcome->setObjectName(QStringLiteral("welcome"));
        welcome->resize(648, 525);
        enter = new QPushButton(welcome);
        enter->setObjectName(QStringLiteral("enter"));
        enter->setGeometry(QRect(370, 340, 75, 23));
        Pin_line_edit = new QLineEdit(welcome);
        Pin_line_edit->setObjectName(QStringLiteral("Pin_line_edit"));
        Pin_line_edit->setGeometry(QRect(330, 270, 113, 20));
        Pin_line_edit->setEchoMode(QLineEdit::Password);
        insert_card_label = new QLabel(welcome);
        insert_card_label->setObjectName(QStringLiteral("insert_card_label"));
        insert_card_label->setGeometry(QRect(180, 200, 81, 31));
        insert_card_line_edit = new QLineEdit(welcome);
        insert_card_line_edit->setObjectName(QStringLiteral("insert_card_line_edit"));
        insert_card_line_edit->setGeometry(QRect(330, 210, 113, 20));
        label = new QLabel(welcome);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 120, 291, 41));
        enter_pin_label = new QLabel(welcome);
        enter_pin_label->setObjectName(QStringLiteral("enter_pin_label"));
        enter_pin_label->setGeometry(QRect(180, 270, 71, 21));

        retranslateUi(welcome);
        QObject::connect(enter, SIGNAL(clicked()), welcome, SLOT(enterClicked()));

        QMetaObject::connectSlotsByName(welcome);
    } // setupUi

    void retranslateUi(QWidget *welcome)
    {
        welcome->setWindowTitle(QApplication::translate("welcome", "welcome", 0));
        enter->setText(QApplication::translate("welcome", "enter", 0));
        insert_card_label->setText(QApplication::translate("welcome", "<html><head/><body><p><span style=\" font-size:12pt;\">insert Card</span></p></body></html>", 0));
        label->setText(QApplication::translate("welcome", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">Welcome to ATM</span></p></body></html>", 0));
        enter_pin_label->setText(QApplication::translate("welcome", "<html><head/><body><p><span style=\" font-size:12pt;\">enter Pin</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class welcome: public Ui_welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
