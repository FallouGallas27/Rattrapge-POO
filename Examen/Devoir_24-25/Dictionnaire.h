#include <iostream>
#include <cstring>
using namespace std;


    struct Element
    {
        char* cle;
        char** valeur;
    };
class Dictionnaire
{
private:
    int nbml;
    int nbmc;
    Element ** dict;
    
public:
    Dictionnaire(int ,int);
    ~Dictionnaire();
    void insertion(Element*);
    void supprimer(char*);
    char** recherche(char*);
    int hachage(char* cl){
        int somme = 0;
        for (int i = 0; i < strlen(cl)+1; i++)
        {
            somme+= cl[i];
        }
        return somme%nbml;
    }
    void affiche();
    Dictionnaire(const Dictionnaire& d) ;
    Dictionnaire& operator=(const Dictionnaire& d) ;
};

