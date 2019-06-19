#include "LineStatistics.h"

LineStatistics::LineStatistics(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.folderView->setModel(&folderListModel);
	ui.fileTypeView->setModel(&fileTypeListModel);
}

void LineStatistics::addFolder()
{
	const auto folderPath = QFileDialog::getExistingDirectory(this, "打开...", QDir::currentPath());
	if (folderPath != "")
	{
		for (const auto& it : folderListModel.stringList())
			if (it == folderPath) return;

		folderListModel.insertRow(folderListModel.rowCount());
		folderListModel.setData(folderListModel.index(folderListModel.rowCount() - 1), folderPath);
	}
}

void LineStatistics::removeFolder()
{
	folderListModel.removeRow(ui.folderView->currentIndex().row());
}

void LineStatistics::addFileType()
{
	const auto fileType = QInputDialog::getText(this, "请输入...", "请输入文件后缀名:");
	if (fileType != "")
	{
		for (const auto& it : fileTypeListModel.stringList())
			if (it == "*." + fileType) return;

		fileTypeListModel.insertRow(fileTypeListModel.rowCount());
		fileTypeListModel.setData(fileTypeListModel.index(fileTypeListModel.rowCount() - 1), "*." + fileType);
	}
}

void LineStatistics::removeFileType()
{
	fileTypeListModel.removeRow(ui.fileTypeView->currentIndex().row());
}

void LineStatistics::startStatistics()
{
	const FileHandler fileHandler(this, folderListModel.stringList(), fileTypeListModel.stringList());
	ui.resultDisplay->setText(fileHandler.getResult());
}
