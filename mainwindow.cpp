#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "aboutme.h"
#include "aboutproject.h"
#include "questionseasy.h"
#include "gameover.h"
#include "hardone.h"

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
    questionsEasy.setDificuldade(0);
    questionsEasy.setModal(true);
    questionsEasy.exec();
    this->hide();
}


void MainWindow::on_buttonMedium_clicked()
{
    QuestionsEasy questionsEasy;
    questionsEasy.setDificuldade(1);
    questionsEasy.setModal(true);
    questionsEasy.exec();
    this->hide();


}


void MainWindow::on_buttonHard_clicked()
{


    QuestionsEasy questionsEasy;
    questionsEasy.setDificuldade(2);
    questionsEasy.setModal(true);
    questionsEasy.exec();
    this->hide();

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

