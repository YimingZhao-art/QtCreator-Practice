#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

/*
 QPushButton extends QAbstractButton extends QWidget extends QObject

 Constructor:
 auto b = new QPushButton; no parameter
 auto b2 = new QPushButton(text,parent); paramters

 Widget:
 resize()
 setFixedSize()
 setParent()
 move()
 setText()
 setFont()
 setStyleSheet()设置样式表属性
 show()

 Object Tree:
 Inheritance in Qt, simplify the release of object
 All classes inheriting from the QObject will be released automatically.
 All contents added to the QObject or sub-classes of QObject will be released automatically.

 When the code finishes, Qt will check objects in the Tree, release the contents at first.
 */

class Widget : public QWidget
{
    Q_OBJECT//支持信号 和 槽

public:
    Widget(QWidget *parent = nullptr);//构造函数
    ~Widget();
};
#endif // WIDGET_H
