#include "Ensemble.h"

Ensemble ::Ensemble(){
    debut = nullptr;
    courant = nullptr;
    cout<<"Appel du const de ensemble "<<this<<endl;
}
Ensemble::~Ensemble(){
    Liste*tmp = nullptr;
    if (debut)
    {
        Liste * p = debut;
        while (p)
        {
            tmp = p;
            p =  p->suiv;
            delete tmp;
        }
        debut = nullptr;
        courant = nullptr;
    }
    else
    cout<<"Appel du dest de ensemble "<<this<<endl;
}
Ensemble& Ensemble::operator<<(int elt){
    if (*this % elt)
    {
        cout<<"Element "<<elt<<" exitant\n";
    }
    Liste * p = new Liste;
    p->elemt = elt;
    p->suiv = nullptr;
    if (debut == nullptr)
    {
        debut = p;
        courant = debut;
    }
    else{
        courant->suiv = p;
        courant = p;
    }
    return *this;
}
Ensemble& Ensemble::operator>>(int elt){
    if (*this % elt)
    {
        Liste* p = nullptr;
        if (debut->elemt == elt)
        {
            p = debut;
            debut = debut->suiv;
            delete p;
        }
        Liste* d = debut;
        while (d && d->elemt != elt)
        {
            p = d;
            d = d->suiv;
        }
        p->suiv = d->suiv;
        delete d;
    }
    else cout<<"Element "<<elt<<" n'est pas dans l'ensemmble\n";
    return *this;
}
bool Ensemble::operator%(int elt){
    Liste *p = debut;
    while (p != nullptr && p->elemt != elt)
    {
        p = p->suiv;
    }
    if(p){
        return true;
    }
    return false;
}

Ensemble::Ensemble(const Ensemble& e){
    debut = nullptr;
    courant = nullptr;
    if (!e.debut)
    {
        return;
    }
    Liste * p = e.debut;
    debut = new Liste;
    debut->elemt = p->elemt;
    debut->suiv = nullptr;
    Liste *nouv = debut;p=p->suiv;
    while (p)
    {
        Liste* q = new Liste;
        q->elemt = p->elemt;
        q->suiv = nullptr;

        nouv->suiv = q;
        nouv = q;

        p = p->suiv;
    }
    courant = nouv;
}
Ensemble& Ensemble::operator=(const Ensemble& e){
    if (&e == this)
    {
        return *this;
    }
    Liste *tmp = debut;
    Liste *p= nullptr;
    while (tmp)
    {
        p = tmp;
        tmp = tmp->suiv;
        delete p;
    }
    debut = nullptr;
    courant = nullptr;
    debut = new Liste;
    debut->elemt = e.debut->elemt;
    Liste* source = e.debut->suiv;
    Liste* dernier = debut;
    while (source)
    {
        Liste * nouveau = new Liste;
        nouveau->elemt = source->elemt;
        nouveau->suiv = nullptr;
        
        dernier->suiv = nouveau;
        dernier = nouveau;

        source = source->suiv;
    }
    courant = dernier;
    return *this;
}

void Ensemble::afficher(){
    Liste* p = debut;
    while (p)
    {
        cout<<p->elemt <<" ";
        p = p->suiv;
    }
    cout<<endl;
}

void Ensemble::init(){
    if (debut)
    {
        courant = debut;
    }
}

bool Ensemble::existe(){
    return courant;
}

int Ensemble::prochain(){
    int n = courant->elemt;
    courant = courant->suiv;
    return n;
}