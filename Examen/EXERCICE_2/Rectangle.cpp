#include "Rectangle.h"

Rectangle::Rectangle(int longue, int large){
    longueur = longue;
    largeur = large;
    cout<<"Apple du const de Rectangle"<<endl;
}
Rectangle::~Rectangle(){
    cout<<"Appel du const de Rectangle "<<this<<endl;
}
void Rectangle::affiche(){
    cout<<"Longueur :"<<longueur<<" Largeur :"<<largeur<<endl;
}