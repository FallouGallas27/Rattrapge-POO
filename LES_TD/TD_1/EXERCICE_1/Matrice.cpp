#include "Matrice.h"
using namespace std;
Matrice* creer_matrice(int lignes, int colonnes){
    Matrice* m = new Matrice;
    m->nb_lines = lignes;
    m->nb_colones = colonnes;
    m->elements = new float*[lignes];
    for(int i = 0; i < lignes; i++){
        m->elements[i] = new float[colonnes];
    }
    for(int i=0 ; i < lignes; i++){
        for(int j=0 ; j < colonnes; j++){
            m->elements[i][j] = 0;
        }
    }
    return m;
}
void detruire_matrice(Matrice* m){
    for(int i = 0; i < m->nb_lines; i++){
        delete[] m->elements[i];
    }
    delete[] m->elements;
    delete m;
}
void afficher_matrice(Matrice* m){
    for(int i=0 ; i < m->nb_lines; i++){
        for(int j=0 ; j < m->nb_colones; j++){
            std::cout << m->elements[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
Matrice* addition_matrice(Matrice* m1, Matrice * m2){
    Matrice *m3 = new Matrice;
    if(m1 != nullptr && m2 != nullptr ){
        if( m1->nb_lines == m2->nb_lines && m1->nb_colones == m2->nb_colones){
            m3->nb_lines = m1->nb_lines;
            m3->nb_colones = m1->nb_colones;
            m3->elements = new float*[m3->nb_lines];
            for(int i = 0; i < m3->nb_lines; i++){
                m3->elements[i] = new float[m3->nb_colones];
            }
            for(int i = 0; i< m3->nb_lines; i++){
                for(int j = 0; j < m3->nb_colones; j++){
                    m3->elements[i][j] = m1->elements[i][j] + m2->elements[i][j];
                }
            }
        }
        else std::cout<<"Addition impossible "<< std::endl;
    }
    return m3;
}
Matrice* multiplication_matrice(Matrice* m1, Matrice* m2){
    Matrice* m3 = new Matrice;
    if(m1 != nullptr && m2 != nullptr){
        if(m1->nb_colones == m2->nb_lines){
            m3->nb_lines = m1->nb_lines;
            m3->nb_colones = m2->nb_colones;
            m3->elements = new float*[m3->nb_lines];
            for(int i = 0; i < m3->nb_lines; i++){
                m3->elements[i] = new float[m3->nb_colones];
            }
            for(int i = 0; i < m3->nb_lines; i++){
                for(int j = 0; j < m3->nb_colones; j++){
                    m3->elements[i][j] = 0;
                    for(int k = 0; k < m1->nb_colones; k++){
                        m3->elements[i][j] += m1->elements[i][k] * m2->elements[k][j];
                    }
                }
            }
        }
        else std::cout<<"Multiplication impossible "<< std::endl;
    }
    return m3;
}
Matrice* Transpose_matrice(Matrice* m){
    Matrice* mt = new Matrice;
    if(m != nullptr){
        mt->nb_lines = m->nb_colones;
        mt->nb_colones = m->nb_lines;
        mt->elements = new float*[mt->nb_lines];
        for(int i = 0; i < mt->nb_lines; i++){
            mt->elements[i] = new float[mt->nb_colones];
        }
        for(int i = 0; i < m->nb_lines; i++){
            for(int j = 0; j < m->nb_colones; j++){
                mt->elements[j][i] = m->elements[i][j];
            }
        }
    }
    return mt;
}