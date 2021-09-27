#include "gameover.h"
#include "ui_gameover.h"
#include "mainwindow.h"
#include "questionseasy.h"
#include <QProcess>

gameOver::gameOver(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gameOver)
{
    ui->setupUi(this);
}

gameOver::~gameOver()
{
    delete ui;
}

void gameOver::on_pushButton_clicked()
{
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());

}

