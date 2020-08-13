#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //estanciando o banco de dado
    QSqlDatabase bancoDeDados = QSqlDatabase::addDatabase("QSQLITE");
    bancoDeDados.setDatabaseName("C:/Users/Codmago/Documents/Projetos_C++/Aplication/Aplication/banco_de_dados/banco.db");

    //abrir o banco de dado
    if(!bancoDeDados.open())
    {
        ui->label->setText("Não foi possível localizar o banco de dados");
    }
    else
    {
        ui->label->setText("Banco de dados localizado com sucesso");
    }
    //setFixedSize(geometry().width(), geometry().height());
}

MainWindow::~MainWindow()
{
    delete ui;
}


