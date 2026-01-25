#include "Complexe.h"
using namespace std;

int main(){
    Complexe C1(3,-6);
    Complexe C2(-2, +4);
    Complexe C3(-3, -9);
    cout << "Le complexe de C1 " << endl;
    C1.afficher();
    cout << "Le complexe de C2 " << endl;
    C2.afficher();
    cout << "Le complexe de C3 " << endl;
    C3.afficher();
    cout << "Reel de C1 " << C1.get_reelle() << endl;
    cout << "Imaginaire de C1 " << C1.get_imaginaire() << endl;
    cout << "Le module de C2 " << C2.Module() << endl;
    Complexe C4 = C1.ajouter(C2);
    cout<<"\nL'ajout de C1 et C2 ";
    C4.afficher();
    Complexe C5 = C3.multiplier(C4);
    cout<<"\nLa multiplication de C3 et C4 ";
    C5.afficher();
    cout<<"====================Surdefintion d'operateur================"<<endl;
    Complexe C6 = C1 + C2;
    cout<<"\nL'ajout de C1 et C2 ";
    cout<<C6;
    Complexe C7 = C3 + C6;
    cout<<"\nLa multiplication de C3 et C4 ";
    cout<<C7;
    return 0;
}