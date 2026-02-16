#include "Cercle.h"

Cercle::Cercle(Centre c, int r){
    A = c;
    rayon = r;
    cout<<"Appel du const de Cercle "<<this<<endl;
}

Cercle::~Cercle(){
    cout<<"Appel du dest de cercle "<<this<<endl;
}
void Cercle::affiche(){
    cout<<"Centre ("<<A.x<<" , "<<A.y<<") et de rayon "<<rayon<<endl;
}