#include "Mywidget.h"

#include <QApplication>

/* signals and slots:
 * connect() will establish relationship between signals and slots
 * when the signal emits, the slot-function will react
 *
 *
 * Signal:
 * function declaration, no need to implement
 * Most of classes in the system define the signals, developer can also define signals by himself.
 *
 * Slot:
 * It's a function essentially, need implementing.
 * Generally, it's the function in class. Most of classes in the system define the signals, developer can also define signals by himself.
 *
*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyWidget w;
    w.show();
    return a.exec();
}
