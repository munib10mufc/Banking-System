#ifndef WELCOME_H
#define WELCOME_H

#include <QWidget>
#include "ui_welcome.h"
#include"mainmenu.h"

class mainMenu;

class welcome : public QWidget
{
	Q_OBJECT

public:
	welcome(QWidget *parent = 0);
	~welcome();
	public slots:
	void enterClicked();


	
private:
	Ui::welcome ui;
	mainMenu * enter;
};

#endif // WELCOME_H
