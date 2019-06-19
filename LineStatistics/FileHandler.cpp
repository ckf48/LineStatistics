#include "FileHandler.h"

FileHandler::FileHandler(QObject* parent, const QStringList& folderList, const QStringList& fileTypeList)
	: QObject(parent), folderList(folderList), fileTypeList(fileTypeList)
{
	calculateResult();
}

void FileHandler::calculateResult()
{
	for (const auto& folderPath : folderList)
	{
		auto allFileList = getFileInfoList(folderPath);
		QFileInfoList finalFileInfoList;

		for (const auto& fileInfo : allFileList)
		{
			for (const auto& type : fileTypeList)
			{
				if ("*." + fileInfo.suffix() == type)
				{
					finalFileInfoList.append(fileInfo);
					break;
				}
			}
		}

		QMap<QString, int> fileCountInfo;
		for (const auto& fileInfo : finalFileInfoList)
			fileCountInfo[fileInfo.fileName()] = countFileLine(fileInfo.filePath());

		allFilePathInfo[folderPath] = fileCountInfo;
	}

	generateResult();
}

QFileInfoList FileHandler::getFileInfoList(const QString& folderPath)
{
	const QDir dir(folderPath);

	auto fileList = dir.entryInfoList(QDir::Files);
	const auto folderList = dir.entryInfoList(QDir::Dirs | QDir::NoDotAndDotDot);

	for (const auto& i : folderList)
	{
		auto childFileList = getFileInfoList(i.filePath());
		fileList.append(childFileList);
	}

	return fileList;
}

int FileHandler::countFileLine(const QString& filePath)
{
	QFile file(filePath);
	if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) assert(false);
	QTextStream in(&file);

	auto count = 0;
	while (!in.atEnd())
	{
		in.readLine();
		count++;
	}
	return count + 1;
}

void FileHandler::generateResult()
{
	for (auto filePathInfo = allFilePathInfo.begin(); filePathInfo != allFilePathInfo.end(); ++filePathInfo)
	{
		result += filePathInfo.key();
		result += "\n";

		for (auto fileCountInfo = filePathInfo.value().begin();
		     fileCountInfo != filePathInfo.value().end(); ++fileCountInfo)
		{
			result += "\t";
			result += fileCountInfo.key();
			result += " ";
			result += QString::number(fileCountInfo.value());
			result += "\n";
		}
	}
}
