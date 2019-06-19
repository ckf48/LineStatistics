#include "FileHandler.h"

FileHandler::FileHandler(QObject* parent, const QStringList& folderList, const QStringList& fileTypeList)
	: QObject(parent), folderList(folderList), fileTypeList(fileTypeList)
{
	calculateResult();
}

void FileHandler::calculateResult()
{
}
