#include "SiteDeVendas.h"
#include <string>
#include <iostream>
#include "Site.hpp"
using std::cout;
using namespace std;
int SiteDeVendas::numeroDeprodutos = 100;
const int SiteDeVendas::numeroMaximoDeProdutos = 10000000;
SiteDeVendas::SiteDeVendas():Site(),dataAtual()
{
   // this->nome = "Desconhecido";
   // this->endereco = "www.Desconhecido.com";
}

SiteDeVendas::SiteDeVendas( const string &nomes, const string &ende,  int dia,  int mes,  int ano):dataAtual(dia, mes, ano)
{
    //this->nome = nomes;
    //this->endereco = ende;
}

SiteDeVendas::SiteDeVendas( const SiteDeVendas &site):Site(static_cast<Site>(site))
{
    //this->nome = site.nome;
    //this->endereco = site.endereco;
    
}

SiteDeVendas::~SiteDeVendas()
{
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

ostream &operator<<(ostream &output,const SiteDeVendas &aparelho)
{
    output  << static_cast < Device >(aparelho)'\n';
    return output;
            
}

bool SiteDeVendas::operator== (const SiteDeVendas &c) 
 { 
     
      if(static_cast <Site> (*this) != static_cast <Site>(c))
        return false;
     //if(this->nome != c.nome) 
         //return false; 
     //if(dataAtual != c.dataAtual) 
         //return false;
     //if(this->endereco != c.endereco) 
         //return false;
     return true; 
 } 
  
const SiteDeVendas & SiteDeVendas::operator=(const SiteDeVendas &c) 
 { 
    static_cast <Device> (*this) = static_cast <Device> (c);
     //this->nome = c.nome; 
     //this->dataAtual = c.dataAtual; 
     //this->endereco = c.endereco; 
         
     return *this; 
 } 

bool SiteDeVendas::operator!=(const SiteDeVendas &c) 
 { 
    return !(*this==c); 
 } 
