#include "Pile.h"

int main(){
    Pile p1(5);
    p1.empiler(1);
    p1.empiler(2);
    p1.empiler(3);
    p1.empiler(4);
    Pile p2(3);
    cout<<"Les elements de la pile"<<endl;
    while (!p1.estVide())
    {
        cout<<p1.depiler()<<" ";
    }
    
}