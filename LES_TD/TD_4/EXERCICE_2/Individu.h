#ifndef INDIVIDU_H
#define INDIVIDU_H
#include "Base.h"
class Individu : public Base
{
    private:
        string nom;
        string prenom;
        int clefIndividu;
    public:
        Individu(string nom, string prenom, int clef);
        void afficher() ;
        int clef();
        ~Individu() {}
};

#endif // INDIVIDU_H