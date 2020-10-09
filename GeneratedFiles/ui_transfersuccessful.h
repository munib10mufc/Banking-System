/********************************************************************************
** Form generated from reading UI file 'transfersuccessful.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFERSUCCESSFUL_H
#define UI_TRANSFERSUCCESSFUL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransferSuccessful
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *TransferSuccessful)
    {
        if (TransferSuccessful->objectName().isEmpty())
            TransferSuccessful->setObjectName(QStringLiteral("TransferSuccessful"));
        TransferSuccessful->resize(597, 348);
        label = new QLabel(TransferSuccessful);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 80, 301, 41));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        font.setPointSize(20);
        label->setFont(font);
        pushButton = new QPushButton(TransferSuccessful);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 180, 111, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        pushButton->setFont(font1);
        graphicsView = new QGraphicsView(TransferSuccessful);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-35, -9, 971, 421));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        graphicsView->raise();
        label->raise();
        pushButton->raise();

        retranslateUi(TransferSuccessful);

        QMetaObject::connectSlotsByName(TransferSuccessful);
    } // setupUi

    void retranslateUi(QWidget *TransferSuccessful)
    {
        TransferSuccessful->setWindowTitle(QApplication::translate("TransferSuccessful", "TransferSuccessful", 0));
        label->setText(QApplication::translate("TransferSuccessful", "Transfer Successful", 0));
        pushButton->setText(QApplication::translate("TransferSuccessful", "Main Menu", 0));
    } // retranslateUi

};

namespace Ui {
    class TransferSuccessful: public Ui_TransferSuccessful {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFERSUCCESSFUL_H
