#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_btn_salvar_clicked()
{
    nome = ui->edt_nome->text();
    idade = ui->edt_idade->text().toInt();
    ui->edt_idade->clear();
    ui->edt_nome->clear();
    ui->edt_nome->setFocus();
    if(ui->rad_femea->isChecked()){
        sexo = "femea";
    }
    else if(ui->rad_macho->isChecked()){
        sexo = "macho";
    }
    else{
        sexo = "indeterminado";
    }
}


void MainWindow::on_btn_dados_clicked()
{
    ui->lbl_nome->setText(nome);
    ui->lbl_idade->setText(QString::number(idade));
    ui->lbl_sexo->setText(sexo);
}

