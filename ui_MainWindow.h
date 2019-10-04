/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *new_file;
    QAction *open_file;
    QAction *save_file;
    QAction *save_as_file;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QComboBox *xialalan;
    QToolButton *toolButton;
    QLabel *areaLabel_2;
    QLabel *radiusLabel;
    QLabel *areaLabel_1;
    QLineEdit *radiusLineEdit;
    QPushButton *countBtn;
    QMenuBar *menuBar;
    QMenu *menu1;
    QMenu *menu2;
    QMenu *menu3;
    QMenu *menu4;
    QMenu *menu5;
    QMenu *menu6;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QStringLiteral("MainWindowClass"));
        MainWindowClass->resize(1080, 799);
        new_file = new QAction(MainWindowClass);
        new_file->setObjectName(QStringLiteral("new_file"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/MainWindow/Resources/hh.jpg"), QSize(), QIcon::Normal, QIcon::On);
        new_file->setIcon(icon);
        open_file = new QAction(MainWindowClass);
        open_file->setObjectName(QStringLiteral("open_file"));
        save_file = new QAction(MainWindowClass);
        save_file->setObjectName(QStringLiteral("save_file"));
        save_as_file = new QAction(MainWindowClass);
        save_as_file->setObjectName(QStringLiteral("save_as_file"));
        centralWidget = new QWidget(MainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(250, 160, 200, 200));
        xialalan = new QComboBox(centralWidget);
        xialalan->addItem(QString());
        xialalan->addItem(QString());
        xialalan->addItem(QString());
        xialalan->addItem(QString());
        xialalan->addItem(QString());
        xialalan->addItem(QString());
        xialalan->addItem(QString());
        xialalan->addItem(QString());
        xialalan->addItem(QString());
        xialalan->addItem(QString());
        xialalan->addItem(QString());
        xialalan->addItem(QString());
        xialalan->setObjectName(QStringLiteral("xialalan"));
        xialalan->setGeometry(QRect(560, 60, 111, 31));
        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(120, 170, 61, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/MainWindow/Resources/jij.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral(":/MainWindow/Resources/hh.jpg"), QSize(), QIcon::Normal, QIcon::On);
        toolButton->setIcon(icon1);
        toolButton->setCheckable(true);
        toolButton->setChecked(false);
        areaLabel_2 = new QLabel(centralWidget);
        areaLabel_2->setObjectName(QStringLiteral("areaLabel_2"));
        areaLabel_2->setGeometry(QRect(390, 440, 54, 12));
        areaLabel_2->setFrameShape(QFrame::Panel);
        areaLabel_2->setFrameShadow(QFrame::Sunken);
        radiusLabel = new QLabel(centralWidget);
        radiusLabel->setObjectName(QStringLiteral("radiusLabel"));
        radiusLabel->setGeometry(QRect(100, 440, 54, 12));
        areaLabel_1 = new QLabel(centralWidget);
        areaLabel_1->setObjectName(QStringLiteral("areaLabel_1"));
        areaLabel_1->setGeometry(QRect(330, 440, 54, 12));
        radiusLineEdit = new QLineEdit(centralWidget);
        radiusLineEdit->setObjectName(QStringLiteral("radiusLineEdit"));
        radiusLineEdit->setGeometry(QRect(170, 440, 113, 20));
        countBtn = new QPushButton(centralWidget);
        countBtn->setObjectName(QStringLiteral("countBtn"));
        countBtn->setGeometry(QRect(340, 490, 75, 23));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/MainWindow/Resources/hh.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QStringLiteral(":/MainWindow/Resources/jij.png"), QSize(), QIcon::Normal, QIcon::On);
        countBtn->setIcon(icon2);
        countBtn->setCheckable(true);
        MainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1080, 23));
        menu1 = new QMenu(menuBar);
        menu1->setObjectName(QStringLiteral("menu1"));
        menu2 = new QMenu(menuBar);
        menu2->setObjectName(QStringLiteral("menu2"));
        menu3 = new QMenu(menuBar);
        menu3->setObjectName(QStringLiteral("menu3"));
        menu4 = new QMenu(menuBar);
        menu4->setObjectName(QStringLiteral("menu4"));
        menu5 = new QMenu(menuBar);
        menu5->setObjectName(QStringLiteral("menu5"));
        menu6 = new QMenu(menuBar);
        menu6->setObjectName(QStringLiteral("menu6"));
        MainWindowClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindowClass->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindowClass);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindowClass->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menu1->menuAction());
        menuBar->addAction(menu2->menuAction());
        menuBar->addAction(menu3->menuAction());
        menuBar->addAction(menu4->menuAction());
        menuBar->addAction(menu5->menuAction());
        menuBar->addAction(menu6->menuAction());
        menu1->addAction(new_file);
        menu1->addAction(open_file);
        menu1->addAction(save_file);
        menu1->addAction(save_as_file);
        toolBar->addSeparator();
        toolBar->addAction(new_file);
        toolBar->addAction(open_file);

        retranslateUi(MainWindowClass);
        QObject::connect(xialalan, SIGNAL(currentIndexChanged(QString)), MainWindowClass, SLOT(hahhah(QString)));
        QObject::connect(countBtn, SIGNAL(clicked()), MainWindowClass, SLOT(houhou()));

        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "MainWindow", nullptr));
        new_file->setText(QApplication::translate("MainWindowClass", "new_file", nullptr));
        open_file->setText(QApplication::translate("MainWindowClass", "open_file", nullptr));
        save_file->setText(QApplication::translate("MainWindowClass", "save_file", nullptr));
        save_as_file->setText(QApplication::translate("MainWindowClass", "save_as_file", nullptr));
        xialalan->setItemText(0, QApplication::translate("MainWindowClass", "P\345\215\225\345\205\203", nullptr));
        xialalan->setItemText(1, QApplication::translate("MainWindowClass", "D\345\215\225\345\205\203", nullptr));
        xialalan->setItemText(2, QApplication::translate("MainWindowClass", "G\345\215\225\345\205\203", nullptr));
        xialalan->setItemText(3, QApplication::translate("MainWindowClass", "L\345\215\225\345\205\203", nullptr));
        xialalan->setItemText(4, QApplication::translate("MainWindowClass", "K\345\215\225\345\205\203", nullptr));
        xialalan->setItemText(5, QApplication::translate("MainWindowClass", "G\342\200\230\345\215\225\345\205\203", nullptr));
        xialalan->setItemText(6, QApplication::translate("MainWindowClass", "I-WP\345\215\225\345\205\203", nullptr));
        xialalan->setItemText(7, QApplication::translate("MainWindowClass", "F-RD\345\215\225\345\205\203", nullptr));
        xialalan->setItemText(8, QApplication::translate("MainWindowClass", "Tubular P\345\215\225\345\205\203", nullptr));
        xialalan->setItemText(9, QApplication::translate("MainWindowClass", "Tubular G\345\215\225\345\205\203", nullptr));
        xialalan->setItemText(10, QApplication::translate("MainWindowClass", "I2-Y**\345\215\225\345\205\203", nullptr));
        xialalan->setItemText(11, QApplication::translate("MainWindowClass", "P2-DG\345\215\225\345\205\203", nullptr));

        toolButton->setText(QApplication::translate("MainWindowClass", "\346\265\217\350\247\210", nullptr));
        areaLabel_2->setText(QString());
        radiusLabel->setText(QApplication::translate("MainWindowClass", "\345\215\212\345\276\204", nullptr));
        areaLabel_1->setText(QApplication::translate("MainWindowClass", "\351\235\242\347\247\257", nullptr));
        countBtn->setText(QApplication::translate("MainWindowClass", "\350\256\241\347\256\227", nullptr));
        menu1->setTitle(QApplication::translate("MainWindowClass", "\346\226\207\344\273\266", nullptr));
        menu2->setTitle(QApplication::translate("MainWindowClass", "\347\274\226\350\276\221", nullptr));
        menu3->setTitle(QApplication::translate("MainWindowClass", "\350\247\206\345\233\276", nullptr));
        menu4->setTitle(QApplication::translate("MainWindowClass", "\347\252\227\344\275\223", nullptr));
        menu5->setTitle(QApplication::translate("MainWindowClass", "\350\256\276\347\275\256", nullptr));
        menu6->setTitle(QApplication::translate("MainWindowClass", "\345\270\256\345\212\251", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindowClass", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
