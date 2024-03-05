#include "nextwindow.h"
#include "ui_nextwindow.h"
#include "QMessageBox"

NextWindow::NextWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NextWindow)
{
    ui->setupUi(this);
}

NextWindow::~NextWindow()
{
    delete ui;
}

void NextWindow::on_pushButton_clicked()
{
    if(ui->radioButton->isChecked()){
        QMessageBox::information(this, "RadioButton", "Выбрана 1");
    }

    if(ui->radioButton_2->isChecked()){
        QMessageBox::information(this, "RadioButton", "Выбрана 2");
     }
}

void NextWindow::on_checkBox_stateChanged(int arg1)
{
    if(ui->checkBox->isChecked()){
        QMessageBox::information(this, "CheckBox", "Галочка поставлена");
    }
    else {
        QMessageBox::information(this, "CheckBox", "Галочка не поставлена");
    }
}
