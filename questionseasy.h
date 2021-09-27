#ifndef QUESTIONSEASY_H
#define QUESTIONSEASY_H

#include <QDialog>

namespace Ui {
class QuestionsEasy;
}

class QuestionsEasy : public QDialog
{
    Q_OBJECT

public:
    explicit QuestionsEasy(QWidget *parent = nullptr);
    ~QuestionsEasy();

private slots:
    void on_questionOneButton_clicked();

    void on_questionTwoButton_clicked();

    void on_questionThreeButton_clicked();

    void on_questionFourButton_clicked();

    void on_helpButton_clicked();

private:
    Ui::QuestionsEasy *ui;
};

#endif // QUESTIONSEASY_H
