#include "Ensemble.h"

Ensemble ::Ensemble(){
    debut = nullptr;
    courant = nullptr;
    taille = 0;
    cout<<"Appel du const d'ensemble"<<this<<endl;
}
void Ensemble::ajouteer(int elmt){
    if (contient(elmt))
    {
        cout<<"Element "<<elmt<<" est dans l'ensemble\n";
    }
    else{
        Liste *p = new Liste;
        p->elemnt = elmt;
        p->suiv = nullptr;
        if (debut == nullptr)
        {
            debut = p;
            taille++;
        }
        else
        {
            courant = debut;
            while (courant->suiv)
            {
                courant = courant->suiv;
            }
            courant->suiv = p;
            taille++;
        }
    }
    
}
void Ensemble::supprimer(int elmt){
    if (contient(elmt))
    {
        if (debut-> elemnt == elmt)
        {
            courant = debut;
            debut = debut->suiv;
            delete courant;
        }
        else{
        Liste *p = nullptr;
        courant = debut;
        while (courant && courant->elemnt != elmt )
        {   
            p = courant;
            courant = courant->suiv;
        }
        p->suiv = courant->suiv;
        delete courant;
        taille--;}
    }
    else 
    cout<<"L'element n'est pas dans l'ensemble"<<endl;
}

void Ensemble::afficher(){
    courant = debut;
    while (courant)
    {
        cout<<courant->elemnt <<" ";
        courant = courant->suiv;
    }
    cout<<endl;
}

bool Ensemble::contient(int elmt)const{
    Liste *p =debut;
    if (p)
    {
        while (p && p->elemnt != elmt)
        {
            p = p->suiv;
        }
        if (p)
        {
            return true;
        }
        else return false;
        
    }
    else
    return false;
}
Ensemble::~Ensemble(){
    Liste* p = debut;
    while (p)
    {
        Liste* tmp = p;
        p = p->suiv;
        delete tmp;
    }
    debut = nullptr;
    courant = nullptr;
    taille = 0;
    cout<<"Appel du dest de ensemble "<<this<<endl;
}

Ensemble::Ensemble(const Ensemble& E){
    debut = nullptr;
    courant = nullptr;
    taille = 0;
    if (!E.debut) return;

    Liste* source = E.debut;
    Liste* dernier = nullptr;
    while (source)
    {
        Liste* node = new Liste;
        node->elemnt = source->elemnt;
        node->suiv = nullptr;
        if (!debut)
            debut = node;
        else
            dernier->suiv = node;
        dernier = node;
        source = source->suiv;
        taille++;
    }
    courant = debut;
}

Ensemble& Ensemble::operator=(const Ensemble& E){
    if (&E == this) return *this;

    // libérer la liste courante
    Liste* p = debut;
    while (p)
    {
        Liste* tmp = p;
        p = p->suiv;
        delete tmp;
    }

    // copier E
    debut = nullptr;
    courant = nullptr;
    taille = 0;
    if (!E.debut) return *this;

    Liste* source = E.debut;
    Liste* dernier = nullptr;
    while (source)
    {
        Liste* node = new Liste;
        node->elemnt = source->elemnt;
        node->suiv = nullptr;
        if (!debut)
            debut = node;
        else
            dernier->suiv = node;
        dernier = node;
        source = source->suiv;
        taille++;
    }
    courant = debut;
    return *this;
}