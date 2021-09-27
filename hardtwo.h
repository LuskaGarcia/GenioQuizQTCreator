#ifndef HARDTWO_H
#define HARDTWO_H

#include <QDialog>

namespace Ui {
class hardTwo;
}

class hardTwo : public QDialog
{
    Q_OBJECT

public:
    explicit hardTwo(QWidget *parent = nullptr);
    ~hardTwo();

private slots:
    void on_pushButton14_clicked();

    void on_pushButton15_clicked();

    void on_pushButton16_clicked();

    void on_pushButton17_clicked();

    void on_pushButton18_clicked();

private:
    Ui::hardTwo *ui;
};

#endif // HARDTWO_H
