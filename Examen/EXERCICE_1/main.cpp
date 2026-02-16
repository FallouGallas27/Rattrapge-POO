#include "MatriceCreuse.h"

int main(){
    int **matrice;
    int ligne = 4;
    int colomn = 5;
    matrice = new int*[ligne];
    for (int i = 0; i < ligne; i++)
    {
        matrice[i] = new int[colomn];
    }
    matrice[0][0] = 0; matrice[0][1] = 0; matrice[0][2] = 3; matrice[0][3] = 0; matrice[0][4] = 4; 
    matrice[1][0] = 0; matrice[1][1] = 0; matrice[1][2] = 5; matrice[1][3] = 7; matrice[1][4] = 0; 
    matrice[2][0] = 0; matrice[2][1] = 0; matrice[2][2] = 0; matrice[2][3] = 0; matrice[2][4] = 0; 
    matrice[3][0] = 0; matrice[3][1] = 2; matrice[3][2] = 6; matrice[3][3] = 0; matrice[3][4] = 0; 
    
    MatriceCreuse M;
    for (int i = 0; i < ligne; i++)
    {
        for (int j = 0; j < colomn; j++)
        {
            if (matrice[i][j] != 0)
            {
                Liste * neoud = new Liste;
                neoud->row = i;
                neoud->colonumn = j;
                neoud->values = matrice[i][j];
                M.ajouter_noued(neoud);
            }
            
        }
        
    }

    cout<<"Le tete de la liste"<<endl;
    Liste * p = M.teteListe();
    cout<<p->row<<" " <<p->colonumn<<" "<<p->values<<endl;
    cout<<"Affichage de la liste"<<endl;
    M.affiche();
    MatriceCreuse m1(M);
    cout<<"la copie m1 = M"<<endl;
    m1.affiche();

    cout<<"Test de l'operateur d'affectation"<<endl;
    MatriceCreuse m2;
    m2 = M;
    cout<<"m2 apres affectation:"<<endl;
    m2.affiche();

    cout<<"Modifier premier noeud de M (si existe)"<<endl;
    Liste* pm = M.teteListe();
    if (pm) pm->values = 999;
    cout<<"M apres modification:"<<endl;
    M.affiche();
    cout<<"m2 apres modification de M (doit rester identique si copie profonde):"<<endl;
    m2.affiche();

    
    for (int i = 0; i < ligne; i++)
    {
        delete [] matrice[i];
    }
    delete [] matrice;

    return 0;
}