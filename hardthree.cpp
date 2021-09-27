#include "hardthree.h"
#include "ui_hardthree.h"
#include "gameover.h"
#include "hardfour.h"

hardThree::hardThree(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hardThree)
{
    ui->setupUi(this);
}

hardThree::~hardThree()
{
    delete ui;
}

void hardThree::on_pushButtonYes_clicked()
{
    gameOver GameOver;
    GameOver.setModal(true);
    GameOver.exec();
}


void hardThree::on_pushButtonNo_clicked()
{
    gameOver GameOver;
    GameOver.setModal(true);
    GameOver.exec();
}


void hardThree::on_pushButtonHelp_clicked()
{
    hardFour HardFour;
    HardFour.setModal(true);
    this->close();
    HardFour.exec();

}

