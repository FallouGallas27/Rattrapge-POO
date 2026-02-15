#include "Salarie.h"

Salarie::Salarie(char* n, char* p){
    nom = new char[strlen(n)+1];
    strcpy(nom, n);
    prenom = new char[strlen(p)+1];
    strcpy(prenom, p);
}
Salarie::~Salarie(){
    delete nom;
    delete prenom;
}

char* Salarie::getNom()const{
    return nom;
}

char* Salarie::getPrenom()const{
    return prenom;
}
void Salarie::affiche(){
    cout<<"Prenom : "<<prenom<<" Nom : "<<nom<<endl;
}