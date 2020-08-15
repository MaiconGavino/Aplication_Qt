#include "fm_principal.h"
#include "ui_fm_principal.h"
#include<QFile>
#include<QMessageBox>
#include<mainwindow.h>

QString local = "C:/Users/Codmago/Documents/Projetos_C++/Aplication/Aplication/CSV/";
QString controle = "controle.csv";
QString name, chave, registro, situacao, dataC, hora;

fm_principal::fm_principal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_principal)
{
    ui->setupUi(this);
    setWindowTitle("Sistema de Controle");
}

fm_principal::~fm_principal()
{
    delete ui;
}



void fm_principal::on_pushButton_clicked()
{
    int retirada = ui->checkBox->checkState();
    int devolucao = ui->checkBox_2->checkState();
    if(!retirada)
    {

        if(devolucao)
        {
            situacao = "devolução";
        }
        else
        {
            QMessageBox::warning(this, "Erro", "Campo obrigatório não foi preenchido");
        }
    }
    else if (retirada&&devolucao)
    {
        QMessageBox::warning(this, "Erro", "Apenas um campo deve ser preenchido");
    }
    else
    {
        situacao = "retirada";
    }
    dataC = ui->dateEdit->text();
    hora = ui->timeEdit->text();
    QFile arquivo(local + controle);
    if(!arquivo.open(QFile::Append|QFile::Text))
    {
        QMessageBox::warning(this,"ERRO", "Erro ao gravar no csv");
    }
    QTextStream saida(&arquivo);
    name = ui->lineEdit->text();
    registro = ui->lineEdit_2->text();
    chave = ui->lineEdit_3->text();
    if(name =="" || registro=="" || chave=="")
    {
        QMessageBox::warning(this, "Erro no Preenchimento", "Campo obrigatório não foi preenchido");
    }
    saida << "Name: " << name << " ; " << "Registro: " << registro << " ; " << "Chave/Sala: " << chave << " ; "
          << "Situacão: " <<situacao << " ; " <<"Horario: " << hora <<" ; " << "Data" << dataC << "\n";
    arquivo.flush();
    arquivo.close();
    if(name!=""&& registro!=""&& chave!=""&&situacao!="")
    {
        QMessageBox::information(this,"Salvo", "Os dados foram Salvos");
    }
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    if(situacao=="retirada")
    {
        ui->checkBox->click();
    }
    else if(situacao=="devolução")
    {
        ui->checkBox_2->click();
    }
}
