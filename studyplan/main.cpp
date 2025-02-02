#include "studyplan.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    studyplan w;
    w.show();
    return a.exec();
}
