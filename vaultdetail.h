#ifndef VAULTDETAIL_H
#define VAULTDETAIL_H

#include <QWidget>
#include "ui_vaultdetail.h"
#include "Teller.h"

class VaultSubMenu;
class VaultDetail : public QWidget
{
	Q_OBJECT

public:
	VaultDetail(Teller *t=nullptr,QWidget *parent = 0);
	~VaultDetail();
	public slots:
	void enterButtonClicked();
	void backButtonClicked();

private:
	Ui::VaultDetail ui;
	Teller *teller;
	VaultSubMenu *submenu;
};

#endif // VAULTDETAIL_H
