#ifndef SITEDEVENDAS_H
#define SITEDEVENDAS_H
#include <string>
using std::string;
class SiteDeVendas
{
public:
    SiteDeVendas();
    SiteDeVendas( string );
    ~SiteDeVendas();
    void mensagemInicial();
    string getNome();
    string getEndereco();
    void setNome( string );
    void setEndereco( string );
    
private:
    string nome;
    string endereco;
    
};

#endif // SITEDEVENDAS_H
