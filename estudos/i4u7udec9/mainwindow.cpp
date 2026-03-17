#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tag = 0;
    tag2 = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_mudatexto_clicked()
{
    if (tag==0) {
        // executa se for verdadeira
        ui->lbl_texto->setText("Obrigada pela atenção!");
        tag=1;
    } else {
        // executa se for falsa
        ui->lbl_texto->setText("Tenham uma boa aula de C++");
        tag=0;
    }
    if (tag2==0) {
        // executa se for verdadeira
        ui->lbl_texto_2->setText("teste 1");
        tag2=1;
    } else {
        // executa se for falsa
        ui->lbl_texto_2->setText("teste 2");
        tag2=0;
    }
}

