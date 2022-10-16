/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QTextEdit *textEdit1;
    QLabel *label;
    QProgressBar *progressBar;
    QSlider *verticalSlider;
    QPushButton *dialogueButton;
    QPushButton *dialogButton;
    QPushButton *fileButton;
    QMenuBar *menubar;
    QMenu *menunum1;
    QMenu *menunum2;
    QMenu *menunum3;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(260, 60, 100, 32));
        textEdit1 = new QTextEdit(centralwidget);
        textEdit1->setObjectName(QString::fromUtf8("textEdit1"));
        textEdit1->setGeometry(QRect(30, 100, 256, 192));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 50, 58, 16));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(220, 10, 118, 23));
        progressBar->setValue(24);
        verticalSlider = new QSlider(centralwidget);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setGeometry(QRect(410, 120, 22, 160));
        verticalSlider->setOrientation(Qt::Vertical);
        dialogueButton = new QPushButton(centralwidget);
        dialogueButton->setObjectName(QString::fromUtf8("dialogueButton"));
        dialogueButton->setGeometry(QRect(30, 350, 100, 32));
        dialogButton = new QPushButton(centralwidget);
        dialogButton->setObjectName(QString::fromUtf8("dialogButton"));
        dialogButton->setGeometry(QRect(150, 340, 100, 32));
        fileButton = new QPushButton(centralwidget);
        fileButton->setObjectName(QString::fromUtf8("fileButton"));
        fileButton->setGeometry(QRect(310, 290, 100, 32));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        menunum1 = new QMenu(menubar);
        menunum1->setObjectName(QString::fromUtf8("menunum1"));
        menunum2 = new QMenu(menunum1);
        menunum2->setObjectName(QString::fromUtf8("menunum2"));
        menunum3 = new QMenu(menunum1);
        menunum3->setObjectName(QString::fromUtf8("menunum3"));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menunum1->menuAction());
        menubar->addAction(menu->menuAction());
        menunum1->addAction(menunum2->menuAction());
        menunum1->addAction(menunum3->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        dialogueButton->setText(QCoreApplication::translate("MainWindow", "\346\250\241\346\200\201\345\257\271\350\257\235\346\241\206", nullptr));
        dialogButton->setText(QCoreApplication::translate("MainWindow", "\351\235\236\346\250\241\346\200\201\345\257\271\350\257\235\346\241\206", nullptr));
        fileButton->setText(QCoreApplication::translate("MainWindow", "File", nullptr));
        menunum1->setTitle(QCoreApplication::translate("MainWindow", "num1", nullptr));
        menunum2->setTitle(QCoreApplication::translate("MainWindow", "num2", nullptr));
        menunum3->setTitle(QCoreApplication::translate("MainWindow", "num3", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\200\222\345\230\233", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
