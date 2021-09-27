#include "aboutme.h"
#include "ui_aboutme.h"

AboutMe::AboutMe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutMe)
{
    ui->setupUi(this);

    QPixmap pix("C:/Users/Vanda/Downloads/Dowloads/QTPROJECTS/GenioQuiz/Resources/Me.jpg");
    int w = ui->label_picture->width();
    int h = ui->label_picture->height();
    ui->label_picture->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

}

AboutMe::~AboutMe()
{
    delete ui;
}
