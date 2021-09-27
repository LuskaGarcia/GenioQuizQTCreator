#ifndef HARDFOUR_H
#define HARDFOUR_H

#include <QDialog>
#include<QTimerEvent>

namespace Ui {
class hardFour;
}

class hardFour : public QDialog
{
    Q_OBJECT

public:
    explicit hardFour(QWidget *parent = nullptr);
    ~hardFour();
    void timerEvent(QTimerEvent *event) override;

private slots:
    void on_correctButton_clicked();

    void on_pushButton_clicked();

    void on_pushButton15_clicked();

    void on_pushButton16_clicked();

    void on_pushButton17_clicked();

    void on_pushButton18_clicked();

private:
    Ui::hardFour *ui;
    int counter = 10;
    int timerId;
};

#endif // HARDFOUR_H
