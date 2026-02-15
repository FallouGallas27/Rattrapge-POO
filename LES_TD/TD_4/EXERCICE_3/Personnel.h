#ifndef PERSONNEL_H
#define PERSONNEL_H
#include "Employe.h"
class Personnel
{
    private:
        Employe** tab;
        int n;
    public:
        Personnel(int taille=100);
        ~Personnel();
        void ajouter(Employe* e);
        void afficher_employe();
        double Salaire_moyen();
};
#endif // PERSONNEL_H