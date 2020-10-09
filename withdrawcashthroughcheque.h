#ifndef WITHDRAWCASHTHROUGHCHEQUE_H
#define WITHDRAWCASHTHROUGHCHEQUE_H

#include <QWidget>
#include "ui_withdrawcashthroughcheque.h"

class withdrawCashThroughCheque : public QWidget
{
	Q_OBJECT

public:
	withdrawCashThroughCheque(QWidget *parent = 0);
	~withdrawCashThroughCheque();

private:
	Ui::withdrawCashThroughCheque ui;
};

#endif // WITHDRAWCASHTHROUGHCHEQUE_H
