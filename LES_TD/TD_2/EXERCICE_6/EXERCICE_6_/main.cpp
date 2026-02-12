#include "Ensemble.h"

void traiter(int n){
    cout<<"On double l'element "<<n<<" = "<<2 * n<<endl;
}
int main(){
    Ensemble E1;
    E1<<1<<2<<3<<4<<5;
    cout<<"Affichage de E1\n";
    E1.afficher();
    cout<<"Suppression de 4\n";
    E1>>4;
    E1.afficher(); 
    Ensemble E2(E1); 
    cout<<"Affichage de E2\n";
    E2.afficher(); 
    E2<<6<<7<<8<<9; 
    cout<<"Affichage de E2\n";
    E2.afficher(); 
    cout<<"Affichage de E1\n"; 
    E1<<9;
    E1.afficher();
    cout<<"Appel de l'operateur '=' E1 = E2\n";
    E1 = E2; E1.afficher();
    E1.init();
    while (E1.existe())
    {
        traiter(E1.prochain());
    }
    
}