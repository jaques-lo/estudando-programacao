/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *edt_idade;
    QPushButton *btn_salvar;
    QRadioButton *rad_femea;
    QLineEdit *edt_nome;
    QRadioButton *rad_macho;
    QLineEdit *edt_cpf;
    QLabel *label;
    QPushButton *btn_alterar;
    QLabel *label_3;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbl_nome;
    QLabel *lbl_idade;
    QLabel *lbl_cpf;
    QLabel *lbl_sexo;
    QPushButton *btn_dados;
    QPushButton *btn_limpar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(786, 503);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(220, 120, 192, 151));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        edt_idade = new QLineEdit(widget);
        edt_idade->setObjectName(QString::fromUtf8("edt_idade"));

        gridLayout->addWidget(edt_idade, 1, 1, 1, 1);

        btn_salvar = new QPushButton(widget);
        btn_salvar->setObjectName(QString::fromUtf8("btn_salvar"));

        gridLayout->addWidget(btn_salvar, 5, 0, 1, 1);

        rad_femea = new QRadioButton(widget);
        rad_femea->setObjectName(QString::fromUtf8("rad_femea"));

        gridLayout->addWidget(rad_femea, 4, 1, 1, 1);

        edt_nome = new QLineEdit(widget);
        edt_nome->setObjectName(QString::fromUtf8("edt_nome"));

        gridLayout->addWidget(edt_nome, 0, 1, 1, 1);

        rad_macho = new QRadioButton(widget);
        rad_macho->setObjectName(QString::fromUtf8("rad_macho"));

        gridLayout->addWidget(rad_macho, 4, 0, 1, 1);

        edt_cpf = new QLineEdit(widget);
        edt_cpf->setObjectName(QString::fromUtf8("edt_cpf"));

        gridLayout->addWidget(edt_cpf, 2, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        btn_alterar = new QPushButton(widget);
        btn_alterar->setObjectName(QString::fromUtf8("btn_alterar"));

        gridLayout->addWidget(btn_alterar, 5, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(430, 120, 171, 150));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lbl_nome = new QLabel(widget1);
        lbl_nome->setObjectName(QString::fromUtf8("lbl_nome"));
        lbl_nome->setFrameShape(QFrame::Box);

        verticalLayout_2->addWidget(lbl_nome);

        lbl_idade = new QLabel(widget1);
        lbl_idade->setObjectName(QString::fromUtf8("lbl_idade"));
        lbl_idade->setFrameShape(QFrame::Box);

        verticalLayout_2->addWidget(lbl_idade);

        lbl_cpf = new QLabel(widget1);
        lbl_cpf->setObjectName(QString::fromUtf8("lbl_cpf"));
        lbl_cpf->setFrameShape(QFrame::Box);

        verticalLayout_2->addWidget(lbl_cpf);

        lbl_sexo = new QLabel(widget1);
        lbl_sexo->setObjectName(QString::fromUtf8("lbl_sexo"));
        lbl_sexo->setFrameShape(QFrame::Box);

        verticalLayout_2->addWidget(lbl_sexo);

        btn_dados = new QPushButton(widget1);
        btn_dados->setObjectName(QString::fromUtf8("btn_dados"));

        verticalLayout_2->addWidget(btn_dados);

        btn_limpar = new QPushButton(widget1);
        btn_limpar->setObjectName(QString::fromUtf8("btn_limpar"));

        verticalLayout_2->addWidget(btn_limpar);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 786, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "idade:", nullptr));
        btn_salvar->setText(QCoreApplication::translate("MainWindow", "save", nullptr));
        rad_femea->setText(QCoreApplication::translate("MainWindow", "mulher", nullptr));
        rad_macho->setText(QCoreApplication::translate("MainWindow", "homem ", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "nome:", nullptr));
        btn_alterar->setText(QCoreApplication::translate("MainWindow", "alterar", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "cpf:", nullptr));
        lbl_nome->setText(QString());
        lbl_idade->setText(QString());
        lbl_cpf->setText(QString());
        lbl_sexo->setText(QString());
        btn_dados->setText(QCoreApplication::translate("MainWindow", "dados", nullptr));
        btn_limpar->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
