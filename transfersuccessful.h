#ifndef TRANSFERSUCCESSFUL_H
#define TRANSFERSUCCESSFUL_H

#include <QWidget>
#include "ui_transfersuccessful.h"

class TransferSuccessful : public QWidget
{
	Q_OBJECT

public:
	TransferSuccessful(QWidget *parent = 0);
	~TransferSuccessful();

private:
	Ui::TransferSuccessful ui;
};

#endif // TRANSFERSUCCESSFUL_H
