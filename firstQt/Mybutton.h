#ifndef MYBUTTON_H
#define MYBUTTON_H
#include <QPushButton>
#include <QtDebug>
class MyButton:public QPushButton
{
public:
    MyButton();
    MyButton(QWidget * p, QString name)
    {
        setParent(p);
        setText(name);
    }
    ~MyButton(){
        qDebug() << "My button is released!";
    }
};

#endif // MYBUTTON_H
