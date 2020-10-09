/********************************************************************************
** Form generated from reading UI file 'accountdetails.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTDETAILS_H
#define UI_ACCOUNTDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_accountDetails
{
public:
    QGraphicsView *graphicsView;
    QLabel *heading;
    QPushButton *pushButton;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *accountlabel;
    QLineEdit *accountNoEdit;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;

    void setupUi(QWidget *accountDetails)
    {
        if (accountDetails->objectName().isEmpty())
            accountDetails->setObjectName(QStringLiteral("accountDetails"));
        accountDetails->resize(610, 457);
        graphicsView = new QGraphicsView(accountDetails);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-110, -60, 911, 821));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        heading = new QLabel(accountDetails);
        heading->setObjectName(QStringLiteral("heading"));
        heading->setGeometry(QRect(80, 40, 421, 41));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        font.setPointSize(20);
        heading->setFont(font);
        heading->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(accountDetails);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 360, 75, 23));
        widget = new QWidget(accountDetails);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(130, 140, 284, 191));
        formLayout = new QFormLayout(widget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        accountlabel = new QLabel(widget);
        accountlabel->setObjectName(QStringLiteral("accountlabel"));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        accountlabel->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, accountlabel);

        accountNoEdit = new QLineEdit(widget);
        accountNoEdit->setObjectName(QStringLiteral("accountNoEdit"));
        accountNoEdit->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, accountNoEdit);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setFont(font1);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setFont(font1);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_2);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setFont(font1);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lineEdit_5 = new QLineEdit(widget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setFont(font1);

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_5);

        graphicsView->raise();
        lineEdit->raise();
        lineEdit_4->raise();
        label_4->raise();
        label_2->raise();
        lineEdit_2->raise();
        accountNoEdit->raise();
        label->raise();
        accountlabel->raise();
        heading->raise();
        pushButton->raise();

        retranslateUi(accountDetails);
        QObject::connect(pushButton, SIGNAL(clicked()), accountDetails, SLOT(goBack()));

        QMetaObject::connectSlotsByName(accountDetails);
    } // setupUi

    void retranslateUi(QWidget *accountDetails)
    {
        accountDetails->setWindowTitle(QApplication::translate("accountDetails", "accountDetails", 0));
        heading->setText(QApplication::translate("accountDetails", "Account Details", 0));
        pushButton->setText(QApplication::translate("accountDetails", "Back", 0));
        accountlabel->setText(QApplication::translate("accountDetails", "Account Number", 0));
        label->setText(QApplication::translate("accountDetails", "OwnerCNIC", 0));
        label_2->setText(QApplication::translate("accountDetails", "OwnerName", 0));
        label_4->setText(QApplication::translate("accountDetails", "Balance", 0));
        label_5->setText(QApplication::translate("accountDetails", "Type", 0));
    } // retranslateUi

};

namespace Ui {
    class accountDetails: public Ui_accountDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTDETAILS_H
