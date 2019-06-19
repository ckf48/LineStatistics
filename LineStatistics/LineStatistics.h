#pragma once

#ifdef WIN32 
#pragma execution_character_set("utf-8")
#endif

#include <QtWidgets/QMainWindow>
#include <QFileDialog>
#include <QStringListModel>
#include <QInputDialog>
#include "ui_LineStatistics.h"


class LineStatistics : public QMainWindow
{
Q_OBJECT

public:
	LineStatistics(QWidget* parent = Q_NULLPTR);

private slots:
	void addFolder();
	void removeFolder();
	void addFileType();
	void removeFileType();
	void startStatistics();

private:
	Ui::MainWindow ui;
	QStringListModel folderListModel;
	QStringListModel fileTypeListModel;
};
