#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    car bwm,mm;
    bwm.ID="lallla";bwm.n=20;
    mm.ID="jkkil";mm.n=25;
    w.Link.append(bwm);w.Link.append(mm);
    w.show();
    return a.exec();
}