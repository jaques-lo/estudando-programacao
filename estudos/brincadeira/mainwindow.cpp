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

//calculo ano
void MainWindow::on_btn_ano_clicked()
{
    ano1 = ui->edt_ano->text().toInt();
    ano2 = ui->edt_anoatual->text().toInt();
    cal1 = ano2 - ano1;
    ui->lbl_text2->setText(QString::number(cal1) + " anos");
}

//botao mais
void MainWindow::on_btn_mais_clicked()
{
    n1 = ui->edt_n1->text().toInt();
    n2 = ui->edt_n2->text().toInt();
    cal2 =  n1+n2;
    ui->lbl_text->setText(QString::number(cal2));
}

//botao menos
void MainWindow::on_btn_menos_clicked()
{
    n1 = ui->edt_n1->text().toInt();
    n2 = ui->edt_n2->text().toInt();
    cal2 =  n1-n2;
    ui->lbl_text->setText(QString::number(cal2));
}

//botao multiplicacao
void MainWindow::on_btn_mult_clicked()
{
    n1 = ui->edt_n1->text().toInt();
    n2 = ui->edt_n2->text().toInt();
    cal2 =  n1*n2;
    ui->lbl_text->setText(QString::number(cal2));
}

