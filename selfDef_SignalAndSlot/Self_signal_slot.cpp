#include "Self_signal_slot.h"
#include "ui_Self_signal_slot.h"
#include <QWidget>
#include <QPushButton>
#include "Boss.h"
#include <QDebug>
#include "role.h"
Self_Signal_Slot::Self_Signal_Slot(QWidget *parent)
    : QWidget(parent)

{
    //观察者 boss SLOTS dead
    auto btn = new QPushButton("Kill the boss",this);
//    auto boss = new Boss(this);
//    boss->move(100,100);
   // connect(btn,&QPushButton::clicked,boss,&Boss::BossDead);

    boss = new Boss();
     void (Boss::*deadsignal1)() = &Boss::DeadSignal;
    connect(btn,&QPushButton::clicked,this,&Self_Signal_Slot::BossDeadBroadCast);
    connect(boss,deadsignal1,boss,&Boss::BossDead);

    role =  new Role;
    void (Boss::*deadsignal)(int) = &Boss::DeadSignal;
    void (Role::*getEXP)(int) = &Role::getExp;
    connect(boss,deadsignal,role,getEXP);

}


Self_Signal_Slot::~Self_Signal_Slot()
{

}

void Self_Signal_Slot::BossDeadBroadCast() {
    boss->DeadSignal();
    emit boss->DeadSignal(boss->exp);
    //死亡信号广播
    qDebug() << "BroadCasting";
}

