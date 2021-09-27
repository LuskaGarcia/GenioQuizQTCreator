#include "hardtwo.h"
#include "ui_hardtwo.h"
#include "gameover.h"
#include "hardthree.h"

hardTwo::hardTwo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hardTwo)
{
    ui->setupUi(this);
}

hardTwo::~hardTwo()
{
    delete ui;
}

void hardTwo::on_pushButton14_clicked()
{
    gameOver GameOver;
    GameOver.setModal(true);
    GameOver.exec();
}


void hardTwo::on_pushButton15_clicked()
{
    gameOver GameOver;
    GameOver.setModal(true);
    this->close();
    GameOver.exec();
}


void hardTwo::on_pushButton16_clicked()
{
    gameOver GameOver;
    GameOver.setModal(true);
    this->close();
    GameOver.exec();
}


void hardTwo::on_pushButton17_clicked()
{
    hardThree HardThree;
    HardThree.setModal(true);
    this->close();
    HardThree.exec();

}


void hardTwo::on_pushButton18_clicked()
{
    gameOver GameOver;
    GameOver.setModal(true);
    this->close();
    GameOver.exec();
}

