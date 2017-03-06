#ifndef SITES_HPP
#define SITES_HPP
#include <string>
#include "Data.h"
#include <iostream>
using namespace std;
using std::cout;
using std::string;
class Sites
{
public:
    Sites();
    ~Sites();
    virtual void mensagemInicial();
    virtual void pesquisa();
    virtual void adicionar();
    void printCnpg();
    void printfContato();
    virtual void mensagemInicial();
    virtual void pesquisa();
    virtual void adicionar();
    bool operator== (const Sites &);
    const Sites & operator= (const Sites &);
    bool operator!= (const Sites &);
private:
    string cnpj;
    int contato;
};

#endif // SITES_HPP
