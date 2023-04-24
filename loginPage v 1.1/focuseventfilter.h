// FocusEventFilter.h
#ifndef FOCUSEVENTFILTER_H
#define FOCUSEVENTFILTER_H

#include <QObject>
#include <QLineEdit>

class FocusEventFilter : public QObject
{
    Q_OBJECT

public:
    explicit FocusEventFilter(QObject *parent = nullptr);

protected:
    bool eventFilter(QObject *watched, QEvent *event) override;

private:
    QString defaultStyleSheet;
    QString focusStyleSheet;
};

#endif // FOCUSEVENTFILTER_H
