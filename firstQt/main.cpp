#include "Widget.h"

#include <QApplication>
/*Qt快捷键
 * ctrl + / 注释
 * ctrl + r run
 * ctrl + b construct
 * F2 to definition/declaration
 *
*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//定义应用程序对象
    Widget w;//定义空窗口
    w.show();//调用空窗口函数，显示窗口
    return a.exec();//调用应用对象消息循环函数
}
