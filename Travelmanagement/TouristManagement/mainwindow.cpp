#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
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

void MainWindow::on_pushButton_login_clicked()
{
    QString username = ui->username->text();
    QString password = ui->password->text();

    if(username == "test" && password == "test"){
        QMessageBox::information(this,"Login","username and password is correct");
        hide();
        frontpage = new frontpage(this);
        frontpage->show();
    }
    else{
        QMessageBox::warning(this,"Login","username and password is not correct");
    }
}

