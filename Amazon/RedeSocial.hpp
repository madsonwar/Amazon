#ifndef REDESOCIAL_HPP
#define REDESOCIAL_HPP
#include "SiteDeVendas.h"
#include <string>
#include <iostream>
#include "Site.hpp"
using std::cout;
using namespace std;
class RedeSocial : public Site
{
    friend ostream &operator<<(ostream &,const RedeSocial &);
public:
    RedeSocial();
    ~RedeSocial();
    void cadastro(string nome, string senha, int ano, int mes, int dia);
    void pritfSeusDados();
    bool operator== (const RedeSocial &);
    const RedeSocial & operator= (const RedeSocial &);
    bool operator!= (const RedeSocial &);
    virtual void mensagemInicial();
    virtual void pesquisa();
    virtual void adicionar();
private:
    string nomes;
    string senha;
    Data dataDeNascimento;
};

#endif // REDESOCIAL_HPP
