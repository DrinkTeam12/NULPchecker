#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QDialog>
#include "buttonstyle.h"
#include <QPushButton>
#include "mongodb.h"
#include <vector>
#include <array>
#include <QTableWidget>
#include <QMovie>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QApplication>
#include <QHeaderView>
#include <QPushButton>


namespace Ui {
class mainpage;
}

class mainpage : public QDialog
{
    Q_OBJECT

public:
    explicit mainpage(MongoDB &Mongo, QWidget *parent = nullptr);
    ~mainpage();
    void iniciar(void);
    void hideEvent(QHideEvent* event);
    void showEvent(QShowEvent* event);
    void flagMonday(bool x);
    void flagTuesday(bool x);
    void flagWednesday(bool x);
    void flagThursday(bool x);
    void flagFriday(bool x);
    void checkGroup(QString x);
    void resetButtons();
    void setWelcomeName();
    void saveData(QTableWidgetItem* item);
    void getSaveDataConnect();
    void checkButtonText();
    void setTimeTable(int x);

signals:
    void homeClicked();

private slots:

    void on_first_lesson_clicked();

    void on_singout_clicked();

    void on_monday_clicked();

    void on_tuesday_clicked();

    void on_wednesday_clicked();

    void on_thursday_clicked();

    void on_friday_clicked();


    void on_second_lesson_clicked();

    void on_third_lesson_clicked();

    void on_fourth_lesson_clicked();

    void on_five_lesson_clicked();

    void on_group_btn_3_clicked();

    void on_group_btn_2_clicked();

    void on_group_btn_1_clicked();

private:
    Ui::mainpage *ui;
    MongoDB& database;
    buttonstyle style;
    std::array<QString, 6> groupsarr =  {"ПП-11", "ПП-12", "ПП-13","ПП-14", "ПП-15", "ПП-16"};
//    std::vector<QString> lessonsVec;
    bool checker = false;
    bool lecture = false;
};

#endif // MAINPAGE_H
