#ifndef INSERTCARDERROR_H
#define INSERTCARDERROR_H

#include <QWidget>
#include "ui_insertcarderror.h"

class InsertCardError : public QWidget
{
	Q_OBJECT

public:
	InsertCardError(QWidget *parent = 0);
	~InsertCardError();

private:
	Ui::InsertCardError ui;
};

#endif // INSERTCARDERROR_H
