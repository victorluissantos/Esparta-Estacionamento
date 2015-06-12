#ifndef GENERICADITIONAL_H
#define GENERICADITIONAL_H

#include <QDialog>

namespace Ui {
class GenericAditional;
}

class GenericAditional : public QDialog
{
    Q_OBJECT
    
public:
    explicit GenericAditional(QWidget *parent = 0);
    ~GenericAditional();
    
private:
    Ui::GenericAditional *ui;
};

#endif // GENERICADITIONAL_H
