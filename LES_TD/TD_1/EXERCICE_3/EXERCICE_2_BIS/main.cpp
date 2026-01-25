#include "Rectangle.h"
using namespace std;

int main(){
    Rectangle r(5,10);
    cout<<"Hauteur: "<<r.get_Hauteur()<<endl;
    cout<<"Largeur: "<<r.get_Largeur()<<endl;
    cout<<"Perimetre: "<<r.perimetre()<<endl;
    cout<<"Surface: "<<r.surface()<<endl;
    r.set_Hauteur(2);
    r.set_Largeur(3);
    cout<<"Après modification:"<<endl;
    cout<<"Hauteur: "<<r.get_Hauteur()<<endl;
    cout<<"Largeur: "<<r.get_Largeur()<<endl;
    cout<<"Perimetre: "<<r.perimetre()<<endl;
    cout<<"Surface: "<<r.surface()<<endl;
    cout<<"Affichage du rectangle:"<<endl;
    cout<<r;
    Rectangle r2(7,13);
    if(r == r2){
        cout<<"Les rectangles sont identiques"<<endl;}
    else{
        cout<<"Les rectangles sont différents"<<endl;
    }
}