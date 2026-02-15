#include "Commercial.h"
Commercial::Commercial(string nom, string prenom, int age, double chiffre_affaire) : Employe(nom, prenom, age)
{
    this->chiffre_affaire = chiffre_affaire;
}
Commercial::~Commercial()
{
    //dtor
}
void Commercial::afficher()
{
    Employe::afficher();
    cout << "Chiffre d'affaire: " << chiffre_affaire << endl;
}
double Commercial::calculer_Salaire()
{
    return chiffre_affaire * 0.2 +400;
} 
