#include "Personnel.h"
Personnel::Personnel(int taille)
{
    tab=new Employe*[taille];
    n=0;
}
Personnel::~Personnel()
{
    for(int i=0; i<n; i++)
        delete tab[i];
}
void Personnel::ajouter(Employe* e)
{
    if(n<100)
        tab[n++]=e;
}
void Personnel::afficher_employe()
{
    for(int i=0; i<n; i++)
        tab[i]->afficher();
}
double Personnel::Salaire_moyen()
{
    double s=0;
    for(int i=0; i<n; i++)
        s+=tab[i]->calculer_Salaire();
    return s/n;
}
