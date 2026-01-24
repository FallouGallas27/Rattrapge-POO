#include "Matrice.h"
using namespace std;

int main(){
    Matrice m;
    Matrice* A = m.creer_matrice(2,3);
    Matrice* B = m.creer_matrice(2,3);
    A->elements[0][0] = 1; A->elements[0][1] = 2; A->elements[0][2] = 3;
    A->elements[1][0] = 4; A->elements[1][1] = 5; A->elements[1][2] = 6;
    B->elements[0][0] = 7; B->elements[0][1] = 8; B->elements[0][2] = 9;
    B->elements[1][0] = 10; B->elements[1][1] = 11; B->elements[1][2] = 12;
    cout << "Matrice A: " << endl;
    m.afficher_matrice(A);
    cout << "Matrice B: " << endl;
    m.afficher_matrice(B);
    Matrice* C = m.addition_matrice(A, B);
    cout << "Addition de A et B (C = A + B): " << endl;
    m.afficher_matrice(C);
    
    m.detruire_matrice(A);
    m.detruire_matrice(B);
    m.detruire_matrice(C);
    return 0;
}