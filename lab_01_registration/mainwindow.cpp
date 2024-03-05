#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

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


void MainWindow::on_pushButton_clicked()
{
    QString login = ui->login->text();
    QString password = ui->password->text();
    QString rep_password = ui->password_repeat->text();

    if(password.length()<6){
        QMessageBox::information(this, "Ошибка", "Длина пароля должна быть не менее 6 символов!");
        //ui->statusbar->showMessage("Длина пароля должна быть не менее 6 символов!");
    }
    else if (password != rep_password){
        //QMessageBox::information(this, "Ошибка", "Пароли не совпадают");
        ui->statusbar->showMessage("Пароли не совпадают");
    }
    else if(password == rep_password){
        //QMessageBox::information(this, "Успех", "Вы успешно зарегестрировались!!!");
        hide();
        window = new SecondWindow(this);
        window->show();
    }
}
