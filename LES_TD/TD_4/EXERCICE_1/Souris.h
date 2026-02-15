#ifndef SOURIS_H
#define SOURIS_H
#include "Mamifere.h"
class Souris : public Mamifere
{
private:
    /* data */
public:
    Souris(string nom): Mamifere(nom){}
    ~Souris(){}
    void exprimer();
};


#endif