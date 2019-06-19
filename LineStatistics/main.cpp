#include "LineStatistics.h"
#include <QtWidgets/QApplication>

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	LineStatistics w;
	w.show();
	return a.exec();
}
