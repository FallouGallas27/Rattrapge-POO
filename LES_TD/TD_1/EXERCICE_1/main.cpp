#include "Matrice.h"
using namespace std;

int main(){
    Matrice m;
    Matrice* A = creer_matrice(2,3);
    Matrice* B = creer_matrice(2,3);
    A->elements[0][0] = 1; A->elements[0][1] = 2; A->elements[0][2] = 3;
    A->elements[1][0] = 4; A->elements[1][1] = 5; A->elements[1][2] = 6;
    B->elements[0][0] = 7; B->elements[0][1] = 8; B->elements[0][2] = 9;
    B->elements[1][0] = 10; B->elements[1][1] = 11; B->elements[1][2] = 12;
    cout << "Matrice A: " << endl;
    afficher_matrice(A);
    cout << "Matrice B: " << endl;
    afficher_matrice(B);
    Matrice* C = addition_matrice(A, B);
    cout << "Addition de A et B (C = A + B): " << endl;
    afficher_matrice(C);
    Matrice* D = creer_matrice(3,2);
    D->elements[0][0] = 1; D->elements[0][1] = 2;
    D->elements[1][0] = 3; D->elements[1][1] = 4;
    D->elements[2][0] = 5; D->elements[2][1] = 6;
    cout << "Matrice D: " << endl;
    Matrice* E = multiplication_matrice(A, D);
    cout << "Multiplication de A et D (E = A * D): " << endl;
    afficher_matrice(E);
    detruire_matrice(A);
    detruire_matrice(B);
    detruire_matrice(C);
    detruire_matrice(D);
    detruire_matrice(E);
    return 0;
}