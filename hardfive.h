#ifndef HARDFIVE_H
#define HARDFIVE_H

#include <QDialog>

namespace Ui {
class hardFive;
}

class hardFive : public QDialog
{
    Q_OBJECT

public:
    explicit hardFive(QWidget *parent = nullptr);
    ~hardFive();

private slots:
    void on_submitButton_clicked();

private:
    Ui::hardFive *ui;
};

#endif // HARDFIVE_H
