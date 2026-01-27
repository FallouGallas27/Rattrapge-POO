#include <iostream>
#include <cstring>
using namespace std;

class Enseignant
{
private:
    char *nom;
    char *prenom;
    char *diplome;
    char **matiere;
public:
    Enseignant(const char*, const char*, const char*);
    ~Enseignant();
    Enseignant(Enseignant&);
    const char* getnom()const;
    const char* getprenom()const;
    const char* getdipolme()const;
    void ajouter_matiere(const char*);
    void affiche();
    Enseignant& operator=(Enseignant&);
};
