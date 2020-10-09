/********************************************************************************
** Form generated from reading UI file 'enterscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTERSCREEN_H
#define UI_ENTERSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EnterScreen
{
public:
    QGraphicsView *graphicsView;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *EnterScreen)
    {
        if (EnterScreen->objectName().isEmpty())
            EnterScreen->setObjectName(QStringLiteral("EnterScreen"));
        EnterScreen->resize(552, 480);
        graphicsView = new QGraphicsView(EnterScreen);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-160, -130, 901, 701));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        layoutWidget = new QWidget(EnterScreen);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 200, 291, 81));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(EnterScreen);
        QObject::connect(pushButton, SIGNAL(clicked()), EnterScreen, SLOT(onBankClicked()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), EnterScreen, SLOT(onATMClicked()));

        QMetaObject::connectSlotsByName(EnterScreen);
    } // setupUi

    void retranslateUi(QWidget *EnterScreen)
    {
        EnterScreen->setWindowTitle(QApplication::translate("EnterScreen", "EnterScreen", 0));
        pushButton->setText(QApplication::translate("EnterScreen", "Enter Bank", 0));
        pushButton_2->setText(QApplication::translate("EnterScreen", "Enter ATM", 0));
    } // retranslateUi

};

namespace Ui {
    class EnterScreen: public Ui_EnterScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTERSCREEN_H
