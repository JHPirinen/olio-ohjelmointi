#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    num = 0;
    ui->numberLineEdit->setText(QString::number(num));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_countButton_clicked()
{
    qDebug() << "Count button pressed";
    num++;
    ui->numberLineEdit->setText(QString::number(num));
}


void MainWindow::on_resetButton_clicked()
{
    qDebug() << "Reset button pressed";
    num = 0;
    ui->numberLineEdit->setText(QString::number(num));
}

