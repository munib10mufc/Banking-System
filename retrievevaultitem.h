#ifndef RETRIEVEVAULTITEM_H
#define RETRIEVEVAULTITEM_H

#include <QWidget>
#include "ui_retrievevaultitem.h"
#include "Teller.h"

class VaultSubMenu;

class RetrieveVaultItem : public QWidget
{
	Q_OBJECT

public:
	RetrieveVaultItem(Teller *t=nullptr, QWidget *parent = 0);
	~RetrieveVaultItem();
	
	public slots:
	void retrieveButtonClicked();
	void backButtonClicked();

private:
	Ui::RetrieveVaultItem ui;
	Teller *teller;
	VaultSubMenu *submenu;
};

#endif // RETRIEVEVAULTITEM_H
