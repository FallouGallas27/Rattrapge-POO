#include "MatriceCreuse.h"

MatriceCreuse::MatriceCreuse(){
    cout<<"Appel du const de creuse "<<this <<endl;
    tete = nullptr;
    courant = nullptr;
}

MatriceCreuse::~MatriceCreuse(){
    Liste *p = tete;
    while (p)
    {
        Liste* tmp = p;
        p = p->suiv;
        delete tmp;
    }
    tete = nullptr;
    courant = nullptr;
    cout<<"Appel du dest de Creuse "<<this<<endl;
}
void MatriceCreuse::ajouter_noued(Liste* neoud){
    if (!neoud) return;
    neoud->suiv = nullptr;
    if (!tete)
    {
        tete = neoud;
        courant = neoud;
    }
    else{
        courant->suiv = neoud;
        courant = neoud;
    }
    
}
Liste* MatriceCreuse::teteListe()const{
    return tete;
}
void MatriceCreuse::affiche(){
    if (tete)
    {
        Liste* p = tete;
        while (p)
        {
            cout<<p->row<<" "<<p->colonumn<<" "<<p->values<<" --> ";
            p = p->suiv;
        }
        cout<<endl;
    }
    
}
MatriceCreuse::MatriceCreuse(const MatriceCreuse& m){
    tete = nullptr;
    courant = nullptr;
    
    if (m.tete)
    {
        tete = new Liste;
        tete->colonumn = m.tete->colonumn;
        tete->row = m.tete->row;
        tete->values = m.tete->values;
        tete->suiv = nullptr;
        Liste *dernier = tete;
        Liste* source = m.tete->suiv;
        while (source)
        {
            Liste* neoud = new Liste;
            neoud->colonumn = source->colonumn;
            neoud->row = source->row;
            neoud->values = source->values;

            dernier->suiv = neoud;
            dernier = neoud;

            source = source->suiv;
        }
        

    }
    cout<<"Le const de recopis "<<endl;
}
MatriceCreuse& MatriceCreuse::operator=(const MatriceCreuse& m){
    if (this == &m)
    {
        return *this;
    }
    if (tete)
    {
        Liste* p = tete;
        while (p)
        {
            Liste* tmp = p;
            p = p->suiv;
            delete tmp;
        }
        
    }
    tete = nullptr;
    courant = nullptr;
    if (m.tete)
    {   
        tete = new Liste;
        tete->colonumn = m.tete->colonumn;
        tete->row = m.tete->row;
        tete->values = m.tete->values;
        tete->suiv  = m.tete->suiv;
        Liste *source = m.tete->suiv;
        Liste *dernier = tete;
        while (source)
        {
            Liste * p = new Liste;
            p->colonumn = source->colonumn;
            p->row = source->row;
            p->values = source->values;
            p->suiv = nullptr;

            dernier->suiv = p;
            dernier = p;

            source = source->suiv;
        }
        courant = dernier;
    }
    return *this;
}