#ifndef WITHDRAWBALANCE_H
#define WITHDRAWBALANCE_H

#include <QWidget>
#include "ui_withdrawbalanceatm.h"
#include "mainmenu.h"

class mainMenu;
class withDrawBalance : public QWidget
{
	Q_OBJECT

public:
	withDrawBalance(QWidget *parent = 0);
	~withDrawBalance();
	public slots:
	void backClicked();
	void onenterClicked();

private:
	Ui::withDrawBalance ui;
	mainMenu * back;
};

#endif // WITHDRAWBALANCE_H
