#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    createLambda();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createLambda()
{
    auto func = []() -> int {return 0;};
    qDebug() << func() << "I am your father looke \n"<< Qt::endl;

    //lambda funcitons, that accepts params
    [](int a, int b) {qDebug() << "a+b= " << a+b << Qt::endl; } (1,2);
}
