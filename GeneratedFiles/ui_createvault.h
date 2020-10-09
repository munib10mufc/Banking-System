/********************************************************************************
** Form generated from reading UI file 'createvault.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEVAULT_H
#define UI_CREATEVAULT_H

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

class Ui_createVault
{
public:
    QLabel *heading;
    QLineEdit *accountNoEdit;
    QLabel *instructionlabel;
    QLabel *accountlabel;
    QPushButton *createVaultButton;
    QGraphicsView *graphicsView;
    QLabel *messagelabel;
    QPushButton *backButton;

    void setupUi(QWidget *createVault)
    {
        if (createVault->objectName().isEmpty())
            createVault->setObjectName(QStringLiteral("createVault"));
        createVault->resize(724, 401);
        QFont font;
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        font.setKerning(false);
        font.setStyleStrategy(QFont::PreferDefault);
        createVault->setFont(font);
        createVault->setFocusPolicy(Qt::ClickFocus);
        createVault->setContextMenuPolicy(Qt::DefaultContextMenu);
        createVault->setAcceptDrops(false);
        createVault->setStyleSheet(QStringLiteral(""));
        heading = new QLabel(createVault);
        heading->setObjectName(QStringLiteral("heading"));
        heading->setGeometry(QRect(250, 100, 221, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        font1.setPointSize(20);
        heading->setFont(font1);
        heading->setAlignment(Qt::AlignCenter);
        accountNoEdit = new QLineEdit(createVault);
        accountNoEdit->setObjectName(QStringLiteral("accountNoEdit"));
        accountNoEdit->setGeometry(QRect(300, 230, 241, 20));
        QFont font2;
        font2.setFamily(QStringLiteral("OCR A Extended"));
        accountNoEdit->setFont(font2);
        instructionlabel = new QLabel(createVault);
        instructionlabel->setObjectName(QStringLiteral("instructionlabel"));
        instructionlabel->setGeometry(QRect(180, 180, 271, 16));
        instructionlabel->setFont(font2);
        accountlabel = new QLabel(createVault);
        accountlabel->setObjectName(QStringLiteral("accountlabel"));
        accountlabel->setGeometry(QRect(180, 230, 101, 20));
        accountlabel->setFont(font2);
        createVaultButton = new QPushButton(createVault);
        createVaultButton->setObjectName(QStringLiteral("createVaultButton"));
        createVaultButton->setGeometry(QRect(160, 290, 191, 51));
        createVaultButton->setFont(font2);
        graphicsView = new QGraphicsView(createVault);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-245, -129, 1361, 691));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        messagelabel = new QLabel(createVault);
        messagelabel->setObjectName(QStringLiteral("messagelabel"));
        messagelabel->setGeometry(QRect(230, 360, 251, 16));
        messagelabel->setFont(font2);
        backButton = new QPushButton(createVault);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(380, 290, 181, 51));
        graphicsView->raise();
        heading->raise();
        accountNoEdit->raise();
        instructionlabel->raise();
        accountlabel->raise();
        createVaultButton->raise();
        messagelabel->raise();
        backButton->raise();

        retranslateUi(createVault);
        QObject::connect(createVaultButton, SIGNAL(clicked()), createVault, SLOT(createVaultPressed()));
        QObject::connect(backButton, SIGNAL(clicked()), createVault, SLOT(backButtonClicked()));

        QMetaObject::connectSlotsByName(createVault);
    } // setupUi

    void retranslateUi(QWidget *createVault)
    {
        createVault->setWindowTitle(QApplication::translate("createVault", "createVault", 0));
        heading->setText(QApplication::translate("createVault", "Create Vault", 0));
        instructionlabel->setText(QApplication::translate("createVault", "Please enter your account number ", 0));
        accountlabel->setText(QApplication::translate("createVault", "Account number", 0));
        createVaultButton->setText(QApplication::translate("createVault", "create vault", 0));
        messagelabel->setText(QString());
        backButton->setText(QApplication::translate("createVault", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class createVault: public Ui_createVault {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEVAULT_H
