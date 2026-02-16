#ifndef CERCLE_H
#define CERCLE_H
#include "Forme.h"
struct Centre{
    int x;
    int y;
};
class Cercle : public Forme
{
private:
    Centre A;
    int rayon;
public:
    Cercle(Centre , int);
    ~Cercle();
    void affiche();
};


#endif