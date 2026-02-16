#ifndef LISTE_H
#define LISTE_H
#include "Forme.h"

class Liste
{
private:
    struct Neoud {
        Forme * forme;
        Neoud* suiv;
    };
    
    Neoud * debut;
    Neoud * courant;
    
public:
    Liste();
    ~Liste();
    void ajouter(Forme*);
    void init();
    bool existe();
    Forme* prochain();
    void affiche();
};


#endif