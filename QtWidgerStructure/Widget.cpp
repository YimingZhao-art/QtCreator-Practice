#include "Widget.h"
#include <QMenuBar>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Main 5 Components");

    //1.menubar
    QMenuBar * menuBar = new QMenuBar;
    menuBar->setParent(this);
}

Widget::~Widget()
{
}

