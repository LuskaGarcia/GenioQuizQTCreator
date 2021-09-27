#include "hardfour.h"
#include "ui_hardfour.h"
#include "gameover.h"
#include "hardfive.h"
hardFour::hardFour(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hardFour)
{
    ui->setupUi(this);
    this->timerId=startTimer(1000);
}

hardFour::~hardFour()
{
    delete ui;
}

void hardFour::timerEvent(QTimerEvent *event){
    this->counter--;
    ui->contagemLabel->setText(QString::number(this->counter));
    if(counter == 0){
        gameOver GameOver;
        GameOver.setModal(true);
        killTimer(timerId);
        GameOver.exec();
    }
}

void hardFour::on_correctButton_clicked()
{
    hardFive HardFive;
    HardFive.setModal(true);
    this->close();
    killTimer(timerId);
    HardFive.exec();
}

void hardFour::on_pushButton15_clicked()
{

    gameOver GameOver;
    GameOver.setModal(true);
    killTimer(timerId);
    GameOver.exec();

}


void hardFour::on_pushButton16_clicked()
{
    gameOver GameOver;
    GameOver.setModal(true);
    killTimer(timerId);
    GameOver.exec();
}


void hardFour::on_pushButton17_clicked()
{
    gameOver GameOver;
    GameOver.setModal(true);
    killTimer(timerId);
    GameOver.exec();
}


void hardFour::on_pushButton18_clicked()
{
    gameOver GameOver;
    GameOver.setModal(true);
    killTimer(timerId);
    GameOver.exec();
}

