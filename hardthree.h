#ifndef HARDTHREE_H
#define HARDTHREE_H

#include <QDialog>
#include<QTimerEvent>

namespace Ui {
class hardThree;
}

class hardThree : public QDialog
{
    Q_OBJECT

public:
    explicit hardThree(QWidget *parent = nullptr);
    ~hardThree();
    void timerEvent(QTimerEvent *event) override;

private slots:
    void on_pushButtonYes_clicked();

    void on_pushButtonNo_clicked();

    void on_pushButtonHelp_clicked();

private:
    Ui::hardThree *ui;
    int counter = 10;
    int timerId;
};

#endif // HARDTHREE_H
