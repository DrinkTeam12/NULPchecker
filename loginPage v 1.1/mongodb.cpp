#include "mongodb.h"

MongoDB::MongoDB() {
    init();
}

void MongoDB::init() {
    client = mongocxx::client(mongocxx::uri("mongodb+srv://nazarhkromiak:qwerty123@main.oizuvuy.mongodb.net/?retryWrites=true&w=majority"));
}

void MongoDB::connect() {
    try
    {
        // Ping the "admin" database.
        mongocxx::database db = client["admin"];
        const auto ping_cmd = bsoncxx::builder::basic::make_document(bsoncxx::builder::basic::kvp("ping", 1));
        db.run_command(ping_cmd.view());
        std::cout << "Pinged your deployment. You successfully connected to MongoDB!" << std::endl;
    }
    catch (const std::exception& e)
    {
        // Handle errors
        std::cout<< "Exception: " << e.what() << std::endl;
    }
}

void MongoDB::readPasswordAndLogin() {
    auto db = client["myNewDatabase"];

    // Create a new collection or use an existing one
    auto collection = db["myCollection"];

    // Query the collection to retrieve all documents
    auto cursor = collection.find({});

    // Iterate through the documents
    for (auto&& doc : cursor) {
        // Access the 'name' field of the document
        auto name_element = doc["name"];
        auto password_element = doc["pass"];

        // Check if the 'name' field exists and is a string
        if ((name_element && name_element.type() == bsoncxx::type::k_utf8) && (password_element && name_element.type() == bsoncxx::type::k_utf8)) {
            std::string name = name_element.get_utf8().value.to_string();
            std::string pass = password_element.get_utf8().value.to_string();
            names = name;
            password = pass;
        } else {
            std::cout << "The 'name' field is missing or not a string." << std::endl;
        }
    }
}

std::string MongoDB::getname() {
    return names;
}

std::string MongoDB::getpass() {
    return password;
}

