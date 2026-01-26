#include <iostream>
using namespace std;

class Matrice
{
private:
    int ligne;
    int colone;
    int **matrice;
public:
    Matrice(int l, int c);
    ~Matrice();
    int getElements(int, int);
    void setElements(int, int, int);
    void afficherMatrice();
    Matrice produit(Matrice &m);
    Matrice(Matrice&);
    Matrice& operator=(Matrice&);
};
