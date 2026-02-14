#include <iostream>
#include <string>
using namespace std;

class Document
{
private:
    string titre;
    string *list_mot_cles;
    int nb_mot_cles;
public:
    Document(string,int );
    ~Document();
    void afficher_Doc();
    void ajouter_mot_cles(string);
    string getTitre(){
        return titre;
    }
    int getNbMotCles(){
        return nb_mot_cles;
    }
    string* getListMotCles(){
        return list_mot_cles;
    }
};
