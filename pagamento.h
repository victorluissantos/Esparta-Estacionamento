#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include <QDialog>

namespace Ui {
class Pagamento;
}

class Pagamento : public QDialog
{
    Q_OBJECT
    
public:
    explicit Pagamento(QWidget *parent = 0);
    ~Pagamento();
    void pagar(QString placa);
    bool pagou;

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Pagamento *ui;
    void carregaValores(QString placa);
};

#endif // PAGAMENTO_H
