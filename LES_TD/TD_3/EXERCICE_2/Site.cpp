#include "Site.h"

Site::Site(string nom)
{
    nom_site = nom;
    tete = nullptr;
    courant = nullptr;
    cout<<"Appel du const de site"<<endl;
}

Site::~Site()
{
    if (tete)
    {
        Liste * p = tete;
        while (p)
        {
            Liste* tmp = p;
            p = p->suiv;
            delete tmp;
        }
        tete = nullptr;
        courant = nullptr;
    }
    
    cout<<"Apppel du dest de site"<<endl;
}
void Site::ajouter_document(Document *d){
    Liste *nouveau = new Liste;
    nouveau->debut = d;
    nouveau->suiv = nullptr; 
    if (!tete)
    {
        tete = nouveau;
        courant = nouveau;
    }
    else{
        courant->suiv  = nouveau;
        courant = nouveau;
    }
    
}
void Site::supprimer_document(Document* d){
    if (tete)
    {
        Liste* court = tete;
        Liste* precedent = nullptr;
        while (court && court->debut->getTitre() != d->getTitre()) 
        {
            precedent = court;
            court = court->suiv;
        }
        if (court)
        {
            precedent->suiv = court->suiv;
            delete court;
        }
        
    }
    else cout<<"Pas de document dans le site!"<<endl;
}
void Site::afficher(){
    cout<<"Nom du site : "<<nom_site<<endl;
    if (tete)
    {
        cout<<"Les document du site sont "<<endl;
        Liste *court = tete;
        while (court)
        {
            court->debut->afficher_Doc();
            court = court->suiv;
        }
        
    }
    else
    cout<<"Pas de documet dans le site"<<endl;
}
void Site::copier_document(Site &s){
    if (s.tete)
    {
        
        Liste* court = s.tete;
        while (court)
        {
            Document* doc = new Document(court->debut->getTitre(), court->debut->getNbMotCles());
            string* mots = court->debut->getListMotCles();
            for (int i = 0; i < court->debut->getNbMotCles(); i++)
            {
                if (mots[i] != "")
                {
                    doc->ajouter_mot_cles(mots[i]);
                }
            }
            this->ajouter_document(doc);
            court = court->suiv;
        }
        
    }
    else cout<<"Pas de document dans le site source!"<<endl;
}
bool Site::rechercher_document(string titre){
    if (tete)
    {
        Liste* court = tete;
        while (court)
        {
            if (court->debut->getTitre() == titre)
            {
                return true;
            }
            court = court->suiv;
        }
        
    }
    return false;
}