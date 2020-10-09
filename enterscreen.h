#ifndef ENTERSCREEN_H
#define ENTERSCREEN_H
#include "login.h"
#include "welcome.h"
#include <QWidget>
#include "ui_enterscreen.h"

class EnterScreen : public QWidget
{
	Q_OBJECT

public:
	EnterScreen(QWidget *parent = 0);
	~EnterScreen();

	public slots:
	void onBankClicked();
	void onATMClicked();
private:
	Ui::EnterScreen ui;

};

#endif // ENTERSCREEN_H
