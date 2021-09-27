#include "endgame.h"
#include "ui_endgame.h"
#include "mainwindow.h"
#include "questionseasy.h"
#include <QProcess>

endGame::endGame(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::endGame)
{
    ui->setupUi(this);
}

endGame::~endGame()
{
    delete ui;
}

void endGame::on_menuButton_clicked()
{
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());


}

