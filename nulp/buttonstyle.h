
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
};

#endif // BUTTONSTYLE_H
