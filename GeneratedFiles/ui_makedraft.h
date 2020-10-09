/********************************************************************************
** Form generated from reading UI file 'makedraft.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAKEDRAFT_H
#define UI_MAKEDRAFT_H

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

class Ui_makeDraft
{
public:
    QPushButton *pushButton;
    QLabel *label_5;
    QLabel *ErrorLabel;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *amountLabel;
    QLineEdit *amountLineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QGraphicsView *graphicsView;
    QPushButton *pushButton_2;

    void setupUi(QWidget *makeDraft)
    {
        if (makeDraft->objectName().isEmpty())
            makeDraft->setObjectName(QStringLiteral("makeDraft"));
        makeDraft->resize(622, 453);
        pushButton = new QPushButton(makeDraft);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 300, 101, 41));
        QFont font;
        font.setFamily(QStringLiteral("OCR A Extended"));
        pushButton->setFont(font);
        label_5 = new QLabel(makeDraft);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(200, 50, 171, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("OCR A Extended"));
        font1.setPointSize(20);
        label_5->setFont(font1);
        ErrorLabel = new QLabel(makeDraft);
        ErrorLabel->setObjectName(QStringLiteral("ErrorLabel"));
        ErrorLabel->setGeometry(QRect(70, 390, 511, 20));
        ErrorLabel->setFont(font);
        layoutWidget = new QWidget(makeDraft);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 120, 331, 131));
        layoutWidget->setFont(font);
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        amountLabel = new QLabel(layoutWidget);
        amountLabel->setObjectName(QStringLiteral("amountLabel"));
        amountLabel->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, amountLabel);

        amountLineEdit = new QLineEdit(layoutWidget);
        amountLineEdit->setObjectName(QStringLiteral("amountLineEdit"));
        amountLineEdit->setFont(font);

        formLayout->setWidget(3, QFormLayout::FieldRole, amountLineEdit);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setFont(font);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_3);

        graphicsView = new QGraphicsView(makeDraft);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-125, -59, 931, 641));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/guidesign/BackgroundImage.png);"));
        pushButton_2 = new QPushButton(makeDraft);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 300, 91, 41));
        graphicsView->raise();
        pushButton->raise();
        label_5->raise();
        ErrorLabel->raise();
        layoutWidget->raise();
        pushButton_2->raise();

        retranslateUi(makeDraft);
        QObject::connect(pushButton, SIGNAL(clicked()), makeDraft, SLOT(makeDraftClicked()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), makeDraft, SLOT(changeForm()));

        QMetaObject::connectSlotsByName(makeDraft);
    } // setupUi

    void retranslateUi(QWidget *makeDraft)
    {
        makeDraft->setWindowTitle(QApplication::translate("makeDraft", "makeDraft", 0));
        pushButton->setText(QApplication::translate("makeDraft", "Make Draft", 0));
        label_5->setText(QApplication::translate("makeDraft", "Make Draft", 0));
        ErrorLabel->setText(QString());
        label->setText(QApplication::translate("makeDraft", "Senders Name", 0));
        label_2->setText(QApplication::translate("makeDraft", "Recievers Name", 0));
        amountLabel->setText(QApplication::translate("makeDraft", "Amount", 0));
        label_3->setText(QApplication::translate("makeDraft", "DraftID", 0));
        pushButton_2->setText(QApplication::translate("makeDraft", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class makeDraft: public Ui_makeDraft {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKEDRAFT_H
