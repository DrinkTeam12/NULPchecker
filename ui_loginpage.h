/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginpage
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_9;
    QLabel *label;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *username;
    QLineEdit *password;
    QVBoxLayout *verticalLayout_10;
    QPushButton *signbutton;
    QWidget *page_4;

    void setupUi(QMainWindow *loginpage)
    {
        if (loginpage->objectName().isEmpty())
            loginpage->setObjectName("loginpage");
        loginpage->setEnabled(true);
        loginpage->resize(800, 580);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/CheckLogo2.png"), QSize(), QIcon::Normal, QIcon::Off);
        loginpage->setWindowIcon(icon);
        loginpage->setAutoFillBackground(false);
        loginpage->setStyleSheet(QString::fromUtf8("#centralwidget {\n"
"background-color: qradialgradient(spread:pad, cx:0.49, cy:0.502304, radius:0.687, fx:0.489, fy:0.51, stop:0 rgba(0, 28, 206, 243), stop:0.985843 rgba(0, 0, 0, 255));\n"
"background-position: center;\n"
"background-repeat:no-repeat;\n"
"border: 0px;}"));
        centralwidget = new QWidget(loginpage);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 800, 580));
        stackedWidget->setStyleSheet(QString::fromUtf8("QStackedWidget > QWidget{background-color: qradialgradient(spread:pad, cx:0.49, cy:0.502304, radius:0.687, fx:0.489, fy:0.51, stop:0 rgba(0, 28, 206, 243), stop:0.985843 rgba(0, 0, 0, 255));\n"
"background-position: center;\n"
"background-repeat:no-repeat;\n"
"border: 0px;}"));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        widget = new QWidget(page_3);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(155, 50, 490, 480));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setStyleSheet(QString::fromUtf8("#widget{\n"
"        background-image: url(C:/Users/nazar/Downloads/fine.jpg);\n"
"border-radius: 10px;\n"
"font: 25 14pt Bahnschrift Light Condensed\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(100, 0, 100, 0);
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 0));
        label->setStyleSheet(QString::fromUtf8("image: url(:/images/CheckLogo2.png);"));

        verticalLayout_9->addWidget(label);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(10);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(20, 29, 20, 14);
        username = new QLineEdit(widget);
        username->setObjectName("username");
        username->setEnabled(true);
        username->setMinimumSize(QSize(226, 36));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(14);
        font.setBold(false);
        font.setStyleStrategy(QFont::PreferDefault);
        username->setFont(font);
        username->setStyleSheet(QString::fromUtf8("    background-color: rgba(255, 255, 255, 50);\n"
"    color: white;\n"
"    border-radius: 15px;\n"
"    padding: 4px;\n"
"    border: 1px solid rgba(255, 255, 255, 0)\n"
""));
        username->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        username->setPlaceholderText(QString::fromUtf8("username"));

        verticalLayout_7->addWidget(username);

        password = new QLineEdit(widget);
        password->setObjectName("password");
        password->setMinimumSize(QSize(226, 36));
        password->setFont(font);
        password->setStyleSheet(QString::fromUtf8("    background-color: rgba(255, 255, 255, 50);\n"
"    color: white;\n"
"    border-radius: 15px;\n"
"    padding: 4px;\n"
"        border: 1px solid rgba(255, 255, 255, 0)"));
        password->setEchoMode(QLineEdit::Password);
        password->setCursorPosition(0);
        password->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_7->addWidget(password);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 9, 0, 47);
        signbutton = new QPushButton(widget);
        signbutton->setObjectName("signbutton");
        signbutton->setMinimumSize(QSize(226, 36));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setKerning(true);
        font1.setStyleStrategy(QFont::PreferDefault);
        signbutton->setFont(font1);
        signbutton->setCursor(QCursor(Qt::PointingHandCursor));
        signbutton->setAutoFillBackground(false);
        signbutton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(255, 255, 255, 50);\n"
"    color: white;\n"
"    border-radius: 15px;\n"
"    padding: 4px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"        background-color: rgba(255, 255, 255, 85);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgba(255, 255, 255, 150);\n"
"}"));

        verticalLayout_10->addWidget(signbutton);


        verticalLayout_7->addLayout(verticalLayout_10);


        verticalLayout_9->addLayout(verticalLayout_7);


        verticalLayout_8->addLayout(verticalLayout_9);


        verticalLayout_2->addLayout(verticalLayout_8);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        stackedWidget->addWidget(page_4);
        loginpage->setCentralWidget(centralwidget);

        retranslateUi(loginpage);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(loginpage);
    } // setupUi

    void retranslateUi(QMainWindow *loginpage)
    {
        loginpage->setWindowTitle(QCoreApplication::translate("loginpage", "NULPchecker", nullptr));
#if QT_CONFIG(whatsthis)
        widget->setWhatsThis(QCoreApplication::translate("loginpage", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label->setText(QString());
        username->setText(QString());
        password->setText(QString());
        password->setPlaceholderText(QCoreApplication::translate("loginpage", "password", nullptr));
        signbutton->setText(QCoreApplication::translate("loginpage", "Sign in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginpage: public Ui_loginpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
