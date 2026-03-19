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


void MainWindow::on_btn_mensagem_clicked()
{
    /*
    //criar caixa de mensagem
    QMessageBox::about(this,                                //Qwidget-> quem é o pai desse elemento, qual é o contexto
                       "Titulo da caixa",                   //titulo da caixa de mensagem
                       " Conteudo da caixa de mensagem");   //Conteudo do texto que vai aparecer na caixa de mensagem



    //sobre Qt
    QMessageBox::aboutQt(this, "Titulo da caixa");



    //critico
    QMessageBox::critical(this, "Titulo da caixa", "Conteudo critico");


    //informação
    QMessageBox::information(this,"titulo da caixa", "conteudo informado");


    //alerta
    QMessageBox::warning(this, "Titulo da caixa", "Alerta");



    // question
    QMessageBox::question(this, "titulo da caixa", "Question");
*/



}
