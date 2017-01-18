#include "SiteDeVendas.h"
#include <string>
#include <iostream>
using std::cout;
static int numeroDeProdutos = 100;
SiteDeVendas::SiteDeVendas()
{
    this->nome = "Desconhecido";
}

SiteDeVendas::SiteDeVendas( string nomes)
{
    this->nome = nomes;
}

SiteDeVendas::SiteDeVendas( const SiteDeVendas &site)
{
    nome = site.nome;
    endereco = site.endereco;
    
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