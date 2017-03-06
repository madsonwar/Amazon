#ifndef SITE_HPP
#define SITE_HPP
#include <string>
#include "Data.h"
#include <iostream>

using namespace std;
using std::cout;
using std::string;

class Site
{
    friend ostream &operator<<(ostream &,const Site &);
public:
    Site();
    Site(const Site &);
    ~Site();
    virtual void mensagemInicial() =0;
    virtual void pesquisa() =0;
    virtual void adicionar() =0;
    bool operator== (const Site &);
    const Site & operator= (const Site &);
    bool operator!= (const Site &);
    string getNome();
    string getEndereco();
    void setNome( const string );
    void setEndereco( const string );
private:
    string endereco;
    string nome;
};

#endif // SITE_HPP
