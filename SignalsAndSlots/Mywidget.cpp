#include "Mywidget.h"
#include <QPushButton>
#include <QLabel>
#include <QSlider>
#include <QProgressBar>
#include <QTextEdit>
#include <QDebug>
/*
C++11 new Attributes
nullptr
auto
Lambda:
[可访问变量](参数表)->返回值{函数体}
for each
*/
//connect(被观察者，信号，观察者，槽)
//被观察者，信号，lambda表达式
//被观察者，SIGNAL(),观察者，SLOT()
MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    auto btnMax = new QPushButton("Maximize",this);
    connect(btnMax,&QPushButton::clicked,this,&QWidget::showMaximized);


    auto btnMin = new QPushButton("Minimize",this);
    btnMin->move(100,0);
    connect(btnMin,&QPushButton::clicked,this,&QWidget::showMinimized);

    auto btnNormal = new QPushButton("Normal",this);
    btnNormal->move(200,0);
    connect(btnNormal,&QPushButton::clicked,this,&QWidget::showNormal);

    //clicking the mouse prints "No"
    //releasing the mouse prints "Yes"

   //auto btnReact = new QPushButton("react",this);

    //可以定义在类里面
    []()->void{
        qDebug() << "No";
    }();
    /*
    void (*pFun) ();

    pFun = []()->void{
        qDebug() << "No";
    };
    pFun();
    */

    int num = 250;
    //[para1,para2](){}
    //[=](){} --> catch all variables, pass-by-value, can't change
    //{&}(){} --> catch all variables location, pass-by-reference, can change
    [num]()->void{
        qDebug() << num;
}();

    //-----------常用控件-----------
    QLabel * label = new QLabel;
    label->setParent(this);
    label->setText("What's the weather like today?");
    label->move(0,100);
    label->setFont(QFont("楷体",20,10,1));

    QSlider * slider = new QSlider;
    slider->setParent(this);
    slider->move(300,100);
    slider->setValue(0);
    //change the font size by the slider
    connect(slider,&QSlider::valueChanged, [label](int value){
        label->setFont(QFont("楷体",value,10,1));
        label->resize(500+value,value);
    });
    slider->setMaximum(100);
    QProgressBar * bar = new QProgressBar;
    bar->setParent(this);
    bar->move(0,200);
    bar->resize(300,20);
    bar->setValue(50);
    bar->setTextVisible(true);
    connect(slider,&QSlider::valueChanged,[bar](int value){bar->setValue(value);});

    QTextEdit * edit = new QTextEdit;
    edit->move(0,300);
    edit->setParent(this);
    edit->resize(500,500);
    edit->setFontUnderline(1);
    edit->setText("Hello");

    connect(edit,&QTextEdit::textChanged,[label,edit]()->void{
       label->setText(edit->toPlainText());
    });


    //被观察者，信号（宏），
    //点击按钮，打印文字
    auto btn10 = new QPushButton("Qt4.0",this);
    connect(btn10,SIGNAL(clicked()), this, SLOT(showMaximized()));
}

MyWidget::~MyWidget()
{
}

