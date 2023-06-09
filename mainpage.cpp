#include "mainpage.h"
#include "ui_mainpage.h"


mainpage::mainpage(MongoDB &Mongo, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainpage),   // Якщо у вас є поле database в класі mainpage
    database(Mongo)
{
    ui->setupUi(this);

    ui->stackedWidget_3->setCurrentIndex(1);
    ui->tableWidget->setAlternatingRowColors(true);
    ui->tableWidget->setColumnCount(14); // Вказуємо число колонок
    ui->tableWidget->setRowCount(28);
    QStringList headerLabels;
    headerLabels <<  "1.03" << "8.03" << "15.02" << "22.03"<< "29.03"<<"5.04"<<"12.04"<<"19.04"<<"26.04"<<"03.05"<<"10.05"<<"17.05"<<"24.05"<<"31.05";
    ui->tableWidget->setHorizontalHeaderLabels(headerLabels);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    database.setMarks(ui->tableWidget);
    ui->stackedWidget_2->setCurrentIndex(1);
    ui->tableWidget->horizontalHeader()->setStyleSheet(
        "QHeaderView::section {"
        "background-color: #646464;"  // кольоровий фон
        "color: #FFFFFF;"             // кольоровий текст
        "padding: 4px;"               // відступи
        "border: 1px solid #6c6c6c;"  // колір та товщина рамки
        "}"
        );
    ui->tableWidget->verticalHeader()->setStyleSheet(
        "QHeaderView::section {"
        "background-color: #646464;"  // кольоровий фон
        "color: #FFFFFF;"             // кольоровий текст
        "padding: 4px;"               // відступи
        "border: 1px solid #6c6c6c;"  // колір та товщина рамки
        "}"
        );

  }

mainpage::~mainpage()
{
    delete ui;
}




void mainpage::on_singout_clicked()
{
    emit homeClicked();
}


void mainpage::hideEvent(QHideEvent* event) {
    QPushButton* button = findChild<QPushButton*>("singout");
    if (button) {
        button->setAttribute(Qt::WA_UnderMouse, false);
    }
    QWidget::hideEvent(event);
}

void mainpage::showEvent(QShowEvent* event) {
    QPushButton* button = findChild<QPushButton*>("singout");
    if (button) {
        button->setAttribute(Qt::WA_UnderMouse, button->rect().contains(button->mapFromGlobal(QCursor::pos())));
    }
    QWidget::showEvent(event);
}


void mainpage::flagMonday(bool x) {
    if (x == true) {
        ui->flagMonday->setStyleSheet(style.flagColor);
    } else {
        ui->flagMonday->setStyleSheet("background-color: rgba(255, 255, 255, 50);color: white;");
    }
}
void mainpage::flagTuesday(bool x) {
    if (x == true) {
        ui->flagTuesday->setStyleSheet(style.flagColor);
    } else {
        ui->flagTuesday->setStyleSheet("background-color: rgba(255, 255, 255, 50);color: white;");
    }

}
void mainpage::flagWednesday(bool x) {
    if (x == true) {
        ui->flagWenesday->setStyleSheet(style.flagColor);
    } else {
        ui->flagWenesday->setStyleSheet("background-color: rgba(255, 255, 255, 50);color: white;");
    }

}
void mainpage::flagThursday(bool x) {
    if (x == true) {
        ui->flagThursday->setStyleSheet(style.flagColor);
    } else {
        ui->flagThursday->setStyleSheet("background-color: rgba(255, 255, 255, 50);color: white;");
    }

}
void mainpage::flagFriday(bool x) {
    if (x == true) {
        ui->flagFriday->setStyleSheet(style.flagColor);
    } else {
        ui->flagFriday->setStyleSheet("background-color: rgba(255, 255, 255, 50);color: white;");
    }

}

void mainpage::checkGroup(QString x)
{
    QString name;
    std::vector<QString> vector;
    ui->stackedWidget_3->setCurrentIndex(0);
    int count = 0;
    for (auto i = groupsarr.begin(); i != groupsarr.end(); i++) {
        if (x.contains(*i)) {
            name = *i;
            count++;
            vector.push_back(name);
        }
    }
    if (count > 1) {
        checker = true;
        lecture = true;
        ui->stackedWidget->setCurrentIndex(2);
        ui->stackedWidget_2->setCurrentIndex(1);
        ui->group_btn_1->setText(QString::fromStdString("Група ") + vector[0]);
        ui->group_btn_2->setText(QString::fromStdString("Група ") + vector[1]);
        ui->group_btn_3->setText(QString::fromStdString("Група ") + vector[2]);

    }
    else {
        ui->group->setText("Група: " + name);
        if (name != "ПП-12") {
            ui->starosta->setText("Староста: А хто його знає?");
            ui->stackedWidget_2->setCurrentIndex(1);

        } else {
            ui->starosta->setText(style.starostText);
            ui->stackedWidget_2->setCurrentIndex(0);

        }
    }

}

void mainpage::resetButtons()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void mainpage::setWelcomeName()
{
    ui->stackedWidget->setCurrentIndex(1);
    QString name = ui->welcomeName->text();
    QString surname = database.getTeacherName();
    name.replace("NAME", surname);
    ui->welcomeName->setText(name);
}

