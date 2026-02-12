#include <iostream>
using namespace std;

class Pile{
    private:
    int taille;
    int* tab;
    int court;
    public:
    Pile(int);
    ~Pile();
    void empiler(int);
    void depiler();
    int sommet();
    bool estVide();
    void afficher();
};