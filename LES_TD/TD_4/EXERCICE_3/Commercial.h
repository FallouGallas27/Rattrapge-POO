#ifndef COMMERCIAL_H
#define COMMERCIAL_H
#include "Employe.h"
class Commercial : public Employe
{
    private:
        double chiffre_affaire;
    public: 
        Commercial(string , string , int , double );
        ~Commercial();
        void afficher();
        double calculer_Salaire();
};
#endif // COMMERCIAL_H