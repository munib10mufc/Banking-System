#ifndef CHANGEPIN_H
#define CHANGEPIN_H

#include <QWidget>
#include "ui_changepin.h"
#include "mainmenu.h"

class mainMenu;
class changePin : public QWidget
{
	Q_OBJECT

public:
	changePin(QWidget *parent = 0);
	~changePin();
	public slots:
	void backClicked();
	void onEnterClick();

private:
	Ui::changePin ui;
	mainMenu * back;
};

#endif // CHANGEPIN_H
