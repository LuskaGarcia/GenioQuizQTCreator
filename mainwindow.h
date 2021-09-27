#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_buttonEasy_clicked();

    void on_buttonMedium_clicked();

    void on_buttonHard_clicked();

    void on_actionAbout_Me_triggered();

    void on_actionAbout_Project_2_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
