#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->centralWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_triggered()
{
    currentFile.clear();
    ui->inputVar->setText(QString());
    ui->outputVal->setText(QString());
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_Exit_clicked()
{
    QApplication::quit();
}

void MainWindow::on_randNum_clicked()
{
    qDebug()<< get_value;
    ui->outputVal->setText(QString::number(get_value));
}

void MainWindow::on_inputVar_returnPressed()
{
    get_value = ui->randNum->text().toInt();
    qDebug()<< get_value;
}
