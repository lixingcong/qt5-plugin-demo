#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // QCoreApplication::addLibraryPath(qApp->applicationDirPath());

    MainWindow w;
    w.show();

    return a.exec();
}
