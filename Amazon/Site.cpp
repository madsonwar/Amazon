#include "Site.hpp"

Site::Site()
{
    this->endereco = "Desconhecido";
    this->nome = "Desconhecid";
}

Site::Site(const Site & site)
{
    this->endereco = site.endereco;
    this->nome = site.nome;
}

Site::~Site()
{
}

ostream &operator<<(ostream &output,const Site &aparelho)
{
    output  << this->endereco
        << "Bem vindo ao site:" << this->nome;
    return output;
            
}

bool Site::operator== (const Site &c) 
 { 
     
     
     if(this->nome != c.nome) 
         return false; 
     
     if(this->endereco != c.endereco) 
         return false;
     return true; 
 } 

const Site & Site::operator=(const Site &c) 
 { 
  
     this->nome = c.nome; 
     this->dataAtual = c.dataAtual; 
     this->endereco = c.endereco; 
         
     return *this; 
 } 

bool Site::operator!=(const Site &c) 
 { 
    return !(*this==c); 
 } 
 
string Site::getEndereco()
{
    return this->endereco;
}
string Site::getNome()
{
    return this->nome;
}
void Site::setEndereco( const string enderecos)
{
    this->endereco = enderecos;
}

void Site::setNome(const string nomes)
{
    this->nome = nomes;
}