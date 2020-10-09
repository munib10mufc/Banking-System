#ifndef CREDITCARDAPPLICATION_H
#define CREDITCARDAPPLICATION_H

#include <QWidget>
#include "ui_creditcardapplication.h"
#include"Teller.h"

class TellerMenu;

class CreditCardApplication : public QWidget
{
	Q_OBJECT

public:
	CreditCardApplication(Teller* t,QWidget *parent = 0);
	bool isInt(string);
	~CreditCardApplication();

	public slots:
		void backButton();
		void applyButtonClicked();

private:
	Ui::CreditCardApplication ui;
	Teller* teller;
};

#endif // CREDITCARDAPPLICATION_H
