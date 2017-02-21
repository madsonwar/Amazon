#include "SiteDeVendas.h"
#include <string>
#include <iostream>
using std::cout;

int SiteDeVendas::numeroDeprodutos = 100;
const int SiteDeVendas::numeroMaximoDeProdutos = 10000000;
SiteDeVendas::SiteDeVendas():dataAtual()
{
    this->nome = "Desconhecido";
    this->endereco = "www.Desconhecido.com";
}

SiteDeVendas::SiteDeVendas( const string &nomes, const string &ende,  int dia,  int mes,  int ano):dataAtual(dia, mes, ano)
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
    return this->endereco;
}
string SiteDeVendas::getNome()
{
    return this->nome;
}
void SiteDeVendas::setEndereco( const string enderecos)
{
    this->endereco = enderecos;
}

void SiteDeVendas::setNome(const string nomes)
{
    this->nome = nomes;
}

void SiteDeVendas::mensagemInicial() const
{
    cout << this->endereco << '\n'<<"Bem Vimdo ao Site:"<< this->nome;
}

void SiteDeVendas::printfDataAtual()
{
    cout << "A data atual eh:"<< dataAtual.getDia()<< '/'<< dataAtual.getMes() << '/' << dataAtual.getAno();
}

void SiteDeVendas::initListaDeProdutos()
{
    for(int i = 0; i < this->sizeId; i++)
        this->listaDeProdutos[i]="Desconhecido";
    
}

void SiteDeVendas::mostraListaDeProdutos() const
{
    for(int i = 0; i < sizeId; i++)
        cout << '\n'<< listaDeProdutos[i] << '\n';
    
     
}