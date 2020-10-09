#ifndef CREATECURRENTACCOUNT_H
#define CREATECURRENTACCOUNT_H
#include "Teller.h"
#include <QWidget>
#include "ui_createcurrentaccount.h"

class createCurrentAccount : public QWidget
{
	Q_OBJECT

public:
	createCurrentAccount( Teller * t = nullptr , QWidget *parent = 0);
	~createCurrentAccount();
	void goBack2();
	public slots:
	void onCreateCurrentAccountClicked();
	void goBack();
	
private:
	Ui::createCurrentAccount ui;
	Teller * t;
};

#endif // CREATECURRENTACCOUNT_H
