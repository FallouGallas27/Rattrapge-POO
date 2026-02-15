#include "Tableau.h"

class Pile : public Tableau
{
private:
    int niveau;
public:
    Pile(int size);
    //~Pile();
    void empiler(int);
    int depiler();
    bool estVide()const;
};
