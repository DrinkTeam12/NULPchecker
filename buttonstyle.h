
#ifndef BUTTONSTYLE_H
#define BUTTONSTYLE_H
#include <QLineEdit>




class buttonstyle
{
public:
    buttonstyle();
    QString incorrectStyle  = R"(
QLineEdit {
    background-color: rgba(255, 255, 255, 50);
    color: white;
    border-radius: 15px;
    padding: 4px;
    border: 1px solid #FF0000;
;
}
)";
    QString loginButtonStyle = R"(
QLineEdit {
    background-color: rgba(255, 255, 255, 50);
    color: white;
    border-radius: 15px;
    padding: 4px;
    border: 1px solid rgba(255, 255, 255, 0)
}
)";

    QString flagColor = R"(
    background-color: purple;
)";
    QString flagUnColor = R"(

)";
    QString starostText = "Староста: Лебідь Валерія";
    QString getIncorrectBtn = R"(
QPushButton {
    text-align: center;
    background-color: rgba(255, 255, 255, 50);
    border: 2px solid red;
    color: white;
    border-radius: 15px;
    padding: 4px;
}

QPushButton:hover {
        background-color: rgba(255, 255, 255, 85);
}
QPushButton:pressed {
    background-color: rgba(255, 255, 255, 150);
}
)";
    QString getNormalButton = R"(
QPushButton {
    background-color: rgba(255, 255, 255, 50);
    border: 2px solid rgba(255, 255, 255, 0);
    color: white;
    border-radius: 15px;
    text-align: left;
    padding-left: 5px;
    padding: 4px;
}

QPushButton:hover {
        background-color: rgba(255, 255, 255, 85);
}
QPushButton:pressed {
    background-color: rgba(255, 255, 255, 150);
}
)";
};

#endif // BUTTONSTYLE_H
