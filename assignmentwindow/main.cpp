#include "assignmentwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    assignmentwindow w;
    w.show();
    return a.exec();
}
