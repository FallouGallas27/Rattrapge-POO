#include "Liste.h"

Liste::Liste(){
    debut = nullptr;
    courant = nullptr;
    cout<<"Appel du const de Liste "<<this<<endl;
}

Liste::~Liste(){
    if (debut)
    {
        Neoud* p = debut;
        while (p)
        {
            Neoud* tmp = p;
            p = p->suiv;
            delete tmp;
        }
        debut = nullptr;
        courant = nullptr;
    }
    cout<<"Appel du dest de Liste "<<this<<endl;
}
void Liste::ajouter(Forme * fop){
    Neoud* maillon = new Neoud;
    maillon->forme = fop;
    maillon->suiv =nullptr;
    if (!debut)
    {
        debut = maillon;
        courant = maillon;
    }
    else{
        courant->suiv = maillon;
        courant = maillon;
    }
    
}

void Liste::init(){
    if (debut)
    {
        courant = debut;
    }
    else cout<<"Pas d'element dans la liste"<<endl;
}
bool Liste::existe(){
    return courant;
}

Forme* Liste::prochain(){
    Neoud* p = courant;
    courant = courant->suiv;
    return p->forme;
}

void Liste::affiche(){
    init();
    while (existe())
    {
        prochain()->affiche();
    }
    
}