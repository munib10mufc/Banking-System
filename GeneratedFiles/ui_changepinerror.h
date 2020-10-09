/********************************************************************************
** Form generated from reading UI file 'changepinerror.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPINERROR_H
#define UI_CHANGEPINERROR_H

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

class Ui_ChangePinError
{
public:
    QLabel *label_2;
    QLabel *label;
    QPushButton *pushButton;
    QGraphicsView *graphicsView;

    void setupUi(QWidget *ChangePinError)
    {
        if (ChangePinError->objectName().isEmpty())
            ChangePinError->setObjectName(QStringLiteral("ChangePinError"));
        ChangePinError->resize(515, 351);
        label_2 = new QLabel(ChangePinError);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 160, 401, 41));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        label_2->setFont(font);
        label_2->setFrameShape(QFrame::WinPanel);
        label = new QLabel(ChangePinError);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 50, 281, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        font1.setPointSize(20);
        label->setFont(font1);
        label->setFrameShape(QFrame::NoFrame);
        label->setScaledContents(false);
        label->setWordWrap(false);
        label->setIndent(0);
        pushButton = new QPushButton(ChangePinError);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 260, 111, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("OCR A Extended"));
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        font2.setKerning(true);
        pushButton->setFont(font2);
        pushButton->setFocusPolicy(Qt::StrongFocus);
        pushButton->setContextMenuPolicy(Qt::DefaultContextMenu);
        pushButton->setAutoFillBackground(false);
        graphicsView = new QGraphicsView(ChangePinError);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-75, -109, 771, 521));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        graphicsView->raise();
        label_2->raise();
        label->raise();
        pushButton->raise();

        retranslateUi(ChangePinError);

        QMetaObject::connectSlotsByName(ChangePinError);
    } // setupUi

    void retranslateUi(QWidget *ChangePinError)
    {
        ChangePinError->setWindowTitle(QApplication::translate("ChangePinError", "ChangePinError", 0));
        label_2->setText(QApplication::translate("ChangePinError", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Error: old pin entered is incorrect </span></p></body></html>", 0));
        label->setText(QApplication::translate("ChangePinError", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">Change Pin Error </span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("ChangePinError", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class ChangePinError: public Ui_ChangePinError {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPINERROR_H
