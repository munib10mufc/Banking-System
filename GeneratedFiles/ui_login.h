/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

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

class Ui_Login
{
public:
    QLabel *label;
    QPushButton *login_button;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *login_label;
    QLineEdit *enter_login;
    QLabel *password_label;
    QLineEdit *enter_password;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(568, 419);
        label = new QLabel(Login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 100, 81, 31));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        font.setPointSize(20);
        label->setFont(font);
        login_button = new QPushButton(Login);
        login_button->setObjectName(QStringLiteral("login_button"));
        login_button->setGeometry(QRect(220, 260, 151, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        login_button->setFont(font1);
        login_button->setAutoFillBackground(false);
        login_button->setStyleSheet(QStringLiteral(""));
        formLayoutWidget = new QWidget(Login);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(130, 160, 311, 61));
        formLayoutWidget->setFont(font1);
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        login_label = new QLabel(formLayoutWidget);
        login_label->setObjectName(QStringLiteral("login_label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, login_label);

        enter_login = new QLineEdit(formLayoutWidget);
        enter_login->setObjectName(QStringLiteral("enter_login"));
        enter_login->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, enter_login);

        password_label = new QLabel(formLayoutWidget);
        password_label->setObjectName(QStringLiteral("password_label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, password_label);

        enter_password = new QLineEdit(formLayoutWidget);
        enter_password->setObjectName(QStringLiteral("enter_password"));
        enter_password->setFont(font1);
        enter_password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, enter_password);

        graphicsView = new QGraphicsView(Login);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-115, -89, 771, 581));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        graphicsView->raise();
        label->raise();
        login_button->raise();
        formLayoutWidget->raise();

        retranslateUi(Login);
        QObject::connect(login_button, SIGNAL(clicked()), Login, SLOT(onLoginClicked()));

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", 0));
        label->setText(QApplication::translate("Login", "Login", 0));
        login_button->setText(QApplication::translate("Login", "Login", 0));
        login_label->setText(QApplication::translate("Login", "Login ID", 0));
        password_label->setText(QApplication::translate("Login", "Password", 0));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
