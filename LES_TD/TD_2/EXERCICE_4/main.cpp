#include "Enseignant.h"

int main(){
    char nom1[] = "Diop";
    char prenom1[] = "Mamadou";
    char diplome1[] = "Doctorat";
    Enseignant e1(nom1, prenom1, diplome1);
    e1.ajouter_matiere("Math");
    e1.ajouter_matiere("Physique");
    e1.affiche();
    cout<<endl;
    char nom2[] = "Sow";
    char prenom2[] = "Awa";
    char diplome2[] = "Master";
    Enseignant e2(nom2, prenom2, diplome2);
    e2.ajouter_matiere("Informatique");
    e2.affiche();
    cout<<endl;
    e2 = e1;
    cout<<"Après l'affectation, les informations de e2 sont: \n";
    e2.affiche();
    cout<<endl;
    Enseignant e3 = e1;
    cout<<"Les informations de e3 (copie de e1) sont: \n";
    e3.affiche();
    return 0;
}