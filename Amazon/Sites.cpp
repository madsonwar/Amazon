#include "Sites.hpp"
#include "Site.hpp"
#include <string>
#include "Data.h"
#include <iostream>
using namespace std;
using std::cout;
using std::string;
Sites::Sites()
{
    
}

Sites::~Sites()
{
    
}

void Sites::printCnpg()
{
    cout << this->cnpj << 'n';
}

void Sites::printfContato()
{
    cout << this->contato << 'n';
}

ostream &operator<<(ostream &output,const Sites &aparelho)
{
    output  << '\n'
        << "Bem vindo ao site:" <<'n';
    return output;
            
}

bool Sites::operator== (const Sites &c) 
 { 
     
     
     //if(this->nome != c.nome) 
         //return false; 
     //if(dataAtual != c.dataAtual) 
         //return false;
     //if(this->endereco != c.endereco) 
         //return false;
     return true; 
 } 

const Sites & Sites::operator=(const Sites &c) 
 { 
  
     //this->nome = c.nome; 
     //this->dataAtual = c.dataAtual; 
     //this->endereco = c.endereco; 
         
     return *this; 
 } 

bool Sites::operator!=(const Sites &c) 
 { 
    return !(*this==c); 
 } 
 