#ifndef MANUTENTIONNAIRE_H
#define MANUTENTIONNAIRE_H
#include "Employe.h"
class Manutentionnaire : public Employe
{
    private:
        double nbheures;
    public: 
        Manutentionnaire(string , string , int , double );
        ~Manutentionnaire();
        void afficher();
        double calculer_Salaire();
};
#endif 