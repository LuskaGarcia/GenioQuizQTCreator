#ifndef HARDTWO_H
#define HARDTWO_H

#include <QDialog>
#include<QTimerEvent>

namespace Ui {
class hardTwo;
}

class hardTwo : public QDialog
{
    Q_OBJECT

public:
    explicit hardTwo(QWidget *parent = nullptr);
    ~hardTwo();
    void timerEvent(QTimerEvent *event) override;

private slots:
    void on_pushButton14_clicked();

    void on_pushButton15_clicked();

    void on_pushButton16_clicked();

    void on_pushButton17_clicked();

    void on_pushButton18_clicked();

private:
    Ui::hardTwo *ui;
    int counter = 10;
    int timerId;
};

#endif // HARDTWO_H
