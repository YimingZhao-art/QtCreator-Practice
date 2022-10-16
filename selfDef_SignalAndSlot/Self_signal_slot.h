#ifndef SELF_SIGNAL_SLOT_H
#define SELF_SIGNAL_SLOT_H

#include <QWidget>
#include "Boss.h"
#include "role.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Self_Signal_Slot; }
QT_END_NAMESPACE

class Self_Signal_Slot : public QWidget
{
    Q_OBJECT

public:
    Self_Signal_Slot(QWidget *parent = nullptr);
    ~Self_Signal_Slot();
    Boss *boss;
    Role *role;

private:
    Ui::Self_Signal_Slot *ui;
public slots:
    void BossDeadBroadCast();
};
#endif // SELF_SIGNAL_SLOT_H
