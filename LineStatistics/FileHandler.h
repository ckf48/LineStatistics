#pragma once

#include <QObject>
#include <QVector>
#include <QMap>
#include <QDir>
#include <QTextStream>

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

	QMap<QString, QMap<QString, int>> allFilePathInfo;

	void calculateResult();
	QFileInfoList getFileInfoList(const QString& folderPath);
	int countFileLine(const QString& filePath);
	void generateResult();
};
