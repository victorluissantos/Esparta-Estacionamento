#ifndef CARDAPIO_H
#define CARDAPIO_H

#include <QMainWindow>

namespace Ui {
class Cardapio;
}

class Cardapio : public QMainWindow
{
    Q_OBJECT

public:
    explicit Cardapio(QWidget *parent = 0);
    ~Cardapio();

private:
    Ui::Cardapio *ui;
};

#endif // CARDAPIO_H
