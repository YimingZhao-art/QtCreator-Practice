#include "Widget.h"
#include "Student.h"
#include "Mybutton.h"
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)//去掉只会调用无参函数
{
    this->setWindowTitle("Test Window");
    this->resize(400,800);
    this->setFixedSize(400,500);

    QPushButton * button = new QPushButton;
    button->resize(100,100);
    button->move(150,200);
    button->setText("Hello Qt");
    QFont font("华文行楷",20,10,true);
    button->setFont(font);
    button->setParent(this);
    button->show();
    button->setStyleSheet("QPushButton{background-color: red;}\
                           QPushButton:hover{background-color: green;}\
                           QPushButton:pressed{background-color: blue;}");

 /*
    //Create a button
    QPushButton * btn = new QPushButton;
    btn->resize(60,40);
    btn->setParent(this); //自动释放
    QFont font("Times New Roman",20,10,true);
    btn->setFont(font);
    btn->setText("Button");

    btn->setStyleSheet("QPushButton{ background-color: red; }\
                        QPushButton:hover{background-color: green;}\
                        QPushButton:pressed{background-color: rgba(170,155,221,1);}");


    btn->show();
    btn->move(50,100);

    MyButton * btn3 = new MyButton(this,"MyButton");
    btn3->move(100,0);
    btn3->show();

*/
}

Widget::~Widget()
{
}

