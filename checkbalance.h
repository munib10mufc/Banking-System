#ifndef CHECKBALANCE_H
#define CHECKBALANCE_H

#include <QWidget>
#include "ui_checkbalance.h"

class checkBalance : public QWidget
{
	Q_OBJECT

public:
	checkBalance(QWidget *parent = 0);
	~checkBalance();

private:
	Ui::checkBalance ui;
};

#endif // CHECKBALANCE_H
