#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->player1Bar->setValue(0);
    ui->player2Bar->setValue(0);
    setGameInfoText("Select playtime and press start game!", 1);
    pQTimer = new QTimer(this);
    pQTimer->setInterval(1000);
    connect(pQTimer, &QTimer::timeout, this, &MainWindow::updateProgressBar);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_SwitchPlayerButton1_clicked(){
    qDebug() << "Switch player button 1 pressed";
    currentPlayer = 2;
}

void MainWindow::on_SwitchPlayerButton2_clicked(){
    qDebug() << "Switch player button 2 pressed";
    currentPlayer = 1;
}

void MainWindow::on_twoMinButton_clicked(){
    qDebug() << "Two min button pressed";
    gameTime = 120;
    setGameInfoText("Ready to play", 2);
}

void MainWindow::on_fiveMinButton_clicked(){
    qDebug() << "Five min button pressed";
    gameTime = 300;
    setGameInfoText("Ready to play", 2);
}

void MainWindow::updateProgressBar(){
    qDebug() << "player1Time =" << player1Time;
    qDebug() << "player2Time =" << player2Time;

    switch(currentPlayer){
    case 1:
        ui->player1Bar->setValue(player1Time * 100 / gameTime);
        player1Time -= 1;
        if(player1Time <= 0){
            pQTimer->stop();
            setGameInfoText("Player 2 won!", 4);
        }
        break;
    case 2:
        ui->player2Bar->setValue(player2Time * 100 / gameTime);
        player2Time -= 1;
        if(player2Time <= 0){
            pQTimer->stop();
            setGameInfoText("Player 1 won!", 4);
        }
        break;
    }
}

void MainWindow::setGameInfoText(QString text, short size){
    ui->label->setText(text);
}

void MainWindow::on_startGameButton_clicked(){
    qDebug("Start game button pressed");
    ui->player1Bar->setValue(100);
    ui->player2Bar->setValue(100);
    player1Time = gameTime;
    player2Time = gameTime;
    pQTimer->start();
    setGameInfoText("Game ongoing", 3);
}

void MainWindow::on_stopGameButton_clicked(){
    qDebug("Stop game button pressed");
    pQTimer->stop();
    ui->player1Bar->setValue(0);
    ui->player2Bar->setValue(0);
    setGameInfoText("Start a new game via start button", 5);
}
