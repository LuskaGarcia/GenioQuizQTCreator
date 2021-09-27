#include "hardtwo.h"
#include "ui_hardtwo.h"
#include "gameover.h"
#include "hardthree.h"

hardTwo::hardTwo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hardTwo)
{
    ui->setupUi(this);
    this->timerId=startTimer(1000);
}

hardTwo::~hardTwo()
{
    delete ui;
}

void hardTwo::timerEvent(QTimerEvent *event){
    this->counter--;
    ui->contagemLabel->setText(QString::number(this->counter));
    if(counter == 0){
        gameOver GameOver;
        GameOver.setModal(true);
        killTimer(timerId);
        GameOver.exec();
    }
}

void hardTwo::on_pushButton14_clicked()
{
    gameOver GameOver;
    GameOver.setModal(true);
    killTimer(timerId);
    GameOver.exec();
}


void hardTwo::on_pushButton15_clicked()
{
    gameOver GameOver;
    GameOver.setModal(true);
    killTimer(timerId);
    GameOver.exec();
}


void hardTwo::on_pushButton16_clicked()
{
    gameOver GameOver;
    GameOver.setModal(true);
    killTimer(timerId);
    GameOver.exec();
}


void hardTwo::on_pushButton17_clicked()
{
    hardThree HardThree;
    HardThree.setModal(true);
    this->close();
    killTimer(timerId);
    HardThree.exec();

}


void hardTwo::on_pushButton18_clicked()
{
    gameOver GameOver;
    GameOver.setModal(true);
    killTimer(timerId);
    GameOver.exec();
}

