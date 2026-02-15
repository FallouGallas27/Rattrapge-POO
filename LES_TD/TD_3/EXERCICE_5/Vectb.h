#ifndef VECTB_H
#define VECTB_H
#include "Vect.h"

class VectB : private Vect{
    int inf;
    int sup;
public:
    VectB(int, int);
    ~VectB();
    int& operator[](int i);
};
#endif 