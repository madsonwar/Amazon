#include "Data.h"

Data::Data()
{
    this->dia = 1;
    this->mes = 1;
    this->ano = 1;
}

Data::Data( int d,  int m,  int a)
{
    this->dia = d;
    this->mes = m;
    this->ano = a;
}

Data::Data(const Data &datas)
{
    this->dia = datas.dia;
    this->mes = datas.mes;
    this->ano = datas.ano;
}



Data::~Data()
{
}


void Data::setAno( int a)
{
    this->ano = a;
}

void Data::setDia( int d)
{
    this->dia = d;
}

void Data::setMes( int m)
{
    this->mes = m;
}

int Data::getAno()
{
    return this->ano;
}

int Data::getDia()
{
    return this->dia;
}

int Data::getMes()
{
    return this->mes;
}