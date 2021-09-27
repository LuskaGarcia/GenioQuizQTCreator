#include "hardone.h"
#include "hardtwo.h"
#include "ui_hardone.h"
#include "QTimerEvent"
#include "gameover.h"
hardOne::hardOne(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hardOne)
{
    ui->setupUi(this);
    this->timerId=startTimer(1000);


}

hardOne::~hardOne()
{
    delete ui;
}

void hardOne::timerEvent(QTimerEvent *event){
    this->counter--;
    ui->contagemLabel->setText(QString::number(this->counter));
    if(counter == 0){
        gameOver GameOver;
        GameOver.setModal(true);
        killTimer(timerId);
        GameOver.exec();
    }
}

void hardOne::on_pushButton_clicked()
{
    hardTwo hardTwo;
    hardTwo.setModal(true);
    this->close();
    killTimer(timerId);
    hardTwo.exec();

}



