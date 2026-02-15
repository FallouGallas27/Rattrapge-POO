#include <iostream>
#include <string>
using namespace std;
#include "Document.h"

class Site
{
private:
    string nom_site;
    int taille;
    Document **doc;
public:
    Site(string);
    ~Site();
    void afficher();
    void ajouter_document(Document *d);
    void supprimer_document(Document *d);
    void copier_document(Site &s);
    bool rechercher_document(string titre);
};
