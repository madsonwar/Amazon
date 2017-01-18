#ifndef SITEDEVENDAS_H
#define SITEDEVENDAS_H
#include <string>
using std::string;
class SiteDeVendas
{
public:
    SiteDeVendas();
    SiteDeVendas( string );
    SiteDeVendas( const SiteDeVendas & );
    ~SiteDeVendas();
    void mensagemInicial() const;
    string getNome();
    string getEndereco();
    void setNome( string );
    void setEndereco( string );
    
private:
    string nome;
    string endereco;
    static int numeroDeprodutos;
    
};

#endif // SITEDEVENDAS_H
