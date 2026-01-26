#include "Matrice.h"

Matrice::Matrice(int l, int c){
    ligne = l;
    colone = c;
    matrice = new int*[l];
    for (int i = 0; i < ligne; i++)
    {
        matrice[i] = new int[colone];
    }
    cout<<"Appel du const de matrice"<<this<<endl;
}
Matrice::~Matrice(){
    for (int i = 0; i < ligne; i++)
    {
        delete matrice[i];
    }
    delete[] matrice;
    cout<<"Appel du dest de matrice "<<this<<endl;
    
}
int Matrice::getElements(int l, int c){
    if (l <= 0 || l > ligne && c <= 0 || c >colone)
    {
        cout<<"Attention !!! Depassemnt d'indice"<<endl;
    }
    return matrice[l][c];
}
void Matrice::setElements(int l, int c, int element){
     if (l <= 0 || l > ligne && c <= 0 || c >colone)
    {
        cout<<"Attention !!! Depassemnt d'indice"<<endl;
    }
    matrice[l][c]= element;
}
Matrice Matrice::produit(Matrice& m){
    Matrice a(0,0);
    if (colone == m.ligne)
    {
        cout<<"Multiplication possible"<<endl;
        a.ligne = ligne;
        a.colone = m.colone;
        a.matrice = new int*[a.ligne];
        for (int i = 0; i < a.ligne; i++)
        {
            a.matrice[i] = new int[a.colone];
            for (int j = 0; j < a.colone; j++)
            {
                a.matrice[i][j] = 0;
            }
        }
        for (int i = 0; i < ligne; i++)
        {
            for (int j = 0; j < m.colone; j++)
            {
                for (int k = 0; k < colone; k++)
                {
                    a.matrice[i][j] += matrice[i][k]*m.matrice[k][j];
                }
                
            }
            
        }
    }
    return a;
}

void Matrice::afficherMatrice(){
    for (int i = 0; i < ligne; i++)
    {
        for (int j = 0; j < colone; j++)
        {
            cout<<matrice[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
Matrice::Matrice(Matrice& b){
    Matrice a(0,0);
    ligne = b.ligne;
    colone = b.colone;
    matrice = new int*[ligne];
    for (int i = 0; i < ligne; i++)
    {
        matrice[i] = new int[colone];
        for(int j = 0; j < colone; j++)
            matrice[i][j] = 0;
    }
    for (int i = 0; i < ligne; i++)
    {
        for (int  j = 0; j < colone; j++)
        {
            matrice[i][j] = b.matrice[i][j];
        }
        
    }
    cout<<"Appel du const de recopie\n";
}
Matrice& Matrice::operator=(Matrice& m){
    if (&m == this)
    {
        return *this;
    }
    for (int i = 0; i < ligne; i++)
    {
        delete matrice[i];
    }
    delete[] matrice;
    ligne = m.ligne;
    colone = m.colone;
    matrice = new int*[ligne];
    for (int i = 0; i < ligne; i++)
    {
        matrice[i] = new int[colone];
        for (int j = 0; j < colone; j++)
        {
            matrice[i][j] = 0;
        }
        
    }
    for (int i = 0; i < ligne; i++)
    {
        for (int j = 0; j < colone; j++)
        {
            matrice[i][j] = m.matrice[i][j];
        }
        
    }
    return *this;  
    
}