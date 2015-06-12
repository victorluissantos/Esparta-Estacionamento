#ifndef CADASTROCARRO_H
#define CADASTROCARRO_H

#include <QDialog>

namespace Ui {
class CadastroCarro;
}

class CadastroCarro : public QDialog
{
    Q_OBJECT
    
public:
    explicit CadastroCarro(QWidget *parent = 0);
    ~CadastroCarro();
    
private slots:
    void on_pushButton_clicked();

    void on_lnPlaca_textEdited(const QString &arg1);

private:
    Ui::CadastroCarro *ui;
    void carregaCidades();
    void carregaEstados();
    void carregaModelos();
    void carregaMarcas();
    void carregaCores();
};

#endif // CADASTROCARRO_H
