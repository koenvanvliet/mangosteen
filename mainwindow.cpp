#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->textBrowser->setHtml("Dit is een testje van Koen");
}

MainWindow::~MainWindow()
{
    delete ui;
}
