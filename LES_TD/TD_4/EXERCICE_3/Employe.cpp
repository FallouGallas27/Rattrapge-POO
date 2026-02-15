#include "Employe.h"
Employe::Employe(string nom, string prenom, int age)
{
    this->nom = nom;
    this->prenom = prenom;
    this->age = age;
}
Employe::~Employe()
{
    //dtor
}
void Employe::afficher()
{
    cout << "Nom: " << nom << endl;
    cout << "Prenom: " << prenom << endl;
    cout << "Age: " << age << endl;
}
