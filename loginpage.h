
#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QMainWindow>
#include "buttonstyle.h"
#include "mongodb.h"
#include "mainpage.h"
#include <QAction>
#include <QIcon>
#include <QFocusEvent>
#include <string>
#include <QMovie>
#include <QSystemTrayIcon>
#include <QMenu>
#include <QFont>

QT_BEGIN_NAMESPACE
namespace Ui { class loginpage; }
QT_END_NAMESPACE

class loginpage : public QMainWindow

{
    Q_OBJECT

public:
    loginpage(MongoDB &Mongo, QWidget *parent = nullptr);
    ~loginpage();
    void on_username_textChanged();
    void on_password_textChanged();
    void closeEvent(QCloseEvent *event) override;
    void trayIconActivated(QSystemTrayIcon::ActivationReason reason);

private slots:
    void on_signbutton_clicked();
    void moveHome();


private:
    QAction *quitAction;
    QAction *showAction;
    QSystemTrayIcon *trayIcon;
    QMenu *trayIconMenu;
    buttonstyle style;
    MongoDB &database;
    mainpage window;
    Ui::loginpage *ui;
};

#endif // LOGINPAGE_H
