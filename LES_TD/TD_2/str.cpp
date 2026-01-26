#include "str.h"

str::str(){
    cout<<"Appel du const de l'objet "<<this<<endl;
    longueur = 0;
    mot = nullptr;
}

str::str(char* mots){
    int s = 0;
    for (int i = 0; mots[i] != '\0'; i++)
    {
        s += 1;
    }
    longueur = s;
    mot = new char[longueur+1];
    for (int i = 0; i < longueur; i++)
    {
        mot[i] = mots[i];
    }
    mot[longueur] = '\0';
}
str::str(const str& d){
    cout<<"Appel du const de copie de l'objet "<<this<<endl;
    longueur = d.longueur;
    mot = new char[longueur+1];
    for (int i = 0; i < longueur; i++)
    {
        mot[i] = d.mot[i];
    }
    mot[longueur] = '\0';
}

str::~str(){
    cout<<"Appel du destructeur de l'objet "<<this<<endl;
    delete [] mot;
}
void str::affiche(){
    //cout<<"Longeur de la chaine "<<longueur;
    for (int i = 0; i < longueur; i++)
    {
        cout<<mot[i];
    }
    cout<<endl;
}

str& str::operator=(const str& A){
    cout<<"====== Definitions de operateur = "<<endl;
    if (&A == this)
    {
        return *this;
    }
    delete [] mot;
    longueur = A.longueur;
    mot = new char[longueur+1];
    for (int i = 0; i < longueur; i++)
    {
        mot[i] = A.mot[i];
    }
    mot[longueur] = '\0';
    return *this;
}

bool str::operator==(const str& autre){
    if (longueur == autre.longueur)
    {
        for (int i = 0; i < longueur; i++)
        {
            if (mot[i] != autre.mot[i])
            {
                return false;
            }
            
        }
        return true;
    }
    return false;
}

str str::operator+(const str& a){
    str b ; int j = 0;
    b.longueur = longueur + a.longueur;
    b.mot = new char[b.longueur+1];
    for (int i = 0; i < b.longueur; i++)
    {
       if (i < longueur)
       {
        b.mot[i] = mot[i];
       }
       else
        b.mot[i] = a.mot[j++];
    }
    b.mot[b.longueur] = '\0';
    return b;
}

char& str::operator[](int n){
    if (n < 0 || n >= longueur)
    {
        throw out_of_range("Indice hors limites!");
    }
    return mot[n];
}