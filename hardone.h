#ifndef HARDONE_H
#define HARDONE_H

#include <QDialog>
#include<QTimerEvent>

namespace Ui {
class hardOne;
}

class hardOne : public QDialog
{
    Q_OBJECT

public:
    explicit hardOne(QWidget *parent = nullptr);
    ~hardOne();
    void timerEvent(QTimerEvent *event) override;

private slots:
    void on_pushButton_clicked();

private:
    Ui::hardOne *ui;
    int counter = 10;
    int timerId;
};

#endif // HARDONE_H
