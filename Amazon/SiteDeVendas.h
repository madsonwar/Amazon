#ifndef SITEDEVENDAS_H
#define SITEDEVENDAS_H
#include <string>
#include <ostream>

using std::ostream;
using std::string;
class SiteDeVendas

{
    friend ostream &operator<<( ostream &,const SiteDeVendas &);
    
public:
    SiteDeVendas();
    SiteDeVendas( const string &, const string &);
    SiteDeVendas( const SiteDeVendas & );
    ~SiteDeVendas();
    void mensagemInicial() const;
    string getNome();
    string getEndereco();
    void setNome( string );
    void setEndereco( string );
    bool operator==( const SiteDeVendas &) const;
    
private:
    string nome;
    string endereco;
    static int numeroDeprodutos;
    
};

#endif // SITEDEVENDAS_H
