
#include "loginpage.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MongoDB database;
    database.connect();
    MainWindow w(database);
    w.show();
    return a.exec();
}