void mainpage::on_monday_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

    flagMonday(true);
    flagTuesday(false);
    flagWednesday(false);
    flagThursday(false);
    flagFriday(false);
    setTimeTable(0);

}


void mainpage::on_tuesday_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

    flagMonday(false);
    flagTuesday(true);
    flagWednesday(false);
    flagThursday(false);
    flagFriday(false);
    setTimeTable(1);
}


void mainpage::on_wednesday_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    flagMonday(false);
    flagTuesday(false);
    flagWednesday(true);
    flagThursday(false);
    flagFriday(false);
    setTimeTable(2);
}


void mainpage::on_thursday_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    flagMonday(false);
    flagTuesday(false);
    flagWednesday(false);
    flagThursday(true);
    flagFriday(false);
    setTimeTable(3);
}


void mainpage::on_friday_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    flagMonday(false);
    flagTuesday(false);
    flagWednesday(false);
    flagThursday(false);
    flagFriday(true);
    setTimeTable(4);
}

void mainpage::on_first_lesson_clicked()
{
    QString text = ui->first_lesson->text();
    checkGroup(text);
}

void mainpage::on_second_lesson_clicked()
{
    QString text = ui->second_lesson->text();
    checkGroup(text);
}


void mainpage::on_third_lesson_clicked()
{
    QString text = ui->third_lesson->text();
    checkGroup(text);
}


void mainpage::on_fourth_lesson_clicked()
{
    QString text = ui->fourth_lesson->text();
    checkGroup(text);
}


void mainpage::on_five_lesson_clicked()
{
    QString text = ui->five_lesson->text();
    checkGroup(text);
}

void mainpage::saveData(QTableWidgetItem* item)
{
    database.saveData(item,ui->tableWidget);
}

void mainpage::getSaveDataConnect()
{
    connect(ui->tableWidget, &QTableWidget::itemChanged, this, &mainpage::saveData);
}

void mainpage::checkButtonText()
{
    if (ui->first_lesson->text().isEmpty()) {
        ui->first_lesson->setStyleSheet(style.getIncorrectBtn);
        ui->first_lesson->setText("НЕМАЄ ПАРИ");
    }
    else {
        ui->first_lesson->setStyleSheet(style.getNormalButton);
    }
    if (ui->second_lesson->text().isEmpty()) {
        ui->second_lesson->setStyleSheet(style.getIncorrectBtn);
        ui->second_lesson->setText("НЕМАЄ ПАРИ");
    }
    else {
         ui->second_lesson->setStyleSheet(style.getNormalButton);
    }

    if (ui->third_lesson->text().isEmpty()) {
        ui->third_lesson->setStyleSheet(style.getIncorrectBtn);
         ui->third_lesson->setText("НЕМАЄ ПАРИ");
    }
    else {
         ui->third_lesson->setStyleSheet(style.getNormalButton);
    }

    if (ui->fourth_lesson->text().isEmpty()) {
        ui->fourth_lesson->setStyleSheet(style.getIncorrectBtn);
         ui->fourth_lesson->setText("НЕМАЄ ПАРИ");
    }
    else {
         ui->fourth_lesson->setStyleSheet(style.getNormalButton);
    }
    if (ui->five_lesson->text().isEmpty()) {
        ui->five_lesson->setStyleSheet(style.getIncorrectBtn);
         ui->five_lesson->setText("НЕМАЄ ПАРИ");
    }
    else {
         ui->five_lesson->setStyleSheet(style.getNormalButton);
    }
}

void mainpage::setTimeTable(int x)
{
    std::vector<QString>vec = database.getDays(x);
//    lessonsVec = vec;
    ui->first_lesson->setText(vec.at(0));
    ui->second_lesson->setText(vec.at(1));
    ui->third_lesson->setText(vec.at(2));
    ui->fourth_lesson->setText(vec.at(3));
    ui->five_lesson->setText(vec.at(4));
    checkButtonText();

    if (checker == true) {
         ui->stackedWidget->setCurrentIndex(2);
         checker = false;
    }
    if(lecture){
         lecture = false;
         ui->stackedWidget->setCurrentIndex(0);
         ui->stackedWidget_2->setCurrentIndex(1);
    }
}

void mainpage::resetGroup()
{
    ui->stackedWidget_3->setCurrentIndex(1);
    ui->stackedWidget_2->setCurrentIndex(1);
}


void mainpage::on_group_btn_1_clicked()
{
    QString text = ui->group_btn_1->text();
    checkGroup(text);
}

void mainpage::on_group_btn_2_clicked()
{
    QString text = ui->group_btn_2->text();
    checkGroup(text);
}


void mainpage::on_group_btn_3_clicked()
{
    QString text = ui->group_btn_3->text();
    checkGroup(text);
}




void mainpage::on_info_clicked()
{

    QDesktopServices::openUrl(QUrl("https://github.com/DrinkTeam12/NULPchecker", QUrl::TolerantMode));
}


void mainpage::on_singout_2_clicked()
{
    flagMonday(false);
    flagTuesday(false);
    flagWednesday(false);
    flagThursday(false);
    flagFriday(false);
    ui->stackedWidget->setCurrentIndex(3);
}

