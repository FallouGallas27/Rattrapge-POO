#include "Vect.h"

Vect::Vect(int size)
{
    n = size;
    adr = new int[n];
}
Vect::~Vect()
{
    delete[] adr;
}
int& Vect::operator[](int i)
{
    if (i < 0 || i >= n)
    {
        cout<<"Erreur d'indice";
        exit(1);
    }
    
    return adr[i];
}

