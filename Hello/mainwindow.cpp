#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand(time(0));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString s = QString::number(rand() % 2);
    ui->label->setText(s);

    QString aa = ui->lineEdit->text();
    ui->lineEdit->clear();
    if(aa == s){
       ui->lost_won->setText("You Won");

    }else {
        ui->lost_won->setText("You Lost");

    }
}

//asd
