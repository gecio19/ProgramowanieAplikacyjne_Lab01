#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //- Nauka

    ui->Nauka->setIcon(QIcon("C:nauka.png"));

    ui->egzamin->setIcon(QIcon("C:egzamin.png"));

    ui->skrzyzowania->setIcon(QIcon("C:skrzyzowania.png"));

    ui->Dodatki->setIcon(QIcon("C:dodatki.png"));

    ui->zrodla->setIcon(QIcon("C:zrodla.png"));

    ui->zakoncz->setIcon(QIcon("C:zakoncz.png"));






















}

MainWindow::~MainWindow()
{
    delete ui;
}

