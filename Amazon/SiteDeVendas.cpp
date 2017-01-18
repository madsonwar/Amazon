#include "SiteDeVendas.h"
#include <string>
#include <iostream>
using std::cout;

int SiteDeVendas::numeroDeProdutos = 100;

SiteDeVendas::SiteDeVendas()
{
    this->nome = "Desconhecido";
    this->endereco = "Desconhecido";
}

SiteDeVendas::SiteDeVendas( const string &nomes, const string &ende)
{
    this->nome = nomes;
    this->endereco = ende;
}

SiteDeVendas::SiteDeVendas( const SiteDeVendas &site)
{
    this->nome = site.nome;
    this->endereco = site.endereco;
    
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

void SiteDeVendas::mensagemInicial() const
{
    cout << "Bem Vimdo ao Site de Vendas:"<< nome;
}