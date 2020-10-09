/********************************************************************************
** Form generated from reading UI file 'createsavingsaccount.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATESAVINGSACCOUNT_H
#define UI_CREATESAVINGSACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_createSavingsAccount
{
public:
    QPushButton *createAccountButton;
    QLabel *instructionlabel;
    QLabel *heading;
    QLineEdit *lineEdit_2;
    QLineEdit *accountNoEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit;
    QDateEdit *dateEdit;
    QLabel *accountlabel;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_6;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *resultlabel;
    QLabel *label_2;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QLabel *label;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;

    void setupUi(QWidget *createSavingsAccount)
    {
        if (createSavingsAccount->objectName().isEmpty())
            createSavingsAccount->setObjectName(QStringLiteral("createSavingsAccount"));
        createSavingsAccount->resize(720, 671);
        createSavingsAccount->setStyleSheet(QStringLiteral(""));
        createAccountButton = new QPushButton(createSavingsAccount);
        createAccountButton->setObjectName(QStringLiteral("createAccountButton"));
        createAccountButton->setGeometry(QRect(260, 580, 201, 23));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        createAccountButton->setFont(font);
        instructionlabel = new QLabel(createSavingsAccount);
        instructionlabel->setObjectName(QStringLiteral("instructionlabel"));
        instructionlabel->setGeometry(QRect(190, 140, 271, 16));
        instructionlabel->setFont(font);
        heading = new QLabel(createSavingsAccount);
        heading->setObjectName(QStringLiteral("heading"));
        heading->setGeometry(QRect(160, 70, 421, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        font1.setPointSize(20);
        heading->setFont(font1);
        heading->setAlignment(Qt::AlignCenter);
        lineEdit_2 = new QLineEdit(createSavingsAccount);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(300, 270, 241, 20));
        lineEdit_2->setFont(font);
        accountNoEdit = new QLineEdit(createSavingsAccount);
        accountNoEdit->setObjectName(QStringLiteral("accountNoEdit"));
        accountNoEdit->setGeometry(QRect(300, 180, 241, 20));
        accountNoEdit->setFont(font);
        label_4 = new QLabel(createSavingsAccount);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 370, 81, 20));
        label_4->setFont(font);
        lineEdit_4 = new QLineEdit(createSavingsAccount);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(300, 370, 241, 20));
        lineEdit_4->setFont(font);
        lineEdit = new QLineEdit(createSavingsAccount);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(300, 220, 241, 20));
        lineEdit->setFont(font);
        dateEdit = new QDateEdit(createSavingsAccount);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(300, 320, 110, 22));
        dateEdit->setFont(font);
        accountlabel = new QLabel(createSavingsAccount);
        accountlabel->setObjectName(QStringLiteral("accountlabel"));
        accountlabel->setGeometry(QRect(150, 180, 131, 20));
        accountlabel->setFont(font);
        label_5 = new QLabel(createSavingsAccount);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(215, 420, 51, 20));
        label_5->setFont(font);
        lineEdit_3 = new QLineEdit(createSavingsAccount);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(300, 490, 241, 20));
        lineEdit_3->setFont(font);
        lineEdit_6 = new QLineEdit(createSavingsAccount);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(300, 520, 241, 20));
        lineEdit_6->setFont(font);
        label_3 = new QLabel(createSavingsAccount);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 320, 101, 20));
        label_3->setFont(font);
        label_6 = new QLabel(createSavingsAccount);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(190, 490, 91, 20));
        label_6->setFont(font);
        resultlabel = new QLabel(createSavingsAccount);
        resultlabel->setObjectName(QStringLiteral("resultlabel"));
        resultlabel->setGeometry(QRect(170, 120, 241, 21));
        resultlabel->setFont(font);
        label_2 = new QLabel(createSavingsAccount);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(230, 270, 51, 16));
        label_2->setFont(font);
        label_7 = new QLabel(createSavingsAccount);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(190, 520, 101, 20));
        label_7->setFont(font);
        lineEdit_5 = new QLineEdit(createSavingsAccount);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(300, 420, 241, 51));
        lineEdit_5->setFont(font);
        label = new QLabel(createSavingsAccount);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 220, 46, 13));
        label->setFont(font);
        graphicsView = new QGraphicsView(createSavingsAccount);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-135, -129, 1021, 811));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        pushButton = new QPushButton(createSavingsAccount);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(470, 580, 75, 23));
        graphicsView->raise();
        createAccountButton->raise();
        instructionlabel->raise();
        heading->raise();
        lineEdit_2->raise();
        accountNoEdit->raise();
        label_4->raise();
        lineEdit_4->raise();
        lineEdit->raise();
        dateEdit->raise();
        accountlabel->raise();
        label_5->raise();
        lineEdit_3->raise();
        lineEdit_6->raise();
        label_3->raise();
        label_6->raise();
        resultlabel->raise();
        label_2->raise();
        label_7->raise();
        lineEdit_5->raise();
        label->raise();
        pushButton->raise();

        retranslateUi(createSavingsAccount);
        QObject::connect(createAccountButton, SIGNAL(clicked()), createSavingsAccount, SLOT(onCreateSavingsAccountClicked()));
        QObject::connect(pushButton, SIGNAL(clicked()), createSavingsAccount, SLOT(goBack()));

        QMetaObject::connectSlotsByName(createSavingsAccount);
    } // setupUi

    void retranslateUi(QWidget *createSavingsAccount)
    {
        createSavingsAccount->setWindowTitle(QApplication::translate("createSavingsAccount", "createSavingsAccount", 0));
        createAccountButton->setText(QApplication::translate("createSavingsAccount", "create savings account", 0));
        instructionlabel->setText(QApplication::translate("createSavingsAccount", "Please fill the following form :", 0));
        heading->setText(QApplication::translate("createSavingsAccount", "Create Savings Account", 0));
        label_4->setText(QApplication::translate("createSavingsAccount", "Occupation", 0));
        accountlabel->setText(QApplication::translate("createSavingsAccount", "Name (as per CNIC)", 0));
        label_5->setText(QApplication::translate("createSavingsAccount", "Address", 0));
        label_3->setText(QApplication::translate("createSavingsAccount", "Date of Birth", 0));
        label_6->setText(QApplication::translate("createSavingsAccount", "Phone number", 0));
        resultlabel->setText(QString());
        label_2->setText(QApplication::translate("createSavingsAccount", "Country", 0));
        label_7->setText(QApplication::translate("createSavingsAccount", "Email Address", 0));
        label->setText(QApplication::translate("createSavingsAccount", "CNIC", 0));
        pushButton->setText(QApplication::translate("createSavingsAccount", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class createSavingsAccount: public Ui_createSavingsAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATESAVINGSACCOUNT_H
