#ifndef WELCOMEATM_H
#define WELCOMEATM_H

#include <QWidget>
#include "ui_welcomeatm.h"

class WelcomeAtm : public QWidget
{
	Q_OBJECT

public:
	WelcomeAtm(QWidget *parent = 0);
	~WelcomeAtm();

private:
	Ui::WelcomeAtm ui;
};

#endif // WELCOMEATM_H
