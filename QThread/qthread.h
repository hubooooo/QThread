#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_qthread.h"

class QThread : public QMainWindow
{
	Q_OBJECT

public:
	QThread(QWidget *parent = Q_NULLPTR);

private:
	Ui::QThreadClass ui;
};
