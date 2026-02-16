#include "Dictionnaire.h"

int main()
{
    Dictionnaire d(10,3);
    Element* e = new Element;
    e->cle = new char[10];
    strcpy(e->cle,"chien");
    e->valeur = new char*[3];
    for (int i = 0; i < 3; i++)
    {
        e->valeur[i] = nullptr;
    }
    e->valeur[0] = new char[10];
    strcpy(e->valeur[0],"canin");
    e->valeur[1] = new char[10];
    strcpy(e->valeur[1],"toutou");
    e->valeur[2] = new char[10];
    strcpy(e->valeur[2],"mammifere");
    
    Element *e2 = new Element;
    e2->cle = new char[10];
    strcpy(e2->cle,"chat");
    e2->valeur = new char*[3];
    for (int i = 0; i < 3; i++)
    {
        e2->valeur[i] = nullptr;
    }
    e2->valeur[0] = new char[10];
    strcpy(e2->valeur[0],"felin");
    e2->valeur[1] = new char[10];
    strcpy(e2->valeur[1],"mammifere");
    e2->valeur[2] = new char[10];
    strcpy(e2->valeur[2],"minou");
    d.insertion(e);
    d.insertion(e2);
    d.affiche();
    char** res = d.recherche(e->cle);
    if (res != nullptr)
    {
        for (int i = 0; i < 3; i++)
        {
            if (res[i])
            {
                cout<<"Synonyme "<<i<<" : "<<res[i]<<endl;
            }
            
        }
    }
    
    cout<<"Suppression de chien"<<endl;
    d.supprimer(e->cle);
    d.affiche();
    Dictionnaire d2 = d;
    cout<<"Affichage de d2"<<endl;
    d2.affiche();
    return 0;
}