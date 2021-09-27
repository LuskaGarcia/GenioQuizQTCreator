#include "aboutproject.h"
#include "ui_aboutproject.h"

AboutProject::AboutProject(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutProject)
{
    ui->setupUi(this);
}

AboutProject::~AboutProject()
{
    delete ui;
}
