#ifndef AMBIENTE_H
#define AMBIENTE_H

#include <QDialog>

namespace Ui {
class Ambiente;
}

class Ambiente : public QDialog
{
    Q_OBJECT
    
public:
    explicit Ambiente(QWidget *parent = 0);
    ~Ambiente();
    
private slots:
    void on_btnSalvar_clicked();

private:
    Ui::Ambiente *ui;
};

#endif // AMBIENTE_H
