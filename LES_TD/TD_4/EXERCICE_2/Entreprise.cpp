#include "Entreprise.h"
Entreprise::Entreprise(int id, string nom, Individu* dir, int nb) {
    idEntreprise = id;
    nomEntreprise = nom;
    directeur = dir;
    nbSalaries = nb;
    cout << "Constructeur Entreprise: " << nomEntreprise << endl;
}
void Entreprise::afficher() {
    cout << "ID: " << idEntreprise << ", Nom: " << nomEntreprise << ", Directeur: ";
    directeur->afficher();
    cout << "Nombre de salaries: " << nbSalaries << endl;
}
int Entreprise::getIdEntreprise() {
    return idEntreprise;
}
string Entreprise::getNomEntreprise() {
    return nomEntreprise;
}
Individu* Entreprise::getDirecteur() {
    return directeur;
}
int Entreprise::getNbSalaries() {
    return nbSalaries;
}
