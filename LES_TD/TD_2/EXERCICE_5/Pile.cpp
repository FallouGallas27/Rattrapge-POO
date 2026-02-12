#include "Pile.h"

Pile::Pile(int t){
    taille = t;court = 0;
    tab = new int[taille];
    for(int i = 0; i < taille; i++){
        tab[i] = 0;
    }
}
Pile::~Pile(){
    delete[] tab;
}

void Pile::empiler(int n){
    if(court < taille){
        tab[court] = n;
        court++;
    }
    else{
        cout << "Pile pleine" << endl;
    }
}

void Pile::depiler(){
    if(!estVide()){
        court--;
    }
    else{
        cout << "Pile vide" << endl;
    }
}

int Pile::sommet(){
    if(!estVide()){
        return tab[court - 1];
    }
    return -1;
}

bool Pile::estVide(){
    return court == 0;
}

void Pile::afficher(){
    if(estVide()){
        cout << "Pile vide" << endl;
        return;
    }
    cout << "Contenu de la pile (du bas au sommet): ";
    for(int i = 0; i < court; i++){
        cout << tab[i] << " ";
    }
    cout << endl;
}