// mongodb.h

#ifndef MONGODB_H
#define MONGODB_H

#include <bsoncxx/builder/stream/document.hpp>
#include <bsoncxx/json.hpp>
#include <mongocxx/client.hpp>
#include <mongocxx/instance.hpp>
#include <mongocxx/uri.hpp>
#include <iostream>
#include <string>

class MongoDB {
public:
    MongoDB();
    void connect();
    void readPasswordAndLogin();
    std::string getname();
    std::string getpass();

private:
    void init();
    mongocxx::instance instance;
    mongocxx::client client;
    std::string names, password;
};

#endif // MONGODB_H
