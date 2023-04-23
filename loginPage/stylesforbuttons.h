
#ifndef STYLESFORBUTTONS_H
#define STYLESFORBUTTONS_H
#include <QLineEdit>


class stylesForButtons
{


public:
    stylesForButtons();
    QString incorrectStyle  = R"(
QLineEdit {
    background-color: rgba(255, 255, 255, 50);
     color: white;
    border-radius: 4px;
    padding: 4px;
    border: 1px solid #FF0000;
;
}
)";
    QString loginButtonStyle = R"(
QLineEdit {
    background-color: rgba(255, 255, 255, 50);
    color: white;
    border-radius: 4px;
    padding: 4px;
    border: 1px solid rgba(255, 255, 255, 0)
}
)";


};

#endif // STYLESFORBUTTONS_H
