#ifndef CANARI_H
#define CANARI_H
#include "Oiseau.h"
class Canari : public Oiseau
{
private:
    /* data */
public:
    Canari(string nom) : Oiseau(nom) {}
    ~Canari(){}
    void exprimer();
};

#endif