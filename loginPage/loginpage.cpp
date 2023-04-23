#include "loginpage.h"
#include "ui_loginpage.h"
#include <QFocusEvent>
#include <string>
#include <QAction>
#include <QIcon>


MainWindow::MainWindow(MongoDB &Mongo, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow), database(Mongo)
{
    ui->setupUi(this);
    setFixedSize(width(), height());
    QLineEdit *usernameLineEdit = findChild<QLineEdit*>("lineEdit");
    QLineEdit *usernameLineEdit1 = findChild<QLineEdit*>("lineEdit_2");
    usernameLineEdit->addAction(QIcon("C:/Users/nazar/Downloads/avatardefault_92824.ico"), QLineEdit::LeadingPosition);
    usernameLineEdit1->addAction(QIcon("C:/Users/nazar/Downloads/locked.png"), QLineEdit::LeadingPosition);

    connect(ui->lineEdit, &QLineEdit::textChanged, this, &MainWindow::on_lineEdit1_textChanged);
    connect(ui->lineEdit_2, &QLineEdit::textChanged, this, &MainWindow::on_lineEdit2_textChanged);

}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (!ui->lineEdit->underMouse()) {
        ui->lineEdit->clearFocus();
    }

    if (!ui->lineEdit_2->underMouse()) {
        ui->lineEdit_2->clearFocus();
    }
    QMainWindow::mousePressEvent(event);
}

void MainWindow::on_pushButton_3_clicked()
{
    database.readPasswordAndLogin();
    QString textOne = ui->lineEdit->text();
    QString textTwo = ui->lineEdit_2->text();
    std::string username = textOne.toStdString();
    std::string password = textTwo.toStdString();
    if (username == database.getname() && password == database.getpass()) {
        /*this->hide();
        Dialog create;
        create.setModal(true);
        create.exec(); */
        hideLoginWidgetsAndResize();
    }
    else {
        ui->lineEdit->setStyleSheet(styles.incorrectStyle);
        ui->lineEdit->clear();
        ui->lineEdit->setPlaceholderText("Incorrect name");
        ui->lineEdit_2->setStyleSheet(styles.incorrectStyle);
        ui->lineEdit_2->clear();
        ui->lineEdit_2->setPlaceholderText("Incorrect password");

    }

}
void MainWindow::on_lineEdit1_textChanged(const QString &text)
{
    if (ui->lineEdit->hasFocus()) {
        ui->lineEdit->setStyleSheet(styles.loginButtonStyle);
    }
}

void MainWindow::on_lineEdit2_textChanged(const QString &text)
{
    if (ui->lineEdit_2->hasFocus()) {
        ui->lineEdit_2->setStyleSheet(styles.loginButtonStyle);
    }
}

void MainWindow::hideLoginWidgetsAndResize() {
    // Приховує всі віджети вікна
    for (auto *child : findChildren<QWidget*>()) {
        child->hide();
    }

    // Змінює розмір вікна
    this->setFixedSize(1600, 900);

    // Оновлює вікно
    this->update();
}
