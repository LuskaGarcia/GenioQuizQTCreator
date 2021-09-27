#include "hardfive.h"
#include "ui_hardfive.h"
#include "endgame.h"
#include "gameover.h"

hardFive::hardFive(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hardFive)
{
    ui->setupUi(this);
}

hardFive::~hardFive()
{
    delete ui;
}

void hardFive::on_submitButton_clicked()
{

    QString senha = ui->passwordText->toPlainText();
    if(senha == "504762"){
        endGame EndGame;
        EndGame.setModal(true);
        this->close();
        EndGame.exec();

    }else{
        gameOver GameOver;
        GameOver.setModal(true);
        GameOver.exec();
    }


}

