/********************************************************************************
** Form generated from reading UI file 'inquirebalance.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INQUIREBALANCE_H
#define UI_INQUIREBALANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inquireBalance
{
public:
    QLabel *label_2;
    QLabel *label;
    QLabel *label_3;
    QPushButton *pushButton;

    void setupUi(QWidget *inquireBalance)
    {
        if (inquireBalance->objectName().isEmpty())
            inquireBalance->setObjectName(QStringLiteral("inquireBalance"));
        inquireBalance->resize(631, 455);
        label_2 = new QLabel(inquireBalance);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 180, 171, 41));
        label = new QLabel(inquireBalance);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 110, 191, 51));
        label_3 = new QLabel(inquireBalance);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(430, 190, 111, 21));
        label_3->setTextFormat(Qt::RichText);
        pushButton = new QPushButton(inquireBalance);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(410, 300, 75, 23));

        retranslateUi(inquireBalance);
        QObject::connect(pushButton, SIGNAL(clicked()), inquireBalance, SLOT(backClicked()));

        QMetaObject::connectSlotsByName(inquireBalance);
    } // setupUi

    void retranslateUi(QWidget *inquireBalance)
    {
        inquireBalance->setWindowTitle(QApplication::translate("inquireBalance", "inquireBalance", 0));
        label_2->setText(QApplication::translate("inquireBalance", "<html><head/><body><p><span style=\" font-size:12pt;\">Your Account Balance is </span></p></body></html>", 0));
        label->setText(QApplication::translate("inquireBalance", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">Balance Inquiry</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("inquireBalance", "<html><head/><body><p><span style=\" font-size:12pt;\">XXXXXX</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("inquireBalance", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class inquireBalance: public Ui_inquireBalance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INQUIREBALANCE_H
