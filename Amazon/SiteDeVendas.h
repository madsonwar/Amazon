#ifndef SITEDEVENDAS_H
#define SITEDEVENDAS_H
#include <iostream>
#include<string>
class SiteDeVendas
{
public:
    SiteDeVendas();
    ~SiteDeVendas();
    void printfNome();
    void printfEndereco();
private:
    string nome;
    string endereco;
    
};

#endif // SITEDEVENDAS_H
