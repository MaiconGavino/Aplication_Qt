#include "mainwindow.h"
#include "ui_mainwindow.h"

static  QSqlDatabase bancoDeDados = QSqlDatabase::addDatabase("QSQLITE");

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //estanciando o banco de dado

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
    setFixedSize(geometry().width(), geometry().height());

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString username=ui->lineEdit->text();
    QString senha=ui->lineEdit_2->text();

    if(!bancoDeDados.isOpen())
    {
        qDebug()<<"banco de dado não está aberto";
        return;
    }
    QSqlQuery query;
    if(query.exec("select * from tb_login where username='"+username+"' and senha='"+senha+"'"))
    {
        int cont = 0;
        while (query.next())
        {
          cont++;
        }
        if(cont>0)
        {
            this->close();
            fm_principal f_principal;
            f_principal.setModal(true);
            f_principal.exec();
        }
        else
        {
            ui->label->setText("Login não efetuado");
            ui->lineEdit->clear();
            ui->lineEdit_2->clear();
            ui->lineEdit->setFocus();
        }
    }

}
