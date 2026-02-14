#include "Site.h"
int main()
{
    Site s("MonSite");
    Document d1("Doc1",3);
    Document d2("Doc2",2);
    Document d3("Doc3",4);
    d1.ajouter_mot_cles("POO");
    d1.ajouter_mot_cles("C++");
    d1.ajouter_mot_cles("TD");
    d2.ajouter_mot_cles("POO");
    d2.ajouter_mot_cles("C++");
    d3.ajouter_mot_cles("POO");
    d3.ajouter_mot_cles("Framework");
    d3.ajouter_mot_cles("Java");
    d3.ajouter_mot_cles("Python");
    s.ajouter_document(&d1);
    s.ajouter_document(&d2);
    s.ajouter_document(&d3);
    cout<<"Le site avant la suppression du document 2 : "<<endl;
    s.afficher();
    s.supprimer_document(&d2);
    cout<<"Le site apres la suppression du document 2 : "<<endl;
    s.afficher();
    Site s2("MonSite2");
    s2.copier_document(s);
    cout<<"Le site 2 apres la copie : "<<endl;
    s2.afficher();
    if (s2.rechercher_document(d2.getTitre()))
    {
        cout<<"Le document "<<d2.getTitre()<<" existe dans le site 2"<<endl;
    }
    else
    {
        cout<<"Le document "<<d2.getTitre()<<" n'existe pas dans le site 2"<<endl;
    }
    
    return 0;
}