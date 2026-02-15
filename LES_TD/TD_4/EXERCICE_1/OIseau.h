#ifndef OISEAU_H
#define OISEAU_H
#include "Animal.h"
class Oiseau : public Animal
{
private:
    /* data */
public:
    Oiseau(string nom) : Animal(nom) {}
    virtual ~Oiseau(){}
    virtual void exprimer() = 0;
};

#endif