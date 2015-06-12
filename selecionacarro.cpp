#include "selecionacarro.h"
#include "ui_selecionacarro.h"

SelecionaCarro::SelecionaCarro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SelecionaCarro)
{
    ui->setupUi(this);
}

SelecionaCarro::~SelecionaCarro()
{
    delete ui;
}
QStringList SelecionaCarro::selecionaOperacional(QStringList carros)
{

}
