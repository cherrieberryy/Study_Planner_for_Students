#include "taskwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    taskwindow w;
    w.show();
    return a.exec();
}
