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

    void setDificuldade(int dif){
        dificuldade = dif;
    }

    int getDificuldade(){
        return dificuldade;
    }

private slots:
    void on_questionOneButton_clicked();

    void on_questionTwoButton_clicked();

    void on_questionThreeButton_clicked();

    void on_questionFourButton_clicked();

    void on_helpButton_clicked();

private:
    Ui::QuestionsEasy *ui;
    int dificuldade;
};

#endif // QUESTIONSEASY_H
