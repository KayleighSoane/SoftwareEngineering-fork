#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect (ui->pushButton, &QPushButton::clicked, this, &MainWindow::onButtonClicked);
    connect (ui ->button2, &QPushButton::clicked, this, &MainWindow::onbutton2clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onButtonClicked(bool b){
    ui ->labelMessage->setText("Hello World!");
}

void MainWindow::onbutton2clicked(bool b)
{
    ui -> labelMessage -> setText("May the force be with you");
}

