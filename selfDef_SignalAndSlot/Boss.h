#ifndef BOSS_H
#define BOSS_H

#include <QWidget>

class Boss : public QWidget
{
    Q_OBJECT
public:
    //explicit关键字 修饰函数 参数 无法自动转换类型, no type-casting
    explicit Boss(QWidget *parent = nullptr);
    int exp;
    QString name;

signals:
    //自定义信号
    void DeadSignal();
    void DeadSignal(int exp);

public slots:
    //槽函数定义
    void BossDead();//Boss is dead.
};

#endif // BOSS_H
