#include "hardfive.h"
#include "ui_hardfive.h"
#include "endgame.h"
#include "gameover.h"

hardFive::hardFive(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hardFive)
{
    ui->setupUi(this);
    this->timerId=startTimer(1000);
}

hardFive::~hardFive()
{
    delete ui;
}

void hardFive::timerEvent(QTimerEvent *event){
    this->counter--;
    ui->contagemLabel->setText(QString::number(this->counter));
    if(counter == 0){
        gameOver GameOver;
        GameOver.setModal(true);
        GameOver.exec();
    }
}

void hardFive::on_submitButton_clicked()
{

    QString senha = ui->passwordText->toPlainText();
    if(senha == "504762"){
        endGame EndGame;
        EndGame.setModal(true);
        this->close();
        killTimer(timerId);
        EndGame.exec();

    }else{
        gameOver GameOver;
        GameOver.setModal(true);
        killTimer(timerId);
        GameOver.exec();
    }


}

