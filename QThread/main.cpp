#include "qthread.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QThread w;
	w.show();
	return a.exec();
}
