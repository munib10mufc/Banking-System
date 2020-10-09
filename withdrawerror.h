#ifndef WITHDRAWERROR_H
#define WITHDRAWERROR_H

#include <QWidget>
#include "ui_withdrawerror.h"

class WithdrawError : public QWidget
{
	Q_OBJECT

public:
	WithdrawError(QWidget *parent = 0);
	~WithdrawError();

private:
	Ui::WithdrawError ui;
};

#endif // WITHDRAWERROR_H
