/********************************************************************************
** Form generated from reading UI file 'LineStatistics.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINESTATISTICS_H
#define UI_LINESTATISTICS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QListView *folderView;
    QListView *fileTypeView;
    QToolButton *addFolder;
    QToolButton *addFileType;
    QToolButton *removeFolder;
    QToolButton *removeFileType;
    QTextBrowser *resultDisplay;
    QToolButton *startButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(960, 540);
        MainWindow->setMaximumSize(QSize(960, 540));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        folderView = new QListView(centralWidget);
        folderView->setObjectName(QString::fromUtf8("folderView"));
        folderView->setGeometry(QRect(40, 20, 400, 180));
        fileTypeView = new QListView(centralWidget);
        fileTypeView->setObjectName(QString::fromUtf8("fileTypeView"));
        fileTypeView->setGeometry(QRect(40, 230, 400, 180));
        addFolder = new QToolButton(centralWidget);
        addFolder->setObjectName(QString::fromUtf8("addFolder"));
        addFolder->setGeometry(QRect(460, 30, 36, 36));
        addFolder->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/LineStatistics/Resources/button/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addFolder->setIcon(icon);
        addFolder->setIconSize(QSize(36, 36));
        addFileType = new QToolButton(centralWidget);
        addFileType->setObjectName(QString::fromUtf8("addFileType"));
        addFileType->setGeometry(QRect(460, 240, 36, 36));
        addFileType->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        addFileType->setIcon(icon);
        addFileType->setIconSize(QSize(36, 36));
        removeFolder = new QToolButton(centralWidget);
        removeFolder->setObjectName(QString::fromUtf8("removeFolder"));
        removeFolder->setGeometry(QRect(460, 80, 36, 36));
        removeFolder->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/LineStatistics/Resources/button/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeFolder->setIcon(icon1);
        removeFolder->setIconSize(QSize(36, 36));
        removeFileType = new QToolButton(centralWidget);
        removeFileType->setObjectName(QString::fromUtf8("removeFileType"));
        removeFileType->setGeometry(QRect(460, 290, 36, 36));
        removeFileType->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        removeFileType->setIcon(icon1);
        removeFileType->setIconSize(QSize(36, 36));
        resultDisplay = new QTextBrowser(centralWidget);
        resultDisplay->setObjectName(QString::fromUtf8("resultDisplay"));
        resultDisplay->setGeometry(QRect(525, 20, 411, 491));
        startButton = new QToolButton(centralWidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(170, 430, 140, 80));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\245\245\351\232\266\347\271\201\344\275\223"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        startButton->setFont(font);
        startButton->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/LineStatistics/Resources/button/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        startButton->setIcon(icon2);
        startButton->setIconSize(QSize(60, 60));
        startButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(addFolder, SIGNAL(clicked()), MainWindow, SLOT(addFolder()));
        QObject::connect(removeFolder, SIGNAL(clicked()), MainWindow, SLOT(removeFolder()));
        QObject::connect(addFileType, SIGNAL(clicked()), MainWindow, SLOT(addFileType()));
        QObject::connect(removeFileType, SIGNAL(clicked()), MainWindow, SLOT(removeFileType()));
        QObject::connect(startButton, SIGNAL(clicked()), MainWindow, SLOT(startStatistics()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "LineStatistics", nullptr));
        addFolder->setText(QString());
        addFileType->setText(QString());
        removeFolder->setText(QString());
        removeFileType->setText(QString());
        startButton->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINESTATISTICS_H
