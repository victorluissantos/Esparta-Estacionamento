#include <QDateTime>
#include <iostream>
#include "config.h"
#include "controlarquivo.h"

using namespace std;

config::config()
{
    this->arvMov = this->getMov(NULL);
}

QString config::getMov(QString data)
{
    if(data.isEmpty()){
        data = this->makeDate();
        return "data/MOV"+data+estension;
    }
    return "data/MOV"+data+estension;
}

QString config::makeDate()
{
    QDateTime data = QDateTime::currentDateTime();
    return data.toString("yyyy-MM-dd");
}

QString config::makeDateTime()
{
    QDateTime data = QDateTime::currentDateTime();
    return data.toString("yyyy-MM-dd HH:mm");
}

QString config::makeNameMov(QString data)
{
    return "data/MOV"+data+".csv";
}
