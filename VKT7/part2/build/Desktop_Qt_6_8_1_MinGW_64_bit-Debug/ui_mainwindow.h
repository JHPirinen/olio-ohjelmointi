/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *textBoxNumber1;
    QLineEdit *textBoxNumber2;
    QLabel *label_2;
    QLineEdit *textBoxResult;
    QLabel *label_3;
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
    QPushButton *buttonPlus;
    QPushButton *button4;
    QPushButton *button5;
    QPushButton *button6;
    QPushButton *buttonMinus;
    QPushButton *button7;
    QPushButton *button8;
    QPushButton *button9;
    QPushButton *buttonMultiply;
    QPushButton *button0;
    QPushButton *buttonClear;
    QPushButton *buttonEnter;
    QPushButton *buttonDivide;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 71, 16));
        textBoxNumber1 = new QLineEdit(centralwidget);
        textBoxNumber1->setObjectName("textBoxNumber1");
        textBoxNumber1->setGeometry(QRect(10, 30, 71, 20));
        textBoxNumber2 = new QLineEdit(centralwidget);
        textBoxNumber2->setObjectName("textBoxNumber2");
        textBoxNumber2->setGeometry(QRect(90, 30, 71, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 10, 71, 16));
        textBoxResult = new QLineEdit(centralwidget);
        textBoxResult->setObjectName("textBoxResult");
        textBoxResult->setGeometry(QRect(170, 30, 71, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(170, 10, 71, 16));
        button1 = new QPushButton(centralwidget);
        button1->setObjectName("button1");
        button1->setGeometry(QRect(10, 60, 51, 21));
        button2 = new QPushButton(centralwidget);
        button2->setObjectName("button2");
        button2->setGeometry(QRect(70, 60, 51, 21));
        button3 = new QPushButton(centralwidget);
        button3->setObjectName("button3");
        button3->setGeometry(QRect(130, 60, 51, 21));
        buttonPlus = new QPushButton(centralwidget);
        buttonPlus->setObjectName("buttonPlus");
        buttonPlus->setGeometry(QRect(190, 60, 51, 21));
        button4 = new QPushButton(centralwidget);
        button4->setObjectName("button4");
        button4->setGeometry(QRect(10, 90, 51, 21));
        button5 = new QPushButton(centralwidget);
        button5->setObjectName("button5");
        button5->setGeometry(QRect(70, 90, 51, 21));
        button6 = new QPushButton(centralwidget);
        button6->setObjectName("button6");
        button6->setGeometry(QRect(130, 90, 51, 21));
        buttonMinus = new QPushButton(centralwidget);
        buttonMinus->setObjectName("buttonMinus");
        buttonMinus->setGeometry(QRect(190, 90, 51, 21));
        button7 = new QPushButton(centralwidget);
        button7->setObjectName("button7");
        button7->setGeometry(QRect(10, 120, 51, 21));
        button8 = new QPushButton(centralwidget);
        button8->setObjectName("button8");
        button8->setGeometry(QRect(70, 120, 51, 21));
        button9 = new QPushButton(centralwidget);
        button9->setObjectName("button9");
        button9->setGeometry(QRect(130, 120, 51, 21));
        buttonMultiply = new QPushButton(centralwidget);
        buttonMultiply->setObjectName("buttonMultiply");
        buttonMultiply->setGeometry(QRect(190, 120, 51, 21));
        buttonMultiply->setMinimumSize(QSize(0, 0));
        buttonMultiply->setMaximumSize(QSize(16777215, 16777215));
        button0 = new QPushButton(centralwidget);
        button0->setObjectName("button0");
        button0->setGeometry(QRect(10, 150, 51, 21));
        buttonClear = new QPushButton(centralwidget);
        buttonClear->setObjectName("buttonClear");
        buttonClear->setGeometry(QRect(70, 150, 51, 21));
        buttonEnter = new QPushButton(centralwidget);
        buttonEnter->setObjectName("buttonEnter");
        buttonEnter->setGeometry(QRect(130, 150, 51, 21));
        buttonDivide = new QPushButton(centralwidget);
        buttonDivide->setObjectName("buttonDivide");
        buttonDivide->setGeometry(QRect(190, 150, 51, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Number 1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Number 2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        button1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        button2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        button3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        buttonPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        button4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        button5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        buttonMinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        button7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        button8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        button9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        buttonMultiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        button0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        buttonClear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        buttonEnter->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
        buttonDivide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
