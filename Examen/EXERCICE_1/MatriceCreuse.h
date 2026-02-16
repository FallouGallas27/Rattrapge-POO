#include <iostream>
using namespace std;

struct Liste{
    int row;
    int colonumn;
    int values;
    struct Liste* suiv;
};

class MatriceCreuse
{
private:
    Liste * tete;
    Liste * courant;
public:
    MatriceCreuse(/* args */);
    ~MatriceCreuse();
    void ajouter_noued(Liste*noeud);
    Liste* teteListe()const;
    void affiche();
    MatriceCreuse(const MatriceCreuse&);
    MatriceCreuse& operator=(const MatriceCreuse&);
};

