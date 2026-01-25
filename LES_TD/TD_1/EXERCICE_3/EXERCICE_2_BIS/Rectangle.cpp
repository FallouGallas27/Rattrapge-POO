#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(unsigned int h, unsigned int l) {
    hauteur = h;
    largeur = l;
    cout<<"Appel du const de rectangle "<<endl;

}
unsigned int  Rectangle::get_Largeur()const{
    return largeur;
}
unsigned int Rectangle::get_Hauteur()const{
    return hauteur;
}

unsigned int Rectangle::perimetre()const{
    return 2*(hauteur + largeur);
}
unsigned int Rectangle::surface()const{
    return hauteur * largeur;
}
void Rectangle::set_Hauteur(unsigned int h){
    hauteur += h;
}
void Rectangle::set_Largeur(unsigned int l){
    largeur += l;
}
bool Rectangle::operator==(const Rectangle& r)const{
    if (largeur == r.largeur && hauteur == r.hauteur)
    {
        return true;
    }
    return false;
}
ostream& operator<<(ostream& os, const Rectangle& r){
    // Haut du rectangle
    for (int i = 0; i < r.get_Largeur(); i++)
    {
        os<<"*";
    }
    os<<endl;
    
    // Milieu du rectangle
    for (int i = 0; i < r.get_Hauteur() - 2; i++)
    {
        os<<"*";
        for (int j = 0; j < r.get_Largeur() - 2; j++)
        {
            os<<" ";
        }
        os<<"*"<<endl;
    }
    
    // Bas du rectangle
    for (int i = 0; i < r.get_Largeur(); i++)
    {
        os<<"*";
    }
    os<<endl;

    return os;
}
    