#ifndef EMPLOYE_H
#define EMPLOYE_H
#include "Individu.h"
class Employe : public Individu
{
    private:
        string competence;
    public:
        Employe(string nom, string prenom, int clef, string poste);
        void afficher() ;
        int clef();
        ~Employe() {}
};
#endif // EMPLOYE_H