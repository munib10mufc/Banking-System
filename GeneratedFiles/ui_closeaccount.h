/********************************************************************************
** Form generated from reading UI file 'closeaccount.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOSEACCOUNT_H
#define UI_CLOSEACCOUNT_H

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

class Ui_closeAccount
{
public:
    QLineEdit *accountNoEdit;
    QLabel *accountlabel;
    QLabel *instructionlabel;
    QPushButton *closeVaultButton;
    QLabel *heading;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;

    void setupUi(QWidget *closeAccount)
    {
        if (closeAccount->objectName().isEmpty())
            closeAccount->setObjectName(QStringLiteral("closeAccount"));
        closeAccount->resize(592, 447);
        closeAccount->setStyleSheet(QStringLiteral(""));
        accountNoEdit = new QLineEdit(closeAccount);
        accountNoEdit->setObjectName(QStringLiteral("accountNoEdit"));
        accountNoEdit->setGeometry(QRect(230, 200, 241, 20));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        accountNoEdit->setFont(font);
        accountlabel = new QLabel(closeAccount);
        accountlabel->setObjectName(QStringLiteral("accountlabel"));
        accountlabel->setGeometry(QRect(120, 200, 101, 20));
        accountlabel->setFont(font);
        instructionlabel = new QLabel(closeAccount);
        instructionlabel->setObjectName(QStringLiteral("instructionlabel"));
        instructionlabel->setGeometry(QRect(120, 150, 271, 16));
        instructionlabel->setFont(font);
        closeVaultButton = new QPushButton(closeAccount);
        closeVaultButton->setObjectName(QStringLiteral("closeVaultButton"));
        closeVaultButton->setGeometry(QRect(210, 270, 181, 51));
        closeVaultButton->setFont(font);
        heading = new QLabel(closeAccount);
        heading->setObjectName(QStringLiteral("heading"));
        heading->setGeometry(QRect(190, 40, 211, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        font1.setPointSize(20);
        heading->setFont(font1);
        heading->setAlignment(Qt::AlignCenter);
        graphicsView = new QGraphicsView(closeAccount);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-5, -9, 801, 461));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        pushButton = new QPushButton(closeAccount);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 370, 75, 23));
        graphicsView->raise();
        accountNoEdit->raise();
        accountlabel->raise();
        instructionlabel->raise();
        closeVaultButton->raise();
        heading->raise();
        pushButton->raise();

        retranslateUi(closeAccount);
        QObject::connect(closeVaultButton, SIGNAL(clicked()), closeAccount, SLOT(OnCloseAccountClicked()));
        QObject::connect(pushButton, SIGNAL(clicked()), closeAccount, SLOT(Back6()));

        QMetaObject::connectSlotsByName(closeAccount);
    } // setupUi

    void retranslateUi(QWidget *closeAccount)
    {
        closeAccount->setWindowTitle(QApplication::translate("closeAccount", "closeAccount", 0));
        accountlabel->setText(QApplication::translate("closeAccount", "Account number", 0));
        instructionlabel->setText(QApplication::translate("closeAccount", "Please enter your account number ", 0));
        closeVaultButton->setText(QApplication::translate("closeAccount", "close account", 0));
        heading->setText(QApplication::translate("closeAccount", "Close Account", 0));
        pushButton->setText(QApplication::translate("closeAccount", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class closeAccount: public Ui_closeAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOSEACCOUNT_H
