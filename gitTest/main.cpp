#include <QtGui/QApplication>
#include "gittest.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    gitTest w;
    w.show();

    return a.exec();
}
