#include "Prof.h"

Prof::Prof(char* n, char* p, char* d): Salarie(n,p){
    diplome = new char[strlen(d) + 1];
    strcpy(diplome, d);
    matiere = new char*[10];
    for (int i = 0; i < 10; i++)
    {
        matiere[i] = NULL;
    }
    
}
Prof::~Prof(){
    delete diplome;
    for (int i = 0; i < 10; i++)
    {
        delete [] matiere[i];
    }
    
}
char* Prof::getDiplome()const{
    return diplome;
}

char* Prof::GetIemamtiere(int n){
    if (n < 0 || n>=10)
    {
        cout<<"Attention erreur d'indice\n";
        exit(1);
    }
    return matiere[n];
}

void Prof::ajouter_matiere(char* mat){
    for (int i = 0; i < 10; i++)
    {
        if (matiere[i] == NULL)
        {
            matiere[i] = new char[strlen(mat) + 1];
            strcpy(matiere[i], mat);
            break;
        }
        
    }
}

void Prof::affiche(){
    Salarie::affiche();
    cout<<"Diplome : "<<diplome<<endl;
    cout<<"La liste des matieres enseignees"<<endl;
    for (int i = 0; i < 10; i++)
    {
        if (matiere[i])
        {
            cout<<matiere[i]<<" ";
        }
        
    }
    cout<<endl;
}