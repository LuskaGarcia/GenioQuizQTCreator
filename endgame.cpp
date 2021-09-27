#include "endgame.h"
#include "ui_endgame.h"
#include "mainwindow.h"
#include "questionseasy.h"

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
    this->close();
    QuestionsEasy *window = new QuestionsEasy(this);
    window -> hide();
    MainWindow *dialog = new MainWindow(this);
    dialog->show();


}

