#include "Vectb.h"

VectB::VectB(int in, int sp):Vect(sp - in +1){
    sup  = sp;
    inf = in;
}
VectB::~VectB(){}
int& VectB::operator[](int i){
    if (i < inf || i > sup)
    {
        cout<<"Erreur d'indice";
        exit(1);
    }
    return Vect::operator[](i - inf);
}