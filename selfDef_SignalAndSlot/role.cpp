#include "role.h"
#include <QDebug>
Role::Role(QWidget *parent)
    : QWidget{parent}
{

}

void Role::getExp() {

}

void Role::getExp(int exp) {
    qDebug() << exp << " obtained.";
}
