#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    state = 1;
    operand = -1;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addNum(QString num)
{
    qDebug() << "Button" << num << "pressed";
    switch(state){
    case 1:
        number1.push_back(num);
        ui->textBoxNumber1->setText(number1);
        qDebug() << "number 1 =" << number1 << Qt::endl;
        break;
    case 2:
        number2.push_back(num);
        ui->textBoxNumber2->setText(number2);
        qDebug() << "number 2 =" << number2 << Qt::endl;
        break;
    }
}


void MainWindow::on_button0_clicked(){
    QString num = "0";
    addNum(num);
}

void MainWindow::on_button1_clicked(){
    QString num = "1";
    addNum(num);
}

void MainWindow::on_button2_clicked(){
    QString num = "2";
    addNum(num);
}

void MainWindow::on_button3_clicked(){
    QString num = "3";
    addNum(num);
}

void MainWindow::on_button4_clicked(){
    QString num = "4";
    addNum(num);
}

void MainWindow::on_button5_clicked(){
    QString num = "5";
    addNum(num);
}

void MainWindow::on_button6_clicked(){
    QString num = "6";
    addNum(num);
}

void MainWindow::on_button7_clicked(){
    QString num = "7";
    addNum(num);
}

void MainWindow::on_button8_clicked(){
    QString num = "8";
    addNum(num);
}

void MainWindow::on_button9_clicked(){
    QString num = "9";
    addNum(num);
}

void MainWindow::on_buttonPlus_clicked(){
    qDebug() << "Button + pressed" << Qt::endl;
    operand = 0;
    state = 2;
}

void MainWindow::on_buttonMinus_clicked(){
    qDebug() << "Button - pressed" << Qt::endl;
    operand = 1;
    state = 2;
}

void MainWindow::on_buttonMultiply_clicked(){
    qDebug() << "Button * pressed" << Qt::endl;
    operand = 2;
    state = 2;
}

void MainWindow::on_buttonDivide_clicked(){
    qDebug() << "Button / pressed" << Qt::endl;
    operand = 3;
    state = 2;
}

void MainWindow::on_buttonEnter_clicked(){
    qDebug() << "Button enter pressed" << Qt::endl;
    float num1 = number1.toFloat();
    float num2 = number2.toFloat();
    qDebug() << "Number 1 =" << num1 << ", number 2 =" << num2 << "and operand =" << operand;
    switch(operand){
    case 0:
        result = num1 + num2;
        break;
    case 1:
        result = num1 - num2;
        break;
    case 2:
        result = num1 * num2;
        break;
    case 3:
        result = num1 / num2;
        break;
    default:
        result = 0;
        break;
    }
    qDebug() << "Result =" << result << Qt::endl;
    ui->textBoxResult->setText(QString::number(result));
}

void MainWindow::on_buttonClear_clicked(){
    qDebug() << "Button clear pressed";
    state = 1;
    number1 = NULL;
    number2 = NULL;
    result = 0;
    ui->textBoxNumber1->setText(number1);
    ui->textBoxNumber2->setText(number2);
    ui->textBoxResult->setText(QString::number(result));
}
