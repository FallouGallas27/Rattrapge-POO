#include <iostream>
using namespace std;

struct Liste{
    int elemt;
    struct Liste *suiv;
};
class Ensemble
{
private:
    Liste * debut,*courant;
public:
    Ensemble(/* args */);
    ~Ensemble();
    Ensemble& operator<<(int);
    Ensemble& operator>>(int);
    bool operator%(int);
    Ensemble(const Ensemble&);
    Ensemble& operator=(const Ensemble&);
    void afficher();
    void init();
    bool existe();
    int prochain();
};