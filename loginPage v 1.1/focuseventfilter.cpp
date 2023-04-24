// FocusEventFilter.cpp
#include "FocusEventFilter.h"

#include <QEvent>

FocusEventFilter::FocusEventFilter(QObject *parent) :
    QObject(parent)
{
    defaultStyleSheet = "QLineEdit { border: 1px solid black; }";
    focusStyleSheet = "QLineEdit { border: 2px solid blue; }";
}

bool FocusEventFilter::eventFilter(QObject *watched, QEvent *event)
{
    QLineEdit *lineEdit = qobject_cast<QLineEdit *>(watched);
    if (lineEdit)
    {
        if (event->type() == QEvent::FocusIn)
        {
            lineEdit->setStyleSheet(focusStyleSheet);
            return true;
        }
        else if (event->type() == QEvent::FocusOut)
        {
            lineEdit->setStyleSheet(defaultStyleSheet);
            return true;
        }
    }

    return QObject::eventFilter(watched, event);
}
