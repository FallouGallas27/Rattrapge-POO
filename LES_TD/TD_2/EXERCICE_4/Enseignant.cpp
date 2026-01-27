#include "Enseignant.h"

Enseignant::Enseignant(const char* n, const char* p, const char* d){
    nom = new char[strlen(n) + 1];
    strcpy(nom, n);
    prenom = new char[strlen(p) + 1];
    strcpy(prenom, p);
    diplome = new char[strlen(d) + 1];
    strcpy(diplome, d);
    matiere = new char*[5];
    for (int  i = 0; i < 5; i++)
    {
        matiere[i] = NULL;
    }
    cout<<"Appel du const de Enseignant "<<this<<endl;
}
Enseignant::~Enseignant(){
    cout<<"Appel du dest de Enseignant "<<this<<endl;
    delete[] nom;
    delete[] prenom;
    delete[] diplome;
    for (int i = 0; i < 5; i++)
    {
        if (matiere[i] != NULL)
            delete[] matiere[i];
    }
    delete[] matiere;
}

const char* Enseignant::getdipolme()const{
    return diplome;
}

const char* Enseignant::getnom()const{
    return nom;
}

const char* Enseignant::getprenom()const{
    return prenom;
}
void Enseignant::ajouter_matiere(const char* mat){
    int i = 0;
    while (i < 5 && matiere[i] != NULL)
    {
        i++;
    }
    if (i < 5)
    {
        matiere[i] = new char[strlen(mat) + 1];
        strcpy(matiere[i], mat);
    }
    else cout<<"Il enseigne 5 matiere \n";
    
}
void Enseignant::affiche(){
    cout<<"Nom: "<<nom<<", Prenom: "<<prenom<<", Diplome: "<<diplome<<", Matieres: ";
    for (int i = 0; i < 5; i++)
    {
        if (matiere[i] != NULL && strcmp(matiere[i], "")!= 0)
            cout<<matiere[i]<<" ";
    }
    cout<<endl;
}
Enseignant::Enseignant(Enseignant &E){
    nom = new char[strlen(E.nom) + 1];
    strcpy(nom, E.nom);
    prenom = new char[strlen(E.prenom) + 1];
    strcpy(prenom, E.prenom);
    diplome = new char[strlen(E.diplome) + 1];
    strcpy(diplome, E.diplome);
    matiere = new char*[5];
    for (int i = 0; i < 5; i++)
    {
        if (E.matiere[i] != NULL)
        {
            matiere[i] = new char[strlen(E.matiere[i]) + 1];
            strcpy(matiere[i], E.matiere[i]);
        }
        else
            matiere[i] = NULL;
    }
    cout<<"Appel du const de copie de Enseignant "<<this<<endl;
}
Enseignant& Enseignant::operator=(Enseignant& E){
    if (&E == this)
    {
        return *this;
    }
    delete[] nom;
    delete[] prenom;
    delete[] diplome;
    for (int i = 0; i < 5; i++)
    {
        if (matiere[i] != NULL)
            delete[] matiere[i];
    }
    delete[] matiere;
    nom = new char[strlen(E.nom) + 1];
    strcpy(nom, E.nom);
    prenom = new char[strlen(E.prenom) + 1];
    strcpy(prenom, E.prenom);
    diplome = new char[strlen(E.diplome) + 1];
    strcpy(diplome, E.diplome);
    matiere = new char*[5];
    for (int i = 0; i < 5; i++)
    {
        if (E.matiere[i] != NULL)
        {
            matiere[i] = new char[strlen(E.matiere[i]) + 1];
            strcpy(matiere[i], E.matiere[i]);
        }
        else
            matiere[i] = NULL;
    }
    return *this;
}