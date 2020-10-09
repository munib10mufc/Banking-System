/********************************************************************************
** Form generated from reading UI file 'vaultdetail.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VAULTDETAIL_H
#define UI_VAULTDETAIL_H

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

class Ui_VaultDetail
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *vaultnoEdit;
    QPushButton *enterButton;
    QLabel *label_3;
    QLabel *accountlabel;
    QLabel *label_5;
    QLabel *itemslabel;
    QLabel *messagelabel;
    QPushButton *backButton;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *VaultDetail)
    {
        if (VaultDetail->objectName().isEmpty())
            VaultDetail->setObjectName(QStringLiteral("VaultDetail"));
        VaultDetail->resize(693, 568);
        label = new QLabel(VaultDetail);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 60, 221, 61));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(VaultDetail);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 180, 111, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        label_2->setFont(font1);
        vaultnoEdit = new QLineEdit(VaultDetail);
        vaultnoEdit->setObjectName(QStringLiteral("vaultnoEdit"));
        vaultnoEdit->setGeometry(QRect(260, 180, 251, 20));
        vaultnoEdit->setFont(font1);
        enterButton = new QPushButton(VaultDetail);
        enterButton->setObjectName(QStringLiteral("enterButton"));
        enterButton->setGeometry(QRect(550, 180, 75, 23));
        enterButton->setFont(font1);
        label_3 = new QLabel(VaultDetail);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 260, 71, 21));
        QFont font2;
        font2.setFamily(QStringLiteral("OCR A Extended"));
        font2.setPointSize(10);
        label_3->setFont(font2);
        accountlabel = new QLabel(VaultDetail);
        accountlabel->setObjectName(QStringLiteral("accountlabel"));
        accountlabel->setGeometry(QRect(240, 260, 121, 21));
        accountlabel->setFont(font2);
        label_5 = new QLabel(VaultDetail);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(140, 310, 101, 16));
        label_5->setFont(font2);
        itemslabel = new QLabel(VaultDetail);
        itemslabel->setObjectName(QStringLiteral("itemslabel"));
        itemslabel->setGeometry(QRect(250, 310, 61, 21));
        itemslabel->setFont(font2);
        messagelabel = new QLabel(VaultDetail);
        messagelabel->setObjectName(QStringLiteral("messagelabel"));
        messagelabel->setGeometry(QRect(230, 410, 311, 21));
        messagelabel->setFont(font1);
        backButton = new QPushButton(VaultDetail);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(310, 350, 81, 41));
        backButton->setFont(font1);
        graphicsView = new QGraphicsView(VaultDetail);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-5, -19, 891, 661));
        graphicsView->raise();
        label->raise();
        label_2->raise();
        vaultnoEdit->raise();
        enterButton->raise();
        label_3->raise();
        accountlabel->raise();
        label_5->raise();
        itemslabel->raise();
        messagelabel->raise();
        backButton->raise();

        retranslateUi(VaultDetail);
        QObject::connect(backButton, SIGNAL(clicked()), VaultDetail, SLOT(backButtonClicked()));
        QObject::connect(enterButton, SIGNAL(clicked()), VaultDetail, SLOT(enterButtonClicked()));

        QMetaObject::connectSlotsByName(VaultDetail);
    } // setupUi

    void retranslateUi(QWidget *VaultDetail)
    {
        VaultDetail->setWindowTitle(QApplication::translate("VaultDetail", "VaultDetail", 0));
        label->setText(QApplication::translate("VaultDetail", "Vault Details", 0));
        label_2->setText(QApplication::translate("VaultDetail", "Enter Vault No.", 0));
        enterButton->setText(QApplication::translate("VaultDetail", "Enter", 0));
        label_3->setText(QApplication::translate("VaultDetail", "AccoutNo:", 0));
        accountlabel->setText(QString());
        label_5->setText(QApplication::translate("VaultDetail", "No. Of Items:", 0));
        itemslabel->setText(QString());
        messagelabel->setText(QString());
        backButton->setText(QApplication::translate("VaultDetail", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class VaultDetail: public Ui_VaultDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VAULTDETAIL_H
