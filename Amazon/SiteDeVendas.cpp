#include "SiteDeVendas.h"
#include <string>
#include <iostream>
using std::cout;
SiteDeVendas::SiteDeVendas()
{
    this->nome = "Desconhecido";
}

SiteDeVendas::SiteDeVendas( string nomes)
{
    this->nome = nomes;
}

SiteDeVendas::~SiteDeVendas()
{
}


string SiteDeVendas::getEndereco()
{
    return endereco;
}
string SiteDeVendas::getNome()
{
    return nome;
}
void SiteDeVendas::setEndereco(string enderecos)
{
    this->endereco = enderecos;
}

void SiteDeVendas::setNome(string nomes)
{
    this->nome = nomes;
}

void SiteDeVendas::mensagemInicial()
{
    cout << "Bem Vimdo ao Site de Vendas:"<< nome;
}