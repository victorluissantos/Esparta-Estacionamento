#include "cadastrocarro.h"
#include "ui_cadastrocarro.h"
#include "controlarquivo.h"
#include <QMessageBox>
#include "config.h"

CadastroCarro::CadastroCarro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CadastroCarro)
{
    ui->setupUi(this);
    this->setWindowTitle((QString)nomeEstabelecimento);
    ui->lnPlaca->setFocus();
    this->carregaCidades();
    this->carregaEstados();
    this->carregaCores();
    this->carregaMarcas();
    this->carregaModelos();
}

CadastroCarro::~CadastroCarro()
{
    delete ui;
}
void CadastroCarro::carregaCidades()
{
    ControlArquivo file;
    QStringList cidades = file.getCidades();
    foreach (QString cidade, cidades) {
    this->ui->cbCidade->addItem(cidade);
    }

}
void CadastroCarro::carregaEstados()
{
    ControlArquivo file;
    QStringList estados = file.getEstados();
    foreach (QString estado, estados) {
    this->ui->cbEstado->addItem(estado);
    }
}

void CadastroCarro::carregaMarcas()
{
    ControlArquivo file;
    QStringList marcas = file.getMarcas();
    foreach (QString marca, marcas) {
    this->ui->cbMarca->addItem(marca);
    }

}
void CadastroCarro::carregaModelos()
{
    ControlArquivo file;
    QStringList modelos = file.getModelos();
    foreach (QString modelo, modelos) {
    this->ui->cbModelo->addItem(modelo);
    }

}
void CadastroCarro::carregaCores()
{
    ControlArquivo file;
    QStringList cores = file.getCores();
    foreach (QString cor, cores) {
    this->ui->cbCor->addItem(cor);
    }

}

void CadastroCarro::on_pushButton_clicked()
{
    ControlArquivo file;
    if(!this->ui->lnPlaca->text().isEmpty()){
        if(
            file.inseriNewRegistro(
                    this->ui->lnPlaca->text(),
                    this->ui->cbMarca->currentText(),
                    this->ui->cbModelo->currentText(),
                    this->ui->cbCor->currentText(),
                    this->ui->cbCidade->currentText(),
                    this->ui->cbEstado->currentText()
                    )
            ){
            QMessageBox::about(NULL,"Cadastro Realizado","Veiculo: "+ui->lnPlaca->text()+" cadastrado com sucesso !");
            return;
        }
        QMessageBox::critical(NULL,"Cadastro Erro","Veiculo: "+this->ui->lnPlaca->text()+" naa foi sucesso !");
        return;
    }
    QMessageBox::information(NULL,"Placa obrigatorio","O campo placa e obrigatorio !");
    CadastroCarro recursiveView;
    recursiveView.setModal(true);
    recursiveView.exec();
    recursiveView.ui->lnPlaca->setFocus();
}

void CadastroCarro::on_lnPlaca_textEdited(const QString &arg1)
{
    this->ui->lnPlaca->setText(this->ui->lnPlaca->text().toUpper());
}
