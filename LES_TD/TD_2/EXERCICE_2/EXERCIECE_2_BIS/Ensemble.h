#include <iostream>
using namespace std;

class Ensemble {
    int N;
    int nb_elements;
    int *elements;
    public:
    Ensemble(int size);
    int cardinal()const;
    ~Ensemble();
    Ensemble& operator<<(int);
    Ensemble& operator>>(int);
    bool operator%(int);
    void affichage();
    void init();
    bool existe();
    int prochain();
};