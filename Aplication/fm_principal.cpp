#include "fm_principal.h"
#include "ui_fm_principal.h"

fm_principal::fm_principal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fm_principal)
{
    ui->setupUi(this);

    setWindowTitle("Agenda Dinâmica Portaria");
}

fm_principal::~fm_principal()
{
    delete ui;
}
