#ifndef CHANGEPINERROR_H
#define CHANGEPINERROR_H

#include <QWidget>
#include "ui_changepinerror.h"

class ChangePinError : public QWidget
{
	Q_OBJECT

public:
	ChangePinError(QWidget *parent = 0);
	~ChangePinError();

private:
	Ui::ChangePinError ui;
};

#endif // CHANGEPINERROR_H
