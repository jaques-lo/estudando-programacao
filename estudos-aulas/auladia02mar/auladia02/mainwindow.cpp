#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include<QtDebug>
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


void MainWindow::on_btn_mensagem_clicked()
{

    //variavel do tipo standard
    QMessageBox::StandardButton resposta;

/*
    //por default ele tem dois botoes
    //mesmo que nao coloque os botoens standard
    resposta = QMessageBox::question(this, "finalizar", "deseja fechar o programa");

    if(resposta==QMessageBox::Yes){
        close();
    }else{
        qDebug() << "Programa não foi fechado";
    }
*/

    resposta = QMessageBox::question(this, "finalizar","Deseja fechar o programa?",
        QMessageBox::Ok | QMessageBox::Cancel| QMessageBox::Apply);

    if(resposta==QMessageBox::Ok){
        close();
    }else if(resposta==QMessageBox::Cancel){
       qDebug() << "Programa não foi fechado";
    }else{
         QMessageBox::information(this, "alteracao", "objeto alterado com sucesso");
    };

}

