#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Forme.h"
class Rectangle : public Forme{
    private:
        double longueur;
        double largeur;
    public:
        Rectangle(int ,  int);
        ~Rectangle();
        void affiche(); 
};
#endif 