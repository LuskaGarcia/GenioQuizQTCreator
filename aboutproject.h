#ifndef ABOUTPROJECT_H
#define ABOUTPROJECT_H

#include <QDialog>

namespace Ui {
class AboutProject;
}

class AboutProject : public QDialog
{
    Q_OBJECT

public:
    explicit AboutProject(QWidget *parent = nullptr);
    ~AboutProject();

private:
    Ui::AboutProject *ui;
};

#endif // ABOUTPROJECT_H
