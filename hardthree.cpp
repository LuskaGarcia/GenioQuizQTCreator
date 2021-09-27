#include "hardthree.h"
#include "ui_hardthree.h"
#include "gameover.h"
#include "hardfour.h"

hardThree::hardThree(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hardThree)
{
    ui->setupUi(this);
    this->timerId=startTimer(1000);
}

hardThree::~hardThree()
{
    delete ui;
}

void hardThree::timerEvent(QTimerEvent *event){
    this->counter--;
    ui->contagemLabel->setText(QString::number(this->counter));
    if(counter == 0){
        gameOver GameOver;
        GameOver.setModal(true);
        killTimer(timerId);
        GameOver.exec();
    }
}

void hardThree::on_pushButtonYes_clicked()
{
    gameOver GameOver;
    GameOver.setModal(true);
    killTimer(timerId);
    GameOver.exec();
}


void hardThree::on_pushButtonNo_clicked()
{
    gameOver GameOver;
    GameOver.setModal(true);
    killTimer(timerId);
    GameOver.exec();
}


void hardThree::on_pushButtonHelp_clicked()
{
    hardFour HardFour;
    HardFour.setModal(true);
    this->close();
    killTimer(timerId);
    HardFour.exec();

}

