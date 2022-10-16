#include "Widget.h"
#include "ui_widget.h"
#include <QtDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    double buffer = 0;
    double now = 0;
    int sign = 0; // 1+2-3*4/

    connect(ui->buttonAC,&QPushButton::clicked,this,[&](){
        ui->label->setText("");
        buffer = 0;
    });
    connect(ui->buttonBackspace,&QPushButton::clicked,this,[&](){
        if ( ui->label->text().length() > 1 ) {
            ui->label->setText(ui->label->text().chopped(ui->label->text().length()-1));
        }
        else {
            ui->label->setText(QString::number(0));
        }
    });


    connect(ui->button0,&QPushButton::clicked,this,[&](){
        if ( ui->label->text().toDouble() != 0 )   ui->label->setText(ui->label->text()+"0");
        else ui->label->setText("0");
    });
    connect(ui->button1,&QPushButton::clicked,this,[&](){
        if ( ui->label->text().toDouble() != 0 ) ui->label->setText(ui->label->text()+"1");
        else ui->label->setText("1");
    });
    connect(ui->button2,&QPushButton::clicked,this,[&](){
        if ( ui->label->text().toDouble() != 0 ) ui->label->setText(ui->label->text()+"2");
        else ui->label->setText("2");
    });
    connect(ui->button3,&QPushButton::clicked,this,[&](){
        if ( ui->label->text().toDouble() != 0 ) ui->label->setText(ui->label->text()+"3");
        else ui->label->setText("3");
    });
    connect(ui->button4,&QPushButton::clicked,this,[&](){
        if ( ui->label->text().toDouble() != 0 ) ui->label->setText(ui->label->text()+"4");
        else ui->label->setText("4");
    });
    connect(ui->button5,&QPushButton::clicked,this,[&](){
        if ( ui->label->text().toDouble() != 0 ) ui->label->setText(ui->label->text()+"5");
        else ui->label->setText("5");
    });
    connect(ui->button6,&QPushButton::clicked,this,[&](){
        if ( ui->label->text().toDouble() != 0 ) ui->label->setText(ui->label->text()+"6");
        else ui->label->setText("6");
    });
    connect(ui->button7,&QPushButton::clicked,this,[&](){
        if ( ui->label->text().toDouble() != 0 ) ui->label->setText(ui->label->text()+"7");
        else ui->label->setText("7");
    });
    connect(ui->button8,&QPushButton::clicked,this,[&](){
        if ( ui->label->text().toDouble() != 0 ) ui->label->setText(ui->label->text()+"8");
        else ui->label->setText("8");
    });
    connect(ui->button9,&QPushButton::clicked,this,[&](){
        if ( ui->label->text().toDouble() != 0 ) ui->label->setText(ui->label->text()+"9");
        else ui->label->setText("9");
    });
    connect(ui->buttonDot,&QPushButton::clicked,this,[&](){
        ui->label->setText(ui->label->text()+".");
    });

    connect(ui->buttonPlus,&QPushButton::clicked,this,[&](){
        buffer = ui->label->text().toDouble();
        ui->label->setText("");
        sign = 1;

    });
    connect(ui->buttonMinus,&QPushButton::clicked,this,[&](){
        buffer = ui->label->text().toDouble();
        ui->label->setText("");
        sign = 2;
    });
    connect(ui->buttonMultiply,&QPushButton::clicked,this,[&](){
        buffer = ui->label->text().toDouble();
        ui->label->setText("");
        sign = 3;
    });
    connect(ui->buttonDivide,&QPushButton::clicked,this,[&](){
        buffer = ui->label->text().toDouble();
        ui->label->setText("");
        sign = 4;
    });

    connect(ui->buttonEqual,&QPushButton::clicked,this,[&](){
        now = ui->label->text().toDouble();
        ui->label->setText("");
        switch (sign) {
        case 1:
            now += buffer;
            break;
        case 2:
            buffer -= now;
            break;

        case 3:
            buffer *= now;
            break;
        case 4:
            buffer /= now;
            break;
        default:
            break;
        }
        ui->label->setText(QString::number(buffer));
    });



}

Widget::~Widget()
{
    delete ui;
}

