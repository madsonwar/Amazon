#ifndef DATA_H
#define DATA_H

class Data
{
public:
    Data();
    Data( int d, int m,  int a);
    Data(const Data &);
    ~Data();
    int getDia();
    int getMes();
    int getAno();
    void setDia( int);
    void setMes( int);
    void setAno(int);
    
private:
    int dia;
    int mes;
    int ano;

};

#endif // DATA_H
