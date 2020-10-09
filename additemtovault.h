#ifndef ADDITEMTOVAULT_H
#define ADDITEMTOVAULT_H

#include <QWidget>
#include "ui_additemtovault.h"
#include "Teller.h"

class VaultSubMenu;
class AddItemToVault : public QWidget
{
	Q_OBJECT

public:
	AddItemToVault(Teller *t=nullptr,QWidget *parent = 0);
	~AddItemToVault();
	public slots:
		void addItemClicked();
		void backButtonClicked();

private:
	Ui::AddItemToVault ui;
	Teller *teller;
	VaultSubMenu *submenu;
};

#endif // ADDITEMTOVAULT_H
