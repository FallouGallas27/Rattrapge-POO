#include <iostream>
using namespace std;
#ifndef CERCLE_H
#define CERCLE_H
class Cercle {
    private:
        double rayon;
        double centre;
    public:
        Cercle(double r, double c);
        double getRayon();
        double getCentre();
        void setRayon(double r);
        void setCentre(double c);
        double aire();
        double perimetre();
        bool operator==(const Cercle& autre);
        friend ostream& operator<<(ostream& os,  Cercle& c);
};
#endif