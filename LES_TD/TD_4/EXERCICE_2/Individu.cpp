#include "Individu.h"

Individu::Individu(string n, string p, int c) {
    nom = n;
    prenom = p;
    clefIndividu = c;
    cout << "Constructeur Individu: " << nom << " " << prenom << endl;
}
void Individu::afficher() {
    cout << "Nom: " << nom << ", Prenom: " << prenom << ", Clef: " << clefIndividu << endl;
}
int Individu::clef() {
    return clefIndividu;
}
