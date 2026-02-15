#include "Pile.h"

Pile::Pile(int size):Tableau(size){
    niveau = 0;
}

void Pile::empiler(int index){
    Tableau::operator[](niveau++)= index;
}
bool Pile::estVide()const{
    return niveau == 0;
}

int Pile::depiler(){
    if(estVide()){
        throw out_of_range("Pile vide");
    }
    return Tableau::operator[](--niveau);
}