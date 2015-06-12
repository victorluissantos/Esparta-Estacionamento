#include "ambiente.h"
#include "ui_ambiente.h"
#include "config.h"
#include "controlarquivo.h"
#include <QMessageBox>

Ambiente::Ambiente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ambiente)
{
    ui->setupUi(this);
    this->setWindowTitle((QString)nomeEstabelecimento);
}

Ambiente::~Ambiente()
{
    delete ui;
}

void Ambiente::on_btnSalvar_clicked()
{

    if(!this->ui->lnNomeLoja->text().isEmpty()){

        //montando conteudo para salvar configuracao

        //montando conteudo para salvar tabela de valores

        ControlArquivo control;

        //grava configuraçoes
        /*
        if(!control.gravaArquivo(aqvConfiguracao,)){
            QMessageBox::critical(NULL,"Erro #013","Nao foi possivel atualizar a tabela de as configuracoes de nome e tela cheia\nFavor contate o suporte !");
        }//grava tabela de valores
        if(!control.gravaArquivo(aqvTabelaValor,)){
            QMessageBox::critical(NULL,"Erro #014","Nao foi possivel atualizar a tabela de valores\nFavor contate o suporte !");
        }else{
            QMessageBox::information(NULL,"Sucesso !","onfiguraçoes e tabela de valores atualizados com sucesso !");
            this->close();
        }*/

    }else{
        QMessageBox::critical(NULL,"Erro #012","Favor Preencher o campo nome da loja!");
    }

}
