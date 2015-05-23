#include "cardapio.h"
#include "ui_cardapio.h"
#include "config.h"

Cardapio::Cardapio(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Cardapio)
{
    ui->setupUi(this);
    this->setWindowTitle((QString)nomeEstabelecimento);
}

Cardapio::~Cardapio()
{
    delete ui;
}
