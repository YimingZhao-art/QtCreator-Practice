#include "Mainwindow.h"
#include "ui_mainwindow.h"
#include <QToolBar>
#include <QPushButton>
#include <QLabel>
#include <QTextEdit>
#include <QDockWidget>
#include <QDialog>
#include <QFileDialog>//文件对话框
#include <QColorDialog>//颜色对话框
#include <QFontDialog>//文字对话框
#include <QMessageBox>//消息对话框（警告，提示/普通，错误框）
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    //1.MenuBar, one and only one
//    QMenuBar * menuBar = new QMenuBar;
//    this->setMenuBar(menuBar);
//    QMenu * menu = menuBar->addMenu("File");
//    QAction * act = menu->addAction("Open");
//    menu->addAction("New File");
//    menu->addSeparator();
//    menuBar->addMenu("Edit")->addAction("Copy");

//    //2.ToolBar, not only ont
//    QToolBar * toolBar = new QToolBar;
//    this->addToolBar(Qt::LeftToolBarArea,toolBar);
//    toolBar->addAction("Edit");
//    toolBar->addSeparator();//add seperate
//    toolBar->addAction("Open");
//    toolBar->setAllowedAreas(Qt::LeftToolBarArea | Qt::RightToolBarArea);
//    toolBar->setFloatable(0);//没有停靠区域就返回


//    //3.StatusBar
//    QStatusBar * statusBar = new QStatusBar;

//    statusBar->addWidget(new QLabel("FPS: 240"));
//    statusBar->addWidget(new QLabel("Ping: 30"));
//    statusBar->addPermanentWidget(new QPushButton("Right"));//add at right

//    this->setStatusBar(statusBar);

//    //4.Central Widget
//    //Only one, and can be anything from widget
//    this->setCentralWidget(new QTextEdit("Please input"));

//    //5.Dock Widget
//    QDockWidget * dock = new QDockWidget("Text1");
//    dock->setAllowedAreas(Qt::RightDockWidgetArea | Qt::LeftDockWidgetArea);
//    this->addDockWidget(Qt::LeftDockWidgetArea,dock);

    ui->menunum1->setTitle("中文");

    connect(ui->verticalSlider,&QSlider::valueChanged,ui->progressBar,&QProgressBar::setValue);
    connect(ui->textEdit1,&QTextEdit::textChanged,ui->label,[this]()->void{
        this->ui->label->setText(ui->textEdit1->toPlainText());
    });


    //Dialogue
    //1.模态对话框（只有关了这个窗口才能编辑其他地方）,阻塞式创建
    //2.非模态对话框
    connect(ui->dialogueButton,&QPushButton::clicked,this,[this](){
        QDialog dialog(this);//不能用new，不然会占用很多空间，局部变量更好
        dialog.resize(300,300);
        //dialog.show();不可以show
        dialog.exec();//消息捕捉循环

    });

    connect(ui->dialogueButton,&QPushButton::clicked,[this](){
        QDialog * dialog = new QDialog(this);
        //dialog->resize(300,300);
        dialog->show();
        dialog->setAttribute(Qt::WA_DeleteOnClose);
    });

    //system dialogue
    //1.file dialogue

    connect(ui->fileButton,&QPushButton::clicked,[this](){
        //parent,title,default path,filter(*.txt, *.doc)
        QString filename = QFileDialog::getOpenFileName(this,"Open","/Users/yimingzhao/Desktop","*.doc");
        qDebug() <<  filename;

        //default color, parent, title
        QColor color = QColorDialog::getColor(Qt::blue,this,"Text Color");//返回QColor，可以设置文字颜色
        ui->textEdit1->setTextColor(color);

        bool bl = true;//是否选用
        QFont font = QFontDialog::getFont(&bl);
        ui->label->setFont(font);
        ui->label->setText("Text2");
    });

    //2.color dialogue
    //3.text dialogue
    //4.messagebox

    //parent,caption,text,
//    QMessageBox::information(this,"提示","提示",QMessageBox::Close);
//    QMessageBox::warning(this,"警告","Warning");
//    QMessageBox::critical(this,"错误","Error!!");//危险对话框
    auto btn = QMessageBox::question(this,"Question","你爱我吗？",QMessageBox::Yes|QMessageBox::No,QMessageBox::Yes);
    //接受处理

}

MainWindow::~MainWindow()
{
    delete ui;
}

