
#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QMainWindow>
#include "mongodb.h"
#include "stylesforbuttons.h"
#include "dialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    MainWindow(MongoDB &Mongo, QWidget *parent = nullptr);
    ~MainWindow();
    void on_lineEdit1_textChanged(const QString &text);
    void on_lineEdit2_textChanged(const QString &text);

protected:
    void mousePressEvent(QMouseEvent *event) override;


signals:



private slots:
    void on_pushButton_3_clicked();


private:
    Ui::MainWindow *ui;
    MongoDB &database;
    stylesForButtons styles;
    void hideLoginWidgetsAndResize();

};

#endif // LOGINPAGE_H
