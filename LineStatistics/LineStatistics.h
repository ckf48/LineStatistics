#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_LineStatistics.h"

class LineStatistics : public QMainWindow
{
	Q_OBJECT

public:
	LineStatistics(QWidget *parent = Q_NULLPTR);

private:
	Ui::LineStatisticsClass ui;
};
