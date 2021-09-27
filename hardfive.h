#ifndef HARDFIVE_H
#define HARDFIVE_H

#include <QDialog>
#include<QTimerEvent>

namespace Ui {
class hardFive;
}

class hardFive : public QDialog
{
    Q_OBJECT

public:
    explicit hardFive(QWidget *parent = nullptr);
    ~hardFive();
    void timerEvent(QTimerEvent *event) override;

private slots:
    void on_submitButton_clicked();

private:
    Ui::hardFive *ui;
    int counter = 10;
    int timerId;
};

#endif // HARDFIVE_H
