#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <string>
#include <iostream>
using namespace std;
class Employe
{
protected:
    string nom;
    string prenom;
    int age;
public:
    Employe(string , string , int );
    virtual ~Employe();
    virtual void afficher();
    virtual double calculer_Salaire()=0;
};


#endif // EMPLOYE_H