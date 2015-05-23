#include "cardapio.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Cardapio w;
    w.show();

    return a.exec();
}
