#include "Cercle.h"

int main() {
    Cercle c1(5.0, 0.0);
    cout<<c1<<endl;
    
    Cercle c2(3.0, 1.0);
    cout<<c2<<endl;
    
    cout << "Aire du cercle 1: " << c1.aire() << endl;
    cout << "Périmètre du cercle 1: " << c1.perimetre() << endl;
    
    if (c1 == c2) {
        cout << "Les cercles sont identiques." << endl;
    } else {
        cout << "Les cercles sont différents." << endl;
    }
    
    return 0;
}