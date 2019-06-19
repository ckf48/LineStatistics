#pragma once

#include <QObject>

class FileHandler : public QObject
{
Q_OBJECT

public:
	FileHandler(QObject* parent, const QStringList& folderList, const QStringList& fileTypeList);
	QString getResult() const { return result; }

private:
	QStringList folderList;
	QStringList fileTypeList;

	QString result;

	void calculateResult();
};
