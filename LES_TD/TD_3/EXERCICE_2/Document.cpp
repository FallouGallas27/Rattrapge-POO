#include "Document.h"

Document::Document(string titr , int n)
{
    titre = titr;
    nb_mot_cles = n;
    list_mot_cles = new string[n];
    for (int i = 0; i < n; i++)
    {
        list_mot_cles[i] = "";
    }
    cout << "Document cree avec succes" << endl;
}

Document::~Document()
{
    delete [] list_mot_cles;
    cout<<"Objet detruit avec succes"<<endl;
}

void Document::ajouter_mot_cles(string mot){
    int i = 0;
    while (i < nb_mot_cles && list_mot_cles[i] != "")  
    {
        i++;
    }
    if (i < nb_mot_cles)
    {
        list_mot_cles[i] = mot;
    }
    
}
void Document::afficher_Doc(){
    cout<<"Titre : "<<titre<<endl;
    cout<<"La liste des mots cles :\n";
    for (int i = 0; i < nb_mot_cles && list_mot_cles[i] != " "; i++)
    {
        cout<<list_mot_cles[i] <<" ";
    }
    cout<<endl;
}