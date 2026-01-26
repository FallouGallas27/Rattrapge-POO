#include <iostream>
using namespace std;

class Ensemble {
    int N;
    int nb_elements,courant;
    int *elements;
    public:
    Ensemble(int size);
    int cardinal()const;
    void ajouter(int);
    void supprimer(int);
    bool contient(int );
    ~Ensemble();
    void afficher();
    Ensemble(const Ensemble &);
    void init();
    bool existe();
    int prochain();
};