#ifndef ATMCARDAPPLICATION_H
#define ATMCARDAPPLICATION_H

#include <QWidget>
#include "ui_atmcardapplication.h"
#include"AtmCard.h"
class Teller;
class TellerMenu;

class AtmCardApplication : public QWidget
{
	Q_OBJECT

public:
	AtmCardApplication(Teller* = nullptr,QWidget *parent = 0);
	bool isInt(string p);
	~AtmCardApplication();
	public slots:
		void backButtonClicked();
		void applyButtonClicked();

private:
	Ui::AtmCardApplication ui;
	Teller* teller;
};

#endif // ATMCARDAPPLICATION_H
