/********************************************************************************
** Form generated from reading UI file 'welcomeatm.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEATM_H
#define UI_WELCOMEATM_H

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

class Ui_WelcomeAtm
{
public:
    QLineEdit *Pin_line_edit;
    QLabel *insert_card_label;
    QPushButton *enter;
    QLineEdit *insert_card_line_edit;
    QLabel *label;
    QLabel *enter_pin_label;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *WelcomeAtm)
    {
        if (WelcomeAtm->objectName().isEmpty())
            WelcomeAtm->setObjectName(QStringLiteral("WelcomeAtm"));
        WelcomeAtm->resize(677, 476);
        Pin_line_edit = new QLineEdit(WelcomeAtm);
        Pin_line_edit->setObjectName(QStringLiteral("Pin_line_edit"));
        Pin_line_edit->setGeometry(QRect(290, 250, 191, 20));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        Pin_line_edit->setFont(font);
        Pin_line_edit->setEchoMode(QLineEdit::Password);
        insert_card_label = new QLabel(WelcomeAtm);
        insert_card_label->setObjectName(QStringLiteral("insert_card_label"));
        insert_card_label->setGeometry(QRect(180, 190, 91, 16));
        insert_card_label->setFont(font);
        enter = new QPushButton(WelcomeAtm);
        enter->setObjectName(QStringLiteral("enter"));
        enter->setGeometry(QRect(280, 320, 121, 41));
        enter->setFont(font);
        insert_card_line_edit = new QLineEdit(WelcomeAtm);
        insert_card_line_edit->setObjectName(QStringLiteral("insert_card_line_edit"));
        insert_card_line_edit->setGeometry(QRect(290, 190, 191, 20));
        insert_card_line_edit->setFont(font);
        label = new QLabel(WelcomeAtm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 100, 251, 31));
        label->setFont(font);
        enter_pin_label = new QLabel(WelcomeAtm);
        enter_pin_label->setObjectName(QStringLiteral("enter_pin_label"));
        enter_pin_label->setGeometry(QRect(190, 250, 71, 16));
        enter_pin_label->setFont(font);
        graphicsView = new QGraphicsView(WelcomeAtm);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-95, -119, 841, 621));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        graphicsView->raise();
        Pin_line_edit->raise();
        insert_card_label->raise();
        enter->raise();
        insert_card_line_edit->raise();
        label->raise();
        enter_pin_label->raise();

        retranslateUi(WelcomeAtm);

        QMetaObject::connectSlotsByName(WelcomeAtm);
    } // setupUi

    void retranslateUi(QWidget *WelcomeAtm)
    {
        WelcomeAtm->setWindowTitle(QApplication::translate("WelcomeAtm", "WelcomeAtm", 0));
        insert_card_label->setText(QApplication::translate("WelcomeAtm", "<html><head/><body><p><span style=\" font-size:10pt;\">insert Card</span></p></body></html>", 0));
        enter->setText(QApplication::translate("WelcomeAtm", "enter", 0));
        label->setText(QApplication::translate("WelcomeAtm", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600;\">Welcome to ATM</span></p></body></html>", 0));
        enter_pin_label->setText(QApplication::translate("WelcomeAtm", "<html><head/><body><p><span style=\" font-size:10pt;\">enter Pin</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class WelcomeAtm: public Ui_WelcomeAtm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEATM_H
