
#include "loginpage.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MongoDB database;
    database.connect();
    loginpage w(database);
    w.setWindowIcon(QIcon(":/images/CheckLogo2.png"));
    w.show();


    return a.exec();
}
