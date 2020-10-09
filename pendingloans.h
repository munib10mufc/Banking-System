#ifndef PENDINGLOANS_H
#define PENDINGLOANS_H

#include <QWidget>
#include "ui_pendingloans.h"
#include"Manager.h"
#include"managermenu.h"

class PendingLoans : public QWidget
{
	Q_OBJECT

public:
	PendingLoans(Manager * _m = nullptr , QWidget *parent = 0);
	~PendingLoans();
	
	public slots:
	void BackClicked();
	void onClickView();

private:
	Ui::PendingLoans ui;
	Manager * m;

};

#endif // PENDINGLOANS_H
