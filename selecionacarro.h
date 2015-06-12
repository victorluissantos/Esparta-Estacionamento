#ifndef SELECIONACARRO_H
#define SELECIONACARRO_H

#include <QDialog>

namespace Ui {
class SelecionaCarro;
}

class SelecionaCarro : public QDialog
{
    Q_OBJECT
    
public:
    explicit SelecionaCarro(QWidget *parent = 0);
    ~SelecionaCarro();
    QStringList selecionaOperacional(QStringList carros);
    
private:
    Ui::SelecionaCarro *ui;
};

#endif // SELECIONACARRO_H
