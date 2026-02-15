#ifndef MAMIFERE_H
#define MAMIFERE_H
#include "Animal.h"
class Mamifere : public Animal
{
public:
    Mamifere(string nom) : Animal(nom) {}
    virtual ~Mamifere(){}
    virtual void exprimer() = 0;
};

#endif