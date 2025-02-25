#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void timeout();

private slots:
    void on_player1Bar_valueChanged(int value);
    void on_player2Bar_valueChanged(int value);
    void on_SwitchPlayerButton1_clicked();
    void on_SwitchPlayerButton2_clicked();
    void on_twoMinButton_clicked();
    void on_stopGameButton_clicked();
    void on_startGameButton_clicked();
    void on_fiveMinButton_clicked();

private:
    Ui::MainWindow *ui;
    QTimer *pQTimer;
    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime;
    void updateProgressBar();
    void setGameInfoText(QString, short);
};
#endif // MAINWINDOW_H
