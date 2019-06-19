#pragma once

#ifdef WIN32 
#pragma execution_character_set("utf-8")
#endif

#include <QtWidgets/QMainWindow>
#include "ui_LineStatistics.h"

class LineStatistics :
	public QMainWindow
{
Q_OBJECT

public:
	LineStatistics(QWidget* parent = Q_NULLPTR);

private:
	Ui::MainWindow ui;
};
