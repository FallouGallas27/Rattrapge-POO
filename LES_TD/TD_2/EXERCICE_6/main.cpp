#include "Ensemble.h"

int main(){
    Ensemble E1;
    E1.ajouteer(1);
    E1.ajouteer(2);
    E1.ajouteer(3);
    E1.ajouteer(4);
    cout<<"Affichage de l'ensemble E1"<<endl;
    E1.afficher();
    cout<<"Suppression de 4 "<<endl;
    E1.supprimer(4);
    E1.afficher();
    Ensemble E2(E1);
    E2.afficher();
    E2.ajouteer(6);
    E2.ajouteer(7);
    E2.ajouteer(8);
    E2.ajouteer(9);
    cout<<"Affichage de E2 \n";
    E2.afficher();
    cout<<"Affichage de E1 \n";
    E1.ajouteer(9);
    E1.afficher();
    cout<<"Appel de l'operateur '=' E1 = E2\n";
    E1 = E2;
    E1.afficher();
}