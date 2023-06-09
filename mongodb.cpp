#include "mongodb.h"

MongoDB::MongoDB() {
    init();
}

void MongoDB::init() {
    client = mongocxx::client(mongocxx::uri("mongodb+srv://nazarhkromiak:****@main.oizuvuy.mongodb.net/?retryWrites=true&w=majority"));
    auto db = client["myNewDatabase"];
    auto students = db["Students"];
    auto teachers = db["Teachers"];
    students.create_index(make_document(kvp("var", 1)));
    teachers.create_index(make_document(kvp("var", 1)));
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

bool MongoDB::readPasswordAndLogin(QString pass, QString user) {
    auto db = client["myNewDatabase"];
    auto collection = db["Teachers"];
    auto doc = collection.find_one(make_document(kvp("name", user.toStdString()), kvp("pass", pass.toStdString())));
    if (doc) {
        return true;
    } else {
        std::cout << "Cant find smth btw" << std::endl;
        return false;
    }
}

std::vector<QString> MongoDB::getDays(int x) {
    std::vector<QString> lessons;
    auto db = client["myNewDatabase"];
    auto collection = db["Teachers"];

    std::string daysOfWeek[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    if (x >= 0 && x <= 4) {
        auto doc = collection.find_one({});
        if (doc && (*doc)[daysOfWeek[x]]) {
            bsoncxx::array::view array = (*doc)[daysOfWeek[x]].get_array().value;

            for(bsoncxx::array::element elem : array) {
                lessons.push_back(QString::fromStdString(elem.get_utf8().value.to_string()));
            }
        }
    }
    return lessons;
}


QString MongoDB::getTeacherName() {
    auto db = client["myNewDatabase"];
    auto collection = db["Teachers"];
    auto doc = collection.find_one({});
    if (doc) {
        auto name_element = (*doc)["TeacherName"];
        std::string username = name_element.get_utf8().value.to_string();
        name = QString::fromStdString(username);
        return name;
    } else {
        std::cout << "No teacher found." << std::endl;
        return QString();
    }
}

void MongoDB::setMarks(QTableWidget *table) {
    QStringList VerticalLabels;
    std::string mark= "mark";
    auto db = client["myNewDatabase"];
    auto collection = db["Students"];
    int rowCount = table->rowCount();
    for(int i = 0; i < rowCount ; i++){
        auto doc = collection.find_one(make_document(kvp("var", i + 1)));
        if (doc) {
            bsoncxx::document::element name = (*doc)["name"];
            bsoncxx::document::element var = (*doc)["var"];
            std::string varEl = std::to_string(var.get_int32().value);
            std::string fieldName = name.get_utf8().value.to_string();
            std::string finalName = varEl+ ") " + fieldName;
            VerticalLabels<< QString::fromStdString(finalName);
            for(int col = 0; col < 14 ; col++){
                mark+=std::to_string(col+1);
                bsoncxx::document::element markItem = (*doc)[mark];
                if(markItem.type() == bsoncxx::type::k_utf8){
                    std::string markEl = markItem.get_utf8().value.to_string();
                    table->setItem(i, col, new QTableWidgetItem(QString::fromStdString(markEl)));
                }else{
                    std::int32_t markEl = markItem.get_int32().value;
                    table->setItem(i, col, new QTableWidgetItem(QString::fromStdString(std::to_string(markEl))));
                }
                mark="mark";
            }
        }
    }
//    table->setVerticalHeaderLabels(VerticalLabels);
    renewVerticalLabel(table);
}

void MongoDB::saveData(QTableWidgetItem *item, QTableWidget *table) {
    // Get the row and column of the changed item
    std::string searchChars = "нН0123456789"; // символи, які потрібно знайти
    size_t found = item->text().toStdString().find_first_of(searchChars); // пошук першого співпадіння

    if(found != std::string::npos){
        auto db = client["myNewDatabase"];
        auto collection = db["Students"];
        int row = item->row();
        int col = item->column();

        // Perform the upload for the specific item or the entire row/column
        if (col >= 0) {
            std::string fieldValue = item->text().toStdString();
            std::string check = "mark" + std::to_string(col + 1);

            // Update the corresponding document in the database
            collection.update_one(
                make_document(kvp("var", row + 1)),
                make_document(kvp("$set", make_document(kvp(check, fieldValue))))
                );
        }
        renewVerticalLabel(table);
    }else{
        item->setText("0");
    }
}
void MongoDB::renewVerticalLabel(QTableWidget* table)
{
        QStringList VerticalLabels;
        auto db = client["myNewDatabase"];
        auto collection = db["Students"];
        auto cursor = collection.find({});
        int sum = 0;
        for (auto&& doc : cursor) {
            for (int i = 0; i < table->columnCount(); i++) {
            std::string mark = doc["mark" + std::to_string(i + 1)].get_utf8().value.to_string();
            if (mark != "н" && mark != "Н") {
                try {
                    sum += std::stoi(mark);
                } catch (const std::invalid_argument& e) {
                    // Handle the case when mark is not a valid integer
                    // You can choose to skip the invalid mark or perform alternative actions
                    std::cerr << "Invalid mark: " << mark << std::endl;
                }
            }
        }
        auto name = doc["name"];
        auto var = doc["var"];
        VerticalLabels << QString::fromStdString(std::to_string(var.get_int32().value) + ") " + name.get_utf8().value.to_string() + "   " + std::to_string(sum));
        sum = 0;
}
table->setVerticalHeaderLabels(VerticalLabels);
}

