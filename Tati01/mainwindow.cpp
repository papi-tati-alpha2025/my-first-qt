#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_comboBox_currentIndexChanged(int index){
    if (index == 0){
        ui->label_2->setText("Chicken Frogs");
    }else if (index == 1){
        ui->label_2->setText("Beef Bull\nBeef Foot");

    }else if (index == 2){
        ui->label_2->setText("Stinky\nTofu\nFrom\nTaiwan");

    }else{
        ui->label_2->setText("ERROR");

    }

}
