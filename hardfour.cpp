#include "hardfour.h"
#include "ui_hardfour.h"
#include "gameover.h"
#include "hardfive.h"
hardFour::hardFour(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hardFour)
{
    ui->setupUi(this);
}

hardFour::~hardFour()
{
    delete ui;
}

void hardFour::on_correctButton_clicked()
{
    hardFive HardFive;
    HardFive.setModal(true);
    this->close();
    HardFive.exec();
}

void hardFour::on_pushButton15_clicked()
{

    gameOver GameOver;
    GameOver.setModal(true);
    GameOver.exec();

}


void hardFour::on_pushButton16_clicked()
{
    gameOver GameOver;
    GameOver.setModal(true);
    GameOver.exec();
}


void hardFour::on_pushButton17_clicked()
{
    gameOver GameOver;
    GameOver.setModal(true);
    GameOver.exec();
}


void hardFour::on_pushButton18_clicked()
{
    gameOver GameOver;
    GameOver.setModal(true);
    GameOver.exec();
}

