#include "pagamento.h"
#include "ui_pagamento.h"
#include "config.h"
#include "controlarquivo.h"
#include <iostream>

using namespace std;

Pagamento::Pagamento(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pagamento)
{
    ui->setupUi(this);
    this->setWindowTitle((QString)nomeEstabelecimento);
}

Pagamento::~Pagamento()
{
    delete ui;
}
void Pagamento::pagar(QString placa)
{
    this->carregaValores(placa);
    this->setModal(true);
    this->exec();
}

void Pagamento::on_pushButton_2_clicked()
{
    this->pagou = false;
}

void Pagamento::on_pushButton_clicked()
{
    this->pagou = true;
}
void Pagamento::carregaValores(QString placa){

    ControlArquivo control;
    QString carro = control.getCarroPatio(placa);
    QStringList infos = carro.split(",");
    //preenche elementos da view
    this->ui->linfoPlaca->setText(infos[0]);
    this->ui->linfoMarca->setText(infos[1]);
    this->ui->linfoModelo->setText(infos[2]);
    this->ui->linfoCor->setText(infos[3]);

    this->ui->dtEntrada->setDateTime(QDateTime::fromString(infos[6],"yyyy-MM-dd HH:mm"));
    this->ui->dtSaida->setDateTime(QDateTime::currentDateTime());


}
