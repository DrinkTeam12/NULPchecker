
#include "loginpage.h"
#include "ui_loginpage.h"

loginpage::loginpage(MongoDB &Mongo, QWidget *parent) :
    QMainWindow(parent),
    database(Mongo), window(Mongo, this), ui(new Ui::loginpage)
{
    ui->setupUi(this);
    ui->stackedWidget->insertWidget(1, &window);
    setFixedSize(width(), height());
    window.setFixedSize(1000, 700);
    ui->username->setClearButtonEnabled(true);
    ui->password->setClearButtonEnabled(true);

    ui->username->addAction(QIcon(":/images/avatardefault_92824.ico"), QLineEdit::LeadingPosition);
    ui->password->addAction(QIcon(":/images/locked.png"), QLineEdit::LeadingPosition);

    window.setWelcomeName();
    QFont font("Times", 9, QFont::Bold);
    trayIconMenu = new QMenu();
    quitAction = new QAction("Quit", this);
    showAction = new QAction("Show", this);
    showAction->setFont(font);
    connect(showAction, &QAction::triggered, this, &QWidget::show);
    connect(quitAction, &QAction::triggered, qApp, &QApplication::quit);
    connect(ui->username , &QLineEdit::textChanged, this, &loginpage::on_username_textChanged);
    connect(ui->password , &QLineEdit::textChanged, this, &loginpage::on_password_textChanged);
    connect(&window, SIGNAL(homeClicked()), this, SLOT(moveHome()));
    trayIcon = new QSystemTrayIcon(this);
    trayIcon->setIcon(QIcon(":/images/CheckLogo2.png"));
    trayIconMenu->addAction(showAction);
    trayIconMenu->addAction(quitAction);
    connect(trayIcon, &QSystemTrayIcon::activated, this, &loginpage::trayIconActivated);
    trayIcon->setContextMenu(trayIconMenu);
    trayIcon->show();
}

loginpage::~loginpage()
{
    delete ui;
}


void loginpage::on_signbutton_clicked()
{
    QString password = ui->password->text();
    QString username = ui->username->text();
    bool flag = database.readPasswordAndLogin(password, username);


    if (flag == true) {
        window.resetGroup();
        window.getSaveDataConnect();
        window.setWelcomeName();
        ui->stackedWidget->resize(1000, 700);
        ui->stackedWidget->setCurrentIndex(1);
        setFixedSize(1000, 700);

        ui->username->clear();
        ui->password->clear();
    } else {
        ui->username->setStyleSheet(style.incorrectStyle);
        ui->username->clear();
        ui->username->setPlaceholderText("Incorrect name");
        ui->password->setStyleSheet(style.incorrectStyle);
        ui->password->clear();
        ui->password->setPlaceholderText("Incorrect password");

    }
}

void loginpage::on_username_textChanged()
{
    if (ui->username->hasFocus()) {
        ui->username->setPlaceholderText("username");
        ui->username->setStyleSheet(style.loginButtonStyle);
    }
}

void loginpage::on_password_textChanged() {
    if (ui->password->hasFocus()) {
        ui->password->setPlaceholderText("password");
        ui->password->setStyleSheet(style.loginButtonStyle);
    }
}



void loginpage::moveHome()
{

    window.resetButtons();
    window.findChild<QPushButton *>("singout")->clearFocus();
    setFixedSize(800, 580);
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget->resize(800, 580);
}



void loginpage::closeEvent(QCloseEvent *event)
{
    if (this->isVisible()) {
        event->ignore();
        this->hide();
    }
}

void loginpage::trayIconActivated(QSystemTrayIcon::ActivationReason reason)
{
    if (reason == QSystemTrayIcon::DoubleClick) {
        this->show();
    }
}

