/********************************************************************************
** Form generated from reading UI file 'insertcarderror.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTCARDERROR_H
#define UI_INSERTCARDERROR_H

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

class Ui_InsertCardError
{
public:
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *InsertCardError)
    {
        if (InsertCardError->objectName().isEmpty())
            InsertCardError->setObjectName(QStringLiteral("InsertCardError"));
        InsertCardError->resize(548, 375);
        label_2 = new QLabel(InsertCardError);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 170, 451, 21));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        label_2->setFont(font);
        label_2->setFrameShape(QFrame::Box);
        label = new QLabel(InsertCardError);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 70, 191, 31));
        label->setFont(font);
        pushButton = new QPushButton(InsertCardError);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 250, 111, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        graphicsView = new QGraphicsView(InsertCardError);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-35, -209, 591, 621));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        graphicsView->raise();
        label_2->raise();
        label->raise();
        pushButton->raise();

        retranslateUi(InsertCardError);

        QMetaObject::connectSlotsByName(InsertCardError);
    } // setupUi

    void retranslateUi(QWidget *InsertCardError)
    {
        InsertCardError->setWindowTitle(QApplication::translate("InsertCardError", "InsertCardError", 0));
        label_2->setText(QApplication::translate("InsertCardError", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">Error:You inserted Expired or Damaged Card!!</span></p></body></html>", 0));
        label->setText(QApplication::translate("InsertCardError", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600;\">Insert Card</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("InsertCardError", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class InsertCardError: public Ui_InsertCardError {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTCARDERROR_H
