#include "Manutentionnaire.h"

Manutentionnaire::Manutentionnaire(string nom, string prenom, int age, double nbheures) : Employe(nom, prenom, age)
{
    this->nbheures = nbheures;
}
Manutentionnaire::~Manutentionnaire()
{
    //dtor
}
void Manutentionnaire::afficher()
{
    Employe::afficher();
    cout << "Nombre d'heures: " << nbheures << endl;
}
double Manutentionnaire::calculer_Salaire()
{
    return nbheures * 65;
}