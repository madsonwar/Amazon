#ifndef SITEDEVENDAS_H
#define SITEDEVENDAS_H
#include "Site.hpp"
#include <string>
#include "Data.h"
#include <iostream>
using namespace std;
using std::cout;
using std::string;
class SiteDeVendas : public Site
{
    friend ostream &operator<<(ostream &,const SiteDeVendas &);
public:
    SiteDeVendas();
    SiteDeVendas( const string &, const string &, int, int, int);
    SiteDeVendas( const SiteDeVendas & );
    ~SiteDeVendas();
    
    virtual void mensagemInicial();
    virtual void pesquisa();
    virtual void adicionar();
    void printfDataAtual();
    void initListaDeProdutos();
    void mostraListaDeProdutos() const;
    bool operator== (const SiteDeVendas &);
    const SiteDeVendas & operator= (const SiteDeVendas &);
    bool operator!= (const SiteDeVendas &);
private:
    //string nome;
    //string endereco;
    static int numeroDeprodutos;
    const static int numeroMaximoDeProdutos;
    Data dataAtual;
    const static int sizeId = 10;
    string listaDeProdutos[sizeId];
    
};

#endif // SITEDEVENDAS_H
