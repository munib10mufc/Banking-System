/********************************************************************************
** Form generated from reading UI file 'creditcardapplication.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITCARDAPPLICATION_H
#define UI_CREDITCARDAPPLICATION_H

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

class Ui_CreditCardApplication
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;

    void setupUi(QWidget *CreditCardApplication)
    {
        if (CreditCardApplication->objectName().isEmpty())
            CreditCardApplication->setObjectName(QStringLiteral("CreditCardApplication"));
        CreditCardApplication->resize(590, 417);
        label = new QLabel(CreditCardApplication);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 20, 181, 16));
        label_2 = new QLabel(CreditCardApplication);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 130, 91, 16));
        lineEdit = new QLineEdit(CreditCardApplication);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(250, 130, 191, 20));
        pushButton = new QPushButton(CreditCardApplication);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(340, 300, 75, 41));
        pushButton_2 = new QPushButton(CreditCardApplication);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 300, 75, 41));
        label_3 = new QLabel(CreditCardApplication);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 170, 61, 16));
        label_4 = new QLabel(CreditCardApplication);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 210, 71, 16));
        label_5 = new QLabel(CreditCardApplication);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(140, 90, 46, 13));
        lineEdit_2 = new QLineEdit(CreditCardApplication);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(250, 90, 191, 20));
        lineEdit_3 = new QLineEdit(CreditCardApplication);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(250, 170, 191, 20));
        lineEdit_4 = new QLineEdit(CreditCardApplication);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(250, 210, 191, 20));

        retranslateUi(CreditCardApplication);
        QObject::connect(pushButton_2, SIGNAL(clicked()), CreditCardApplication, SLOT(backButton()));
        QObject::connect(pushButton, SIGNAL(clicked()), CreditCardApplication, SLOT(applyButtonClicked()));

        QMetaObject::connectSlotsByName(CreditCardApplication);
    } // setupUi

    void retranslateUi(QWidget *CreditCardApplication)
    {
        CreditCardApplication->setWindowTitle(QApplication::translate("CreditCardApplication", "CreditCardApplication", 0));
        label->setText(QApplication::translate("CreditCardApplication", "Credit card Application Form", 0));
        label_2->setText(QApplication::translate("CreditCardApplication", "Account Number", 0));
        pushButton->setText(QApplication::translate("CreditCardApplication", "Apply", 0));
        pushButton_2->setText(QApplication::translate("CreditCardApplication", "Back", 0));
        label_3->setText(QApplication::translate("CreditCardApplication", "Issued Date", 0));
        label_4->setText(QApplication::translate("CreditCardApplication", "Expiry Date", 0));
        label_5->setText(QApplication::translate("CreditCardApplication", "Card ID", 0));
    } // retranslateUi

};

namespace Ui {
    class CreditCardApplication: public Ui_CreditCardApplication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITCARDAPPLICATION_H
