#include "RedeSocial.hpp"

RedeSocial::RedeSocial()
{
}

RedeSocial::~RedeSocial()
{
}

ostream &operator<<(ostream &output,const RedeSocial &aparelho)
{
    output  << '\n'
        << "Bem vindo ao site:" <<'n';
    return output;
            
}
bool RedeSocial::operator== (const RedeSocial &c) 
 { 
     
     
     //if(this->nome != c.nome) 
         //return false; 
     //if(dataAtual != c.dataAtual) 
         //return false;
     //if(this->endereco != c.endereco) 
         //return false;
     return true; 
 } 
  
const RedeSocial & RedeSocial::operator=(const RedeSocial &c) 
 { 
  
     //this->nome = c.nome; 
     //this->dataAtual = c.dataAtual; 
     //this->endereco = c.endereco; 
         
     return *this; 
 } 

bool RedeSocial::operator!=(const RedeSocial &c) 
 { 
    return !(*this==c); 
 } 
