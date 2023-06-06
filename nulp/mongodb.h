// mongodb.h

#ifndef MONGODB_H
#define MONGODB_H

#include <bsoncxx/builder/stream/document.hpp>
#include <bsoncxx/json.hpp>
#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>
#include <mongocxx/uri.hpp>
#include <bsoncxx/document/value.hpp>
#include <bsoncxx/document/view.hpp>
#include <mongocxx/options/find.hpp>
#include <bsoncxx/builder/stream/document.hpp>
#include <bsoncxx/builder/basic/kvp.hpp>
#include <bsoncxx/stdx/make_unique.hpp>
#include <mongocxx/logger.hpp>
#include <mongocxx/options/client.hpp>
#include <bsoncxx/json.hpp>
#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>
#include <mongocxx/uri.hpp>
#include <iostream>
#include <string>
#include <QString>
#include <vector>
#include <bsoncxx/document/view.hpp>
#include <vector>
#include <array>
#include <QTableWidget>
#include <QMovie>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QApplication>
#include <QHeaderView>

using bsoncxx::builder::basic::kvp;
using bsoncxx::builder::basic::make_array;
using bsoncxx::builder::basic::make_document;


class MongoDB {
public:
    MongoDB();
    void connect();
    bool readPasswordAndLogin(QString pass, QString user);
    std::vector<QString> getDays(int x);
    std::string getname();
    std::string getpass();
    QString getTeacherName();
    void setMarks(QTableWidget *item);
    void saveData(QTableWidgetItem *item, QTableWidget *table);
    void renewVerticalLabel(QTableWidget *table);
private:
    QString name;
    void init();
    mongocxx::instance instance;
    mongocxx::client client;
};

#endif // MONGODB_H
