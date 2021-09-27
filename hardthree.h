#ifndef HARDTHREE_H
#define HARDTHREE_H

#include <QDialog>

namespace Ui {
class hardThree;
}

class hardThree : public QDialog
{
    Q_OBJECT

public:
    explicit hardThree(QWidget *parent = nullptr);
    ~hardThree();

private slots:
    void on_pushButtonYes_clicked();

    void on_pushButtonNo_clicked();

    void on_pushButtonHelp_clicked();

private:
    Ui::hardThree *ui;
};

#endif // HARDTHREE_H
