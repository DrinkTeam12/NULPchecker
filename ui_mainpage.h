/********************************************************************************
** Form generated from reading UI file 'mainpage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_H
#define UI_MAINPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainpage
{
public:
    QWidget *widget;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *singout_2;
    QPushButton *singout;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *flagMonday;
    QPushButton *monday;
    QHBoxLayout *horizontalLayout_4;
    QLabel *flagTuesday;
    QPushButton *tuesday;
    QHBoxLayout *horizontalLayout_5;
    QLabel *flagWenesday;
    QPushButton *wednesday;
    QHBoxLayout *horizontalLayout_6;
    QLabel *flagThursday;
    QPushButton *thursday;
    QHBoxLayout *horizontalLayout_7;
    QLabel *flagFriday;
    QPushButton *friday;
    QWidget *widget_2;
    QStackedWidget *stackedWidget;
    QWidget *page_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_9;
    QPushButton *first_lesson;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QPushButton *second_lesson;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QPushButton *third_lesson;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QPushButton *fourth_lesson;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QPushButton *five_lesson;
    QWidget *page_3;
    QLabel *welcomeName;
    QWidget *page;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_6;
    QPushButton *group_btn_1;
    QPushButton *group_btn_2;
    QPushButton *group_btn_3;
    QWidget *page_6;
    QWidget *widget_6;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QPushButton *info;
    QLabel *label_13;
    QWidget *widget_3;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget_3;
    QWidget *page_4;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_5;
    QLabel *group;
    QLabel *starosta;
    QLabel *label_5;
    QWidget *page_5;
    QLabel *label_12;
    QLabel *label_2;
    QWidget *widget_4;
    QWidget *widget_5;
    QLabel *label_3;
    QStackedWidget *stackedWidget_2;
    QWidget *page_10;
    QTableWidget *tableWidget;
    QWidget *page_11;
    QLabel *label_10;

    void setupUi(QDialog *mainpage)
    {
        if (mainpage->objectName().isEmpty())
            mainpage->setObjectName("mainpage");
        mainpage->resize(1000, 700);
        mainpage->setStyleSheet(QString::fromUtf8("#mainpage {\n"
"	\n"
"	background-image: url(:/images/musthave.jpg);\n"
"}"));
        widget = new QWidget(mainpage);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 20, 61, 671));
        widget->setStyleSheet(QString::fromUtf8("#widget {\n"
"	background-color: rgb(60, 60, 60);\n"
"    border-radius: 15px;\n"
"    padding: 4px;\n"
"}"));
        verticalLayoutWidget_3 = new QWidget(widget);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(0, 1, 61, 61));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(5, 0, 5, 0);
        label = new QLabel(verticalLayoutWidget_3);
        label->setObjectName("label");
        label->setMinimumSize(QSize(50, 50));
        label->setMaximumSize(QSize(50, 50));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/home.png")));
        label->setScaledContents(true);

        verticalLayout_2->addWidget(label);

        verticalLayoutWidget = new QWidget(widget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 530, 66, 141));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(9, 0, 9, 0);
        singout_2 = new QPushButton(verticalLayoutWidget);
        singout_2->setObjectName("singout_2");
        singout_2->setMinimumSize(QSize(42, 42));
        singout_2->setMaximumSize(QSize(42, 42));
        singout_2->setCursor(QCursor(Qt::PointingHandCursor));
        singout_2->setAutoFillBackground(false);
        singout_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 255, 255, 85);\n"
"	text-align:center;\n"
"    border-radius: 21px;\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: rgb(255, 255, 255);\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 150);\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/info.png"), QSize(), QIcon::Normal, QIcon::Off);
        singout_2->setIcon(icon);
        singout_2->setIconSize(QSize(45, 42));
        singout_2->setAutoExclusive(true);

        verticalLayout->addWidget(singout_2);

        singout = new QPushButton(verticalLayoutWidget);
        singout->setObjectName("singout");
        singout->setMinimumSize(QSize(42, 42));
        singout->setMaximumSize(QSize(42, 42));
        singout->setCursor(QCursor(Qt::PointingHandCursor));
        singout->setAutoFillBackground(false);
        singout->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 255, 255, 85);\n"
"	text-align:center;\n"
"    border-radius: 20px;\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: rgb(255, 255, 255);\n"
"\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 150);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/exchange.png"), QSize(), QIcon::Normal, QIcon::Off);
        singout->setIcon(icon1);
        singout->setIconSize(QSize(53, 50));
        singout->setAutoExclusive(true);

        verticalLayout->addWidget(singout);

        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 60, 61, 471));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, -1, 20, -1);
        flagMonday = new QLabel(layoutWidget);
        flagMonday->setObjectName("flagMonday");
        flagMonday->setMinimumSize(QSize(4, 45));
        flagMonday->setMaximumSize(QSize(4, 45));
        flagMonday->setStyleSheet(QString::fromUtf8("    background-color: rgba(255, 255, 255, 50);\n"
"    color: white;"));

        horizontalLayout_3->addWidget(flagMonday);

        monday = new QPushButton(layoutWidget);
        monday->setObjectName("monday");
        monday->setMinimumSize(QSize(50, 45));
        monday->setMaximumSize(QSize(50, 45));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        monday->setFont(font);
        monday->setCursor(QCursor(Qt::PointingHandCursor));
        monday->setFocusPolicy(Qt::NoFocus);
        monday->setLayoutDirection(Qt::LeftToRight);
        monday->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 255, 255, 50);\n"
"    color: white;\n"
"    border-top-right-radius: 10px;\n"
"	border-bottom-right-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"        background-color: rgba(255, 255, 255, 85);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 150);\n"
"}"));

        horizontalLayout_3->addWidget(monday);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(-1, -1, 20, -1);
        flagTuesday = new QLabel(layoutWidget);
        flagTuesday->setObjectName("flagTuesday");
        flagTuesday->setMinimumSize(QSize(4, 45));
        flagTuesday->setMaximumSize(QSize(4, 45));
        flagTuesday->setStyleSheet(QString::fromUtf8("    background-color: rgba(255, 255, 255, 50);\n"
"    color: white;"));

        horizontalLayout_4->addWidget(flagTuesday);

        tuesday = new QPushButton(layoutWidget);
        tuesday->setObjectName("tuesday");
        tuesday->setMinimumSize(QSize(50, 45));
        tuesday->setMaximumSize(QSize(50, 45));
        tuesday->setFont(font);
        tuesday->setCursor(QCursor(Qt::PointingHandCursor));
        tuesday->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 255, 255, 50);\n"
"    color: white;\n"
"    border-top-right-radius: 10px;\n"
"	border-bottom-right-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"        background-color: rgba(255, 255, 255, 85);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 150);\n"
"}"));

        horizontalLayout_4->addWidget(tuesday);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, -1, 20, -1);
        flagWenesday = new QLabel(layoutWidget);
        flagWenesday->setObjectName("flagWenesday");
        flagWenesday->setMinimumSize(QSize(4, 45));
        flagWenesday->setMaximumSize(QSize(4, 45));
        flagWenesday->setStyleSheet(QString::fromUtf8("    background-color: rgba(255, 255, 255, 50);\n"
"    color: white;"));

        horizontalLayout_5->addWidget(flagWenesday);

        wednesday = new QPushButton(layoutWidget);
        wednesday->setObjectName("wednesday");
        wednesday->setMinimumSize(QSize(50, 45));
        wednesday->setMaximumSize(QSize(50, 45));
        wednesday->setFont(font);
        wednesday->setCursor(QCursor(Qt::PointingHandCursor));
        wednesday->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 255, 255, 50);\n"
"    color: white;\n"
"    border-top-right-radius: 10px;\n"
"	border-bottom-right-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"        background-color: rgba(255, 255, 255, 85);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 150);\n"
"}"));

        horizontalLayout_5->addWidget(wednesday);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_6->setContentsMargins(-1, -1, 20, -1);
        flagThursday = new QLabel(layoutWidget);
        flagThursday->setObjectName("flagThursday");
        flagThursday->setMinimumSize(QSize(4, 45));
        flagThursday->setMaximumSize(QSize(4, 45));
        flagThursday->setStyleSheet(QString::fromUtf8("    background-color: rgba(255, 255, 255, 50);\n"
"    color: white;"));

        horizontalLayout_6->addWidget(flagThursday);

        thursday = new QPushButton(layoutWidget);
        thursday->setObjectName("thursday");
        thursday->setMinimumSize(QSize(50, 45));
        thursday->setMaximumSize(QSize(50, 45));
        thursday->setFont(font);
        thursday->setCursor(QCursor(Qt::PointingHandCursor));
        thursday->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 255, 255, 50);\n"
"    color: white;\n"
"    border-top-right-radius: 10px;\n"
"	border-bottom-right-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"        background-color: rgba(255, 255, 255, 85);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 150);\n"
"}"));

        horizontalLayout_6->addWidget(thursday);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(-1, -1, 20, -1);
        flagFriday = new QLabel(layoutWidget);
        flagFriday->setObjectName("flagFriday");
        flagFriday->setMinimumSize(QSize(4, 45));
        flagFriday->setMaximumSize(QSize(4, 45));
        flagFriday->setStyleSheet(QString::fromUtf8("    background-color: rgba(255, 255, 255, 50);\n"
"    color: white;"));

        horizontalLayout_7->addWidget(flagFriday);

        friday = new QPushButton(layoutWidget);
        friday->setObjectName("friday");
        friday->setMinimumSize(QSize(50, 45));
        friday->setMaximumSize(QSize(50, 45));
        friday->setFont(font);
        friday->setCursor(QCursor(Qt::PointingHandCursor));
        friday->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 255, 255, 50);\n"
"    color: white;\n"
"    border-top-right-radius: 10px;\n"
"	border-bottom-right-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"        background-color: rgba(255, 255, 255, 85);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 150);\n"
"}"));

        horizontalLayout_7->addWidget(friday);


        verticalLayout_4->addLayout(horizontalLayout_7);

        widget_2 = new QWidget(mainpage);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(90, 20, 491, 671));
        widget_2->setStyleSheet(QString::fromUtf8("#widget_2 {background-color: rgb(60, 60, 60);\n"
"    border-radius: 15px;\n"
"    padding: 4px;\n"
"}"));
        stackedWidget = new QStackedWidget(widget_2);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(10, 10, 471, 651));
        stackedWidget->setMinimumSize(QSize(0, 0));
        stackedWidget->setMaximumSize(QSize(4366, 546546));
        stackedWidget->setStyleSheet(QString::fromUtf8("QStackedWidget > QWidget{\n"
"	background-color: rgb(60, 60, 60);\n"
"    border-radius: 15px;\n"
"    padding: 4px;\n"
" }"));
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        verticalLayoutWidget_2 = new QWidget(page_2);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(0, 11, 471, 631));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setSpacing(20);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_9 = new QLabel(verticalLayoutWidget_2);
        label_9->setObjectName("label_9");
        label_9->setMinimumSize(QSize(9, 79));
        label_9->setMaximumSize(QSize(9, 79));
        QFont font1;
        font1.setPointSize(12);
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_11->addWidget(label_9);

        first_lesson = new QPushButton(verticalLayoutWidget_2);
        first_lesson->setObjectName("first_lesson");
        first_lesson->setMinimumSize(QSize(425, 80));
        first_lesson->setMaximumSize(QSize(425, 80));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Source Code Pro")});
        font2.setPointSize(12);
        font2.setBold(true);
        first_lesson->setFont(font2);
        first_lesson->setCursor(QCursor(Qt::PointingHandCursor));
        first_lesson->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 255, 255, 50);\n"
"	border: 2px solid rgba(255, 255, 255, 0);\n"
"    color: white;\n"
"    border-radius: 15px;\n"
"	text-align: left; \n"
"	padding-left: 5px;\n"
"    padding: 4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"        background-color: rgba(255, 255, 255, 85);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 150);\n"
"}"));

        horizontalLayout_11->addWidget(first_lesson);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(1);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_8 = new QLabel(verticalLayoutWidget_2);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(9, 79));
        label_8->setMaximumSize(QSize(9, 79));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_10->addWidget(label_8);

        second_lesson = new QPushButton(verticalLayoutWidget_2);
        second_lesson->setObjectName("second_lesson");
        second_lesson->setMinimumSize(QSize(425, 80));
        second_lesson->setMaximumSize(QSize(425, 80));
        second_lesson->setFont(font2);
        second_lesson->setCursor(QCursor(Qt::PointingHandCursor));
        second_lesson->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 255, 255, 50);\n"
"	border: 2px solid rgba(255, 255, 255, 0);\n"
"    color: white;\n"
"    border-radius: 15px;\n"
"	text-align: left; \n"
"	padding-left: 5px;\n"
"    padding: 4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"        background-color: rgba(255, 255, 255, 85);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 150);\n"
"}"));

        horizontalLayout_10->addWidget(second_lesson);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(1);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(9, 79));
        label_7->setMaximumSize(QSize(9, 79));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_9->addWidget(label_7);

        third_lesson = new QPushButton(verticalLayoutWidget_2);
        third_lesson->setObjectName("third_lesson");
        third_lesson->setMinimumSize(QSize(425, 80));
        third_lesson->setMaximumSize(QSize(425, 80));
        third_lesson->setFont(font2);
        third_lesson->setCursor(QCursor(Qt::PointingHandCursor));
        third_lesson->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 255, 255, 50);\n"
"	border: 2px solid rgba(255, 255, 255, 0);\n"
"    color: white;\n"
"    border-radius: 15px;\n"
"	text-align: left; \n"
"	padding-left: 5px;\n"
"    padding: 4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"        background-color: rgba(255, 255, 255, 85);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 150);\n"
"}"));

        horizontalLayout_9->addWidget(third_lesson);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(1);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(9, 79));
        label_6->setMaximumSize(QSize(9, 79));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_8->addWidget(label_6);

        fourth_lesson = new QPushButton(verticalLayoutWidget_2);
        fourth_lesson->setObjectName("fourth_lesson");
        fourth_lesson->setMinimumSize(QSize(425, 80));
        fourth_lesson->setMaximumSize(QSize(425, 80));
        fourth_lesson->setFont(font2);
        fourth_lesson->setCursor(QCursor(Qt::PointingHandCursor));
        fourth_lesson->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 255, 255, 50);\n"
"	border: 2px solid rgba(255, 255, 255, 0);\n"
"    color: white;\n"
"    border-radius: 15px;\n"
"	text-align: left; \n"
"	padding-left: 5px;\n"
"    padding: 4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"        background-color: rgba(255, 255, 255, 85);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 150);\n"
"}"));

        horizontalLayout_8->addWidget(fourth_lesson);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(9, 79));
        label_4->setMaximumSize(QSize(9, 79));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(label_4);

        five_lesson = new QPushButton(verticalLayoutWidget_2);
        five_lesson->setObjectName("five_lesson");
        five_lesson->setMinimumSize(QSize(425, 80));
        five_lesson->setMaximumSize(QSize(425, 80));
        five_lesson->setFont(font2);
        five_lesson->setCursor(QCursor(Qt::PointingHandCursor));
        five_lesson->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 255, 255, 50);\n"
"	border: 2px solid rgba(255, 255, 255, 0);\n"
"    color: white;\n"
"    border-radius: 15px;\n"
"	text-align: left; \n"
"	padding-left: 5px;\n"
"    padding: 4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"        background-color: rgba(255, 255, 255, 85);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 150);\n"
"}"));

        horizontalLayout_2->addWidget(five_lesson);


        verticalLayout_3->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        welcomeName = new QLabel(page_3);
        welcomeName->setObjectName("welcomeName");
        welcomeName->setGeometry(QRect(0, 0, 471, 651));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial Black")});
        font3.setBold(true);
        welcomeName->setFont(font3);
        welcomeName->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 15px;"));
        stackedWidget->addWidget(page_3);
        page = new QWidget();
        page->setObjectName("page");
        layoutWidget1 = new QWidget(page);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 0, 431, 291));
        verticalLayout_6 = new QVBoxLayout(layoutWidget1);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        group_btn_1 = new QPushButton(layoutWidget1);
        group_btn_1->setObjectName("group_btn_1");
        group_btn_1->setMinimumSize(QSize(425, 80));
        group_btn_1->setMaximumSize(QSize(425, 80));
        group_btn_1->setFont(font2);
        group_btn_1->setCursor(QCursor(Qt::PointingHandCursor));
        group_btn_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 255, 255, 50);\n"
"	border: 2px solid rgba(255, 255, 255, 0);\n"
"    color: white;\n"
"    border-radius: 15px;\n"
"	text-align: left; \n"
"	padding-left: 5px;\n"
"    padding: 4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"        background-color: rgba(255, 255, 255, 85);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 150);\n"
"}"));

        verticalLayout_6->addWidget(group_btn_1);

        group_btn_2 = new QPushButton(layoutWidget1);
        group_btn_2->setObjectName("group_btn_2");
        group_btn_2->setMinimumSize(QSize(425, 80));
        group_btn_2->setMaximumSize(QSize(425, 80));
        group_btn_2->setFont(font2);
        group_btn_2->setCursor(QCursor(Qt::PointingHandCursor));
        group_btn_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 255, 255, 50);\n"
"	border: 2px solid rgba(255, 255, 255, 0);\n"
"    color: white;\n"
"    border-radius: 15px;\n"
"	text-align: left; \n"
"	padding-left: 5px;\n"
"    padding: 4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"        background-color: rgba(255, 255, 255, 85);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 150);\n"
"}"));

        verticalLayout_6->addWidget(group_btn_2);

        group_btn_3 = new QPushButton(layoutWidget1);
        group_btn_3->setObjectName("group_btn_3");
        group_btn_3->setMinimumSize(QSize(425, 80));
        group_btn_3->setMaximumSize(QSize(425, 80));
        group_btn_3->setFont(font2);
        group_btn_3->setCursor(QCursor(Qt::PointingHandCursor));
        group_btn_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 255, 255, 50);\n"
"	border: 2px solid rgba(255, 255, 255, 0);\n"
"    color: white;\n"
"    border-radius: 15px;\n"
"	text-align: left; \n"
"	padding-left: 5px;\n"
"    padding: 4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"        background-color: rgba(255, 255, 255, 85);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 150);\n"
"}"));

        verticalLayout_6->addWidget(group_btn_3);

        stackedWidget->addWidget(page);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        widget_6 = new QWidget(page_6);
        widget_6->setObjectName("widget_6");
        widget_6->setGeometry(QRect(0, 50, 471, 551));
        widget_6->setStyleSheet(QString::fromUtf8("#widget_6{\n"
"        background-image: url(C:/Users/nazar/Downloads/fine.jpg);\n"
"border-radius: 10px;\n"
"font: 25 14pt Bahnschrift Light Condensed\n"
"}\n"
""));
        label_14 = new QLabel(widget_6);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(0, 110, 471, 61));
        label_15 = new QLabel(widget_6);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(20, 37, 41, 41));
        label_15->setMinimumSize(QSize(0, 0));
        label_15->setMaximumSize(QSize(41, 41));
        label_15->setSizeIncrement(QSize(0, 0));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/images/code.png")));
        label_15->setScaledContents(true);
        label_16 = new QLabel(widget_6);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(30, 30, 411, 51));
        label_16->setMinimumSize(QSize(0, 0));
        label_16->setMaximumSize(QSize(34546, 16777215));
        QFont font4;
        font4.setPointSize(24);
        label_16->setFont(font4);
        label_16->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_17 = new QLabel(widget_6);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(410, 37, 41, 41));
        label_17->setMinimumSize(QSize(41, 41));
        label_17->setMaximumSize(QSize(41, 41));
        label_17->setSizeIncrement(QSize(0, 0));
        label_17->setPixmap(QPixmap(QString::fromUtf8(":/images/code.png")));
        label_17->setScaledContents(true);
        info = new QPushButton(widget_6);
        info->setObjectName("info");
        info->setGeometry(QRect(30, 220, 401, 71));
        QFont font5;
        font5.setPointSize(14);
        font5.setBold(true);
        info->setFont(font5);
        info->setCursor(QCursor(Qt::PointingHandCursor));
        info->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 2px solid  rgba(255, 255, 255, 0) ;\n"
"    background-color: rgba(255, 255, 255, 255);\n"
"    color: black;\n"
"    border-radius: 25px\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"        background-color: rgba(255, 255, 255, 255);\n"
"		border: 2px solid  rgba(255, 255, 255, 255) ;\n"
"}\n"
"QPushButton:pressed {\n"
"	border: 2px solid  grey ;\n"
"    background-color: grey;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/github.png"), QSize(), QIcon::Normal, QIcon::Off);
        info->setIcon(icon2);
        info->setIconSize(QSize(28, 28));
        label_13 = new QLabel(widget_6);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(0, 270, 461, 281));
        stackedWidget->addWidget(page_6);
        widget_3 = new QWidget(mainpage);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(610, 20, 381, 111));
        widget_3->setStyleSheet(QString::fromUtf8("#widget_3 {background-color: rgb(60, 60, 60);\n"
"    border-radius: 15px;\n"
"    padding: 4px;\n"
"}"));
        gridLayout = new QGridLayout(widget_3);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, -1, -1, -1);
        stackedWidget_3 = new QStackedWidget(widget_3);
        stackedWidget_3->setObjectName("stackedWidget_3");
        stackedWidget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(60, 60, 60);"));
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        layoutWidget2 = new QWidget(page_4);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 0, 202, 91));
        verticalLayout_5 = new QVBoxLayout(layoutWidget2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        group = new QLabel(layoutWidget2);
        group->setObjectName("group");
        group->setMinimumSize(QSize(80, 15));
        QFont font6;
        font6.setPointSize(9);
        font6.setBold(true);
        group->setFont(font6);
        group->setStyleSheet(QString::fromUtf8(" color: white;"));

        verticalLayout_5->addWidget(group);

        starosta = new QLabel(layoutWidget2);
        starosta->setObjectName("starosta");
        starosta->setMinimumSize(QSize(149, 16));
        starosta->setMaximumSize(QSize(6456, 456456));
        QFont font7;
        font7.setItalic(true);
        starosta->setFont(font7);
        starosta->setStyleSheet(QString::fromUtf8(" color: white;"));

        verticalLayout_5->addWidget(starosta);

        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(111, 16));
        label_5->setFont(font7);
        label_5->setStyleSheet(QString::fromUtf8(" color: white;"));

        verticalLayout_5->addWidget(label_5);

        stackedWidget_3->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        label_12 = new QLabel(page_5);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(-3, -5, 271, 101));
        QFont font8;
        font8.setPointSize(14);
        label_12->setFont(font8);
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        stackedWidget_3->addWidget(page_5);

        horizontalLayout->addWidget(stackedWidget_3);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        label_2 = new QLabel(widget_3);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(90, 90));
        label_2->setMaximumSize(QSize(90, 90));
        label_2->setStyleSheet(QString::fromUtf8(""));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/image.png")));
        label_2->setScaledContents(true);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        widget_4 = new QWidget(mainpage);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(610, 140, 381, 551));
        widget_4->setStyleSheet(QString::fromUtf8("#widget_4 {background-color: rgb(60, 60, 60);\n"
"    border-radius: 15px;\n"
"    padding: 4px;\n"
"}"));
        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName("widget_5");
        widget_5->setGeometry(QRect(10, 10, 361, 531));
        widget_5->setStyleSheet(QString::fromUtf8("#widget_5 {background-color: rgb(60, 60, 60);\n"
"    border-radius: 15px;\n"
"    padding: 4px;\n"
"}"));
        label_3 = new QLabel(widget_5);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(-10, -10, 381, 71));
        label_3->setStyleSheet(QString::fromUtf8("color:white;"));
        stackedWidget_2 = new QStackedWidget(widget_5);
        stackedWidget_2->setObjectName("stackedWidget_2");
        stackedWidget_2->setGeometry(QRect(5, 66, 351, 458));
        stackedWidget_2->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius:15px;"));
        page_10 = new QWidget();
        page_10->setObjectName("page_10");
        tableWidget = new QTableWidget(page_10);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 20, 351, 421));
        tableWidget->setStyleSheet(QString::fromUtf8("\n"
"    QScrollBar::handle:vertical {\n"
"        background: grey;\n"
"        min-height: 20px;\n"
"   }\n"
"\n"
"    QScrollBar::handle:horizontal {\n"
"        background: grey;\n"
"        min-height: 20px;\n"
"   }"));
        stackedWidget_2->addWidget(page_10);
        page_11 = new QWidget();
        page_11->setObjectName("page_11");
        label_10 = new QLabel(page_11);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(0, 0, 351, 461));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Arial Black")});
        font9.setPointSize(25);
        font9.setBold(true);
        label_10->setFont(font9);
        stackedWidget_2->addWidget(page_11);

        retranslateUi(mainpage);

        stackedWidget->setCurrentIndex(2);
        stackedWidget_3->setCurrentIndex(1);
        stackedWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(mainpage);
    } // setupUi

    void retranslateUi(QDialog *mainpage)
    {
        mainpage->setWindowTitle(QCoreApplication::translate("mainpage", "Dialog", nullptr));
        label->setText(QString());
#if QT_CONFIG(whatsthis)
        singout_2->setWhatsThis(QCoreApplication::translate("mainpage", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        singout_2->setText(QString());
#if QT_CONFIG(whatsthis)
        singout->setWhatsThis(QCoreApplication::translate("mainpage", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        singout->setText(QString());
        flagMonday->setText(QString());
        monday->setText(QCoreApplication::translate("mainpage", "\320\237\320\235", nullptr));
        flagTuesday->setText(QString());
        tuesday->setText(QCoreApplication::translate("mainpage", "\320\222\320\242", nullptr));
        flagWenesday->setText(QString());
        wednesday->setText(QCoreApplication::translate("mainpage", "\320\241\320\240", nullptr));
        flagThursday->setText(QString());
        thursday->setText(QCoreApplication::translate("mainpage", "\320\247\320\242", nullptr));
        flagFriday->setText(QString());
        friday->setText(QCoreApplication::translate("mainpage", "\320\237\320\242", nullptr));
        label_9->setText(QCoreApplication::translate("mainpage", "<html><head/><body><p align=\"center\">1</p></body></html>", nullptr));
        first_lesson->setText(QCoreApplication::translate("mainpage", " \320\234\320\260\321\202\320\265\320\274\320\260\321\202\320\270\321\207\320\275\320\270\320\271 \320\260\320\275\320\260\320\273\321\226\320\267\n"
" \320\223\321\200\321\203\320\277\320\270 \320\237\320\237-11, \320\237\320\237-12, \320\237\320\237-13 114 I \320\275.\320\272.\n"
" \320\233\320\265\320\272\321\206\321\226\321\217", nullptr));
        label_8->setText(QCoreApplication::translate("mainpage", "<html><head/><body><p align=\"center\">2</p></body></html>", nullptr));
        second_lesson->setText(QCoreApplication::translate("mainpage", " \320\234\320\260\321\202\320\265\320\274\320\260\321\202\320\270\321\207\320\275\320\270\320\271 \320\260\320\275\320\260\320\273\321\226\320\267\n"
" \320\223\321\200\321\203\320\277\320\260 \320\237\320\237-12, 406 I \320\275.\320\272.\n"
" \320\237\321\200\320\260\320\272\321\202\320\270\321\207\320\275\320\260", nullptr));
        label_7->setText(QCoreApplication::translate("mainpage", "<html><head/><body><p align=\"center\">3</p></body></html>", nullptr));
        third_lesson->setText(QCoreApplication::translate("mainpage", " \320\234\320\260\321\202\320\265\320\274\320\260\321\202\320\270\321\207\320\275\320\270\320\271 \320\260\320\275\320\260\320\273\321\226\320\267\n"
" \320\223\321\200\321\203\320\277\320\270 \320\237\320\237-11 114 I \320\275.\320\272.\n"
" \320\237\321\200\320\260\320\272\321\202\320\270\321\207\320\275\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("mainpage", "<html><head/><body><p align=\"center\">4</p></body></html>", nullptr));
        fourth_lesson->setText(QCoreApplication::translate("mainpage", " \320\234\320\260\321\202\320\265\320\274\320\260\321\202\320\270\321\207\320\275\320\270\320\271 \320\260\320\275\320\260\320\273\321\226\320\267\n"
" \320\223\321\200\321\203\320\277\320\270 \320\237\320\237-11, \320\237\320\237-12, \320\237\320\237-13 114 I \320\275.\320\272.\n"
" \320\233\320\265\320\272\321\206\321\226\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("mainpage", "<html><head/><body><p align=\"center\">5</p></body></html>", nullptr));
        five_lesson->setText(QCoreApplication::translate("mainpage", " \320\234\320\260\321\202\320\265\320\274\320\260\321\202\320\270\321\207\320\275\320\270\320\271 \320\260\320\275\320\260\320\273\321\226\320\267\n"
" \320\223\321\200\321\203\320\277\320\270 \320\237\320\237-11, \320\237\320\237-12, \320\237\320\237-13 114 I \320\275.\320\272.\n"
" \320\233\320\265\320\272\321\206\321\226\321\217", nullptr));
        welcomeName->setText(QCoreApplication::translate("mainpage", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; color:#6f1bb3;\">Youre welcome back</span></p><p align=\"center\"><span style=\" font-size:36pt; color:#6f1bb3;\">NAME!</span></p><p align=\"center\"><span style=\" font-size:22pt; color:#0da8d5;\">With love DRINK TEAM</span></p></body></html>", nullptr));
        group_btn_1->setText(QCoreApplication::translate("mainpage", "\320\223\321\200\321\203\320\277\320\260 NAME", nullptr));
        group_btn_2->setText(QCoreApplication::translate("mainpage", "\320\223\321\200\321\203\320\277\320\260 NAME", nullptr));
        group_btn_3->setText(QCoreApplication::translate("mainpage", "\320\223\321\200\321\203\320\277\320\260 NAME", nullptr));
        label_14->setText(QCoreApplication::translate("mainpage", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#ffffff;\">We are students of</span></p><p align=\"center\"><span style=\" font-size:12pt; color:#ffffff;\">Design and programming of intelligent systems and devices.</span></p></body></html>", nullptr));
        label_15->setText(QString());
        label_16->setText(QCoreApplication::translate("mainpage", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; font-style:italic; color:#ffffff;\">developed by </span><span style=\" font-size:22pt; font-weight:700; color:#ffffff;\">Drink Team</span></p></body></html>", nullptr));
        label_17->setText(QString());
        info->setText(QCoreApplication::translate("mainpage", " Github", nullptr));
        label_13->setText(QCoreApplication::translate("mainpage", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:700; font-style:italic; color:#ffffff;\">This is our first project</span></p><p align=\"center\"><span style=\" font-size:12pt; font-weight:700; font-style:italic; color:#ffffff;\">which was developed for the teachers of our university.</span></p><p align=\"center\"><span style=\" font-size:12pt; font-weight:700; font-style:italic; color:#ffffff;\">If you have any questions, contact us</span></p><p align=\"center\"><span style=\" font-size:12pt; font-weight:700; font-style:italic; color:#ffffff;\">you can find all the data by going to GitHub</span></p></body></html>", nullptr));
        group->setText(QString());
        starosta->setText(QString());
        label_5->setText(QCoreApplication::translate("mainpage", "\320\224\320\270\321\201\321\206\320\270\320\277\320\273\321\226\320\275\320\260: \320\234\320\260\321\202\320\265\320\274\320\260\321\202\320\270\321\207\320\275\320\270\320\271 \320\260\320\275\320\260\320\273\321\226\320\267", nullptr));
        label_12->setText(QCoreApplication::translate("mainpage", "<html><head/><body><p align=\"center\"><span style=\" font-style:italic; color:#ffffff;\">  developed by </span><span style=\" font-weight:700; color:#ffffff;\">Drink Team</span></p></body></html>", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("mainpage", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt; font-weight:700;\">\320\226\321\203\321\200\320\275\320\260\320\273</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("mainpage", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">\320\235\320\225\320\234\320\220\320\204</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainpage: public Ui_mainpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
