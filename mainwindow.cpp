#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <sqlinterface.h>
#include <QtSql>

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


void MainWindow::on_BConnect_clicked()
{
    SQLInterface::ConnectToBD();
}


void MainWindow::on_BGetData_clicked()
{
    SQLInterface::SelectData(ui->tableView);
}

