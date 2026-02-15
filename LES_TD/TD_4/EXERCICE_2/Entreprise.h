#ifndef ENTREPRISE_H
#define ENTREPRISE_H
#include "Employe.h"
class Entreprise
{
    private:
        int idEntreprise;
        string nomEntreprise;
        Individu* directeur;
        int nbSalaries;
    public:
        Entreprise(int id, string nom, Individu* dir, int nb);
        void afficher();
        int getIdEntreprise();
        string getNomEntreprise();
        Individu* getDirecteur();
        int getNbSalaries();
        ~Entreprise() {}
};


#endif