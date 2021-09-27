#include "gameover.h"
#include "ui_gameover.h"
#include "mainwindow.h"
#include "questionseasy.h"

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
    this->close();
    QuestionsEasy *window = new QuestionsEasy(this);
    window -> hide();
    MainWindow *dialog = new MainWindow(this);
    dialog->showNormal();
    dialog->isEnabled();



}

