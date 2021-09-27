#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "aboutme.h"
#include "aboutproject.h"
#include "questionseasy.h"
#include "gameover.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::on_buttonEasy_clicked()
{

    QuestionsEasy questionsEasy;
    questionsEasy.setModal(true);
    questionsEasy.exec();
    this->hide();
}


void MainWindow::on_buttonMedium_clicked()
{

}


void MainWindow::on_buttonHard_clicked()
{

    gameOver GameOver;
    GameOver.setModal(true);
    GameOver.exec();


}


void MainWindow::on_actionAbout_Me_triggered()
{
    AboutMe aboutMe;
    aboutMe.setModal(true);
    aboutMe.exec();
}


void MainWindow::on_actionAbout_Project_2_triggered()
{
    AboutProject aboutProject;
    aboutProject.setModal(true);
    aboutProject.exec();
}

