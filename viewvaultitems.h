#ifndef VIEWVAULTITEMS_H
#define VIEWVAULTITEMS_H

#include <QWidget>
#include "ui_viewvaultitems.h"
#include "Teller.h"

class VaultSubMenu;
class ViewVaultItems : public QWidget
{
	Q_OBJECT

public:
	ViewVaultItems(Teller *t=nullptr,QWidget *parent = 0);
	~ViewVaultItems();
	public slots:
	 void backButtonClicked();
	 void viewButtonClicked();
	 

private:
	Ui::ViewVaultItems ui;
	Teller *teller;
	VaultSubMenu *submenu;

};

#endif // VIEWVAULTITEMS_H
