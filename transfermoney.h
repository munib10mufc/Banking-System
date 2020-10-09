#ifndef TRANSFERMONEY_H
#define TRANSFERMONEY_H

#include "Teller.h"

#include <QWidget>
#include "ui_transfermoney.h"

class TransferMoney : public QWidget
{
	Q_OBJECT

public:
	TransferMoney(Teller * _t , QWidget *parent = 0);
	~TransferMoney();
	void goBack4();
	public slots:
		void onClickTransferMoney();
		void Back4();
private:
	Ui::TransferMoney ui;
	Teller * t;
};

#endif // TRANSFERMONEY_H
