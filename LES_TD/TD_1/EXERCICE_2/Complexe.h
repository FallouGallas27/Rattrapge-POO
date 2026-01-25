#include <iostream>

class Complexe{
    double re, im;
    public:
    Complexe(double,double);
    double get_reelle();
    double get_imaginaire();
    double Module();
    Complexe ajouter(Complexe);
    Complexe multiplier(Complexe);
    void afficher();
    Complexe operator +(Complexe& );
    Complexe operator *(Complexe& );
    friend std::ostream& operator<<(std::ostream&,const Complexe&);
};