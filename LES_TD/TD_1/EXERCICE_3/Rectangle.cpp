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
    hauteur = h;
}
void Rectangle::set_Largeur(unsigned int l){
    largeur = l;
}
bool Rectangle::compare(const Rectangle r){
    if (largeur == r.largeur && hauteur == r.hauteur)
    {
        return true;
    }
    return false;
}

void Rectangle::affiche(){
    // Haut du rectangle
    for (int i = 0; i < largeur; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    
    // Milieu du rectangle
    for (int i = 0; i < hauteur - 2; i++)
    {
        cout<<"*";
        for (int j = 0; j < largeur - 2; j++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    
    // Bas du rectangle
    for (int i = 0; i < largeur; i++)
    {
        cout<<"*";
    }
    cout<<endl;
}