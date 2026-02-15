#ifndef LISTE_H
#define LISTE_H
#include "Base.h"
class Liste
{
    private:
        Base** elements;
        int nbElements;
    public:
        Liste(int taille = 10);
        void ajouter(Base* elem);
        void afficher();
        ~Liste();
};
#endif // LISTE_H