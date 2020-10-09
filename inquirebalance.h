#ifndef INQUIREBALANCE_H
#define INQUIREBALANCE_H

#include <QWidget>
#include "ui_inquirebalance.h"
#include "mainmenu.h"

class mainMenu;

class inquireBalance : public QWidget
{
	Q_OBJECT

public:
	inquireBalance(QWidget *parent = 0);
	~inquireBalance();
	public slots:
	void backClicked();

private:
	Ui::inquireBalance ui;
	mainMenu * back;
};

#endif // INQUIREBALANCE_H
