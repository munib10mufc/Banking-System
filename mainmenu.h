#ifndef MAINMENU_H
#define MAINMENU_H

#include <QWidget>
#include "ui_mainmenu.h"
#include "withdrawbalanceatm.h"
#include"changepin.h"
#include"inquirebalance.h"

class withDrawBalance ;
class	inquireBalance ;
class	changePin ;
class welcome;

class mainMenu : public QWidget
{
	Q_OBJECT

public:
	mainMenu(QWidget *parent = 0);
	~mainMenu();
	public slots:
	void withdrawClicked();
	void  changePinClicked();
	void inquireBalanceClicked();

private:
	Ui::mainMenu ui;
	withDrawBalance * w;
	inquireBalance * b;
	changePin * p;
};

#endif // MAINMENU_H
