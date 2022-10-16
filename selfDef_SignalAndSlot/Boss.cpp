#include "Boss.h"
#include <QDebug>
Boss::Boss(QWidget *parent)
    : QWidget{parent}
{
    exp = 100;
}

void Boss::BossDead() {
    qDebug() << "Boss is dead!";
}
