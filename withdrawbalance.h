#ifndef WITHDRAWBALANCE_H
#define WITHDRAWBALANCE_H

#include "Teller.h"
#include <QWidget>
#include "ui_withdrawbalance.h"

class WithdrawBalance : public QWidget
{
	Q_OBJECT

public:
	WithdrawBalance(Teller * _t = nullptr ,QWidget *parent = 0);
	~WithdrawBalance();
	void goBack2();
	public slots:
		void OnEnterClick();
		void Back2();

private:
	Ui::WithdrawBalance ui;
	Teller * t;
};

#endif // WITHDRAWBALANCE_H
