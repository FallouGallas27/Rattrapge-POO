#ifndef SALARIE_H
#define SALARIE_H
#include <iostream>
#include <cstring>
using namespace std;
class Salarie
{
protected:
    char *nom;
    char *prenom;
public:
    Salarie(char*, char*);;
    ~Salarie();
    char* getNom()const;
    char* getPrenom()const;
    void affiche();
};
#endif