#include "genericaditional.h"
#include "ui_genericaditional.h"

GenericAditional::GenericAditional(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GenericAditional)
{
    ui->setupUi(this);
}

GenericAditional::~GenericAditional()
{
    delete ui;
}
