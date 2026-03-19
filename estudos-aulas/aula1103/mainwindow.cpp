#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "janela2.h"
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


void MainWindow::on_btn_janela2_clicked()
{
    Janela2 *form2 = new Janela2();
    form2->show();
    close();
}


void MainWindow::on_btn_carrega_clicked()
{
    letra = ui->edt_letra->text();
    ui->edt_letra->clear();
}


void MainWindow::on_btn_testa_clicked()
{
    QString tenta=ui->edt_tentativa->text();

    if(letra==tenta){
        Janela2 *form2 = new Janela2();
        form2->show();
        close();
    }else{
        QString texto = ui->lbl_tentativa->text();
        ui->lbl_tentativa->setText(texto+tenta);
        ui->edt_tentativa->clear();
        ui->edt_tentativa->setFocus();
    }
}

