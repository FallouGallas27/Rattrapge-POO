#include "Rectangle.h"
#include "Cercle.h"
#include "Liste.h"

int main(){
    Centre a,b;
    a.x = 4; b.x = 8;
    a.y = 2; b.y = 5;

    Rectangle Rec1(5 , 3);
    Rectangle Rec2(7 , 5);
    Cercle C1(a, 5);
    Cercle C2(b, 6);
    Liste liste;
    liste.ajouter(&Rec1);
    liste.ajouter(&Rec2);
    liste.ajouter(&C1);
    liste.ajouter(&C2);
    cout<<"Affichage de la liste\n";
    liste.affiche();
}