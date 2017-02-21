#ifndef SITEDEVENDAS_H
#define SITEDEVENDAS_H

#include <string>
#include "Data.h"
#include <iostream>
using std::cout;
using std::string;
class SiteDeVendas
{
public:
    SiteDeVendas();
    SiteDeVendas( const string &, const string &, int, int, int);
    SiteDeVendas( const SiteDeVendas & );
    ~SiteDeVendas();
    void mensagemInicial() const;
    string getNome();
    string getEndereco();
    void setNome( const string );
    void setEndereco( const string );
    void printfDataAtual();
    void initListaDeProdutos();
    void mostraListaDeProdutos() const;
private:
    string nome;
    string endereco;
    static int numeroDeprodutos;
    const static int numeroMaximoDeProdutos;
    Data dataAtual;
    const static int sizeId = 10;
    string listaDeProdutos[sizeId];
    
};

#endif // SITEDEVENDAS_H
