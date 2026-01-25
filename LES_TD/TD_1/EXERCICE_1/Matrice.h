#include<iostream>
#ifndef MATRICE_H
#define MATRICE_H

struct Matrice{
    int nb_lines;
    int nb_colones;
    float** elements;
};
    Matrice* creer_matrice(int lignes, int colonnes);
    void detruire_matrice(Matrice* m);
    void afficher_matrice(Matrice* m);
    Matrice* addition_matrice(Matrice* m1, Matrice* m2);
    Matrice* multiplication_matrice(Matrice* m1, Matrice* m2);
    Matrice* Transpose_matrice(Matrice* m);


#endif