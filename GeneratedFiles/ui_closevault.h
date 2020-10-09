/********************************************************************************
** Form generated from reading UI file 'closevault.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOSEVAULT_H
#define UI_CLOSEVAULT_H

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

class Ui_closeVault
{
public:
    QLabel *vaultlabel;
    QLineEdit *vaultNoEdit;
    QPushButton *closeVaultButton;
    QLabel *instructionlabel;
    QLabel *heading;
    QGraphicsView *graphicsView;
    QLabel *accountlabel;
    QLineEdit *accountNoEdit;
    QLabel *messagelabel;
    QPushButton *backButton;

    void setupUi(QWidget *closeVault)
    {
        if (closeVault->objectName().isEmpty())
            closeVault->setObjectName(QStringLiteral("closeVault"));
        closeVault->resize(714, 446);
        closeVault->setStyleSheet(QStringLiteral(""));
        vaultlabel = new QLabel(closeVault);
        vaultlabel->setObjectName(QStringLiteral("vaultlabel"));
        vaultlabel->setGeometry(QRect(180, 250, 101, 20));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        vaultlabel->setFont(font);
        vaultNoEdit = new QLineEdit(closeVault);
        vaultNoEdit->setObjectName(QStringLiteral("vaultNoEdit"));
        vaultNoEdit->setGeometry(QRect(290, 250, 241, 20));
        vaultNoEdit->setFont(font);
        closeVaultButton = new QPushButton(closeVault);
        closeVaultButton->setObjectName(QStringLiteral("closeVaultButton"));
        closeVaultButton->setGeometry(QRect(190, 300, 181, 51));
        closeVaultButton->setFont(font);
        instructionlabel = new QLabel(closeVault);
        instructionlabel->setObjectName(QStringLiteral("instructionlabel"));
        instructionlabel->setGeometry(QRect(180, 180, 231, 16));
        instructionlabel->setFont(font);
        heading = new QLabel(closeVault);
        heading->setObjectName(QStringLiteral("heading"));
        heading->setGeometry(QRect(270, 90, 181, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        font1.setPointSize(20);
        heading->setFont(font1);
        heading->setAlignment(Qt::AlignCenter);
        graphicsView = new QGraphicsView(closeVault);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-300, -130, 1271, 691));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        accountlabel = new QLabel(closeVault);
        accountlabel->setObjectName(QStringLiteral("accountlabel"));
        accountlabel->setGeometry(QRect(180, 210, 71, 16));
        accountlabel->setFont(font);
        accountNoEdit = new QLineEdit(closeVault);
        accountNoEdit->setObjectName(QStringLiteral("accountNoEdit"));
        accountNoEdit->setGeometry(QRect(290, 210, 241, 20));
        accountNoEdit->setFont(font);
        messagelabel = new QLabel(closeVault);
        messagelabel->setObjectName(QStringLiteral("messagelabel"));
        messagelabel->setGeometry(QRect(210, 390, 331, 16));
        QFont font2;
        font2.setFamily(QStringLiteral("OCR A Extended"));
        font2.setPointSize(10);
        messagelabel->setFont(font2);
        backButton = new QPushButton(closeVault);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(420, 300, 151, 51));
        graphicsView->raise();
        vaultlabel->raise();
        vaultNoEdit->raise();
        closeVaultButton->raise();
        instructionlabel->raise();
        heading->raise();
        accountlabel->raise();
        accountNoEdit->raise();
        messagelabel->raise();
        backButton->raise();

        retranslateUi(closeVault);
        QObject::connect(closeVaultButton, SIGNAL(clicked()), closeVault, SLOT(closeVaultClicked()));
        QObject::connect(backButton, SIGNAL(clicked()), closeVault, SLOT(backButtonClicked()));

        QMetaObject::connectSlotsByName(closeVault);
    } // setupUi

    void retranslateUi(QWidget *closeVault)
    {
        closeVault->setWindowTitle(QApplication::translate("closeVault", "closeVault", 0));
        vaultlabel->setText(QApplication::translate("closeVault", "Vault No", 0));
        closeVaultButton->setText(QApplication::translate("closeVault", "close vault", 0));
        instructionlabel->setText(QApplication::translate("closeVault", "Please enter the following details", 0));
        heading->setText(QApplication::translate("closeVault", "Close Vault", 0));
        accountlabel->setText(QApplication::translate("closeVault", "Account No", 0));
        messagelabel->setText(QString());
        backButton->setText(QApplication::translate("closeVault", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class closeVault: public Ui_closeVault {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOSEVAULT_H
