#include "mainpage.h"
#include "ui_mainpage.h"
#include <QMovie>

mainpage::mainpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainpage)
{

    ui->setupUi(this);
    this->setFixedSize(1000, 700);
}

mainpage::~mainpage()
{
    delete ui;
}


void mainpage::on_singout_clicked()
{
    this->window()->setFixedSize(800, 580);
    emit homeClicked();
}


void mainpage::on_exit_clicked()
{
    this->window()->close();
}

