#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_ano_clicked();

    void on_btn_mais_clicked();

    void on_btn_menos_clicked();

    void on_btn_mult_clicked();

private:
    Ui::MainWindow *ui;
    float n1, n2, cal2;
    int ano1,ano2, cal1;
};
#endif // MAINWINDOW_H
