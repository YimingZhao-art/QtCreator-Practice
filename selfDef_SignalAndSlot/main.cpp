#include "Self_signal_slot.h"

#include <QApplication>

/*
There are numerous slots and signals in Qt. Meanwhile, Qt enables users
to define their own signals and slots.

user-defined slot:
1.need function declaration and implement
2.return type --> void
3.paramters are consistent with the signals, no more than signals
    paramters come from the signals

user-defined signal:
1.below Signal
2.only need to declare
3.void
4.able to take parameters

characteristic
one signal can be attached to many slots, vice versa.
parameter between siganl and slot is one-to-one relationship.
signal's can have more parameters
*/



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Self_Signal_Slot w;
    w.show();
    return a.exec();
}
