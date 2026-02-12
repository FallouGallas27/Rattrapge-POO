#include <iostream>

using namespace std;

struct Liste
{
    int elemnt;
    struct Liste *suiv;
};
class Ensemble
{
private:
    int taille;
    Liste * debut;
    Liste *courant;
public:
    Ensemble(/* args */);
    ~Ensemble();
    int cardinal()const;
    void ajouteer(int);
    void supprimer(int);
    bool contient(int)const;
    void afficher();
    Ensemble(const Ensemble&);
    Ensemble& operator=(const Ensemble&);
};
