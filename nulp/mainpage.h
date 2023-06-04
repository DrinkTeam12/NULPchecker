#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QDialog>

namespace Ui {
class mainpage;
}

class mainpage : public QDialog
{
    Q_OBJECT

public:
    explicit mainpage(QWidget *parent = nullptr);
    ~mainpage();
    void iniciar(void);

signals:
    void homeClicked();

private slots:

    void on_singout_clicked();

    void on_exit_clicked();

private:
    Ui::mainpage *ui;
};

#endif // MAINPAGE_H
