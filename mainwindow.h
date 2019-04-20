#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <cstdlib>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionNew_triggered();

    void on_actionExit_triggered();

    void on_Exit_clicked();

    void on_randNum_clicked();

    void on_inputVar_returnPressed();

private:
    Ui::MainWindow *ui;
    QString currentFile="";
    int get_value;
};

#endif // MAINWINDOW_H
