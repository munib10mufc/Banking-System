#ifndef ATMMAINMENU_H
#define ATMMAINMENU_H

#include <QWidget>
#include "ui_atmmainmenu.h"

class AtmMainMenu : public QWidget
{
	Q_OBJECT

public:
	AtmMainMenu(QWidget *parent = 0);
	~AtmMainMenu();

private:
	Ui::AtmMainMenu ui;
};

#endif // ATMMAINMENU_H
