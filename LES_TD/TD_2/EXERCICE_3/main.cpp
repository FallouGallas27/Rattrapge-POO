#include "Matrice.h"
Matrice f(Matrice& M){
    return M;
}
int main(){
    Matrice M1(2,3);
    Matrice M2(3,2);
    M1.setElements(0,0,1);
    M1.setElements(0,1,2);
    M1.setElements(0,2,3);
    M1.setElements(1,0,4);
    M1.setElements(1,1,5);
    M1.setElements(1,2,6);
    M2.setElements(0,0,7);
    M2.setElements(0,1,8);
    M2.setElements(1,0,9);
    M2.setElements(1,1,10);
    M2.setElements(2,0,11);
    M2.setElements(2,1,12);
    cout<<"Matrice M1 :"<<endl;
    M1.afficherMatrice();
    cout<<"Matrice M2 :"<<endl;
    M2.afficherMatrice();
    Matrice M3 = M1.produit(M2);
    cout<<"Matrice M3 (M1 x M2) :"<<endl;
    M3.afficherMatrice();
    Matrice M4(M3);
    cout<<"La copie de M3 a M4"<<endl;
    M4.afficherMatrice();
    Matrice M5 = M1;
    Matrice M6 = f(M2);
    M6.afficherMatrice();
    cout<<"L'affection de M2 a M1\n";
    cout<<"Matrice M2\n";
    M2.afficherMatrice();
    cout<<"Matrice M1\n";
    M1.afficherMatrice();
    M1 = M2;
    cout<<"M1 apres affectaion de M2\n";
    M1.afficherMatrice();
    return 0;
}