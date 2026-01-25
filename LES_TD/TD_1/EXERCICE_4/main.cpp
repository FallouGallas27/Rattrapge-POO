#include "Cercle.h"

int main() {
    Cercle c1(5.0, 0.0);
    c1.afficher();
    
    Cercle c2(3.0, 1.0);
    c2.afficher();
    
    cout << "Aire du cercle 1: " << c1.aire() << endl;
    cout << "Périmètre du cercle 1: " << c1.perimetre() << endl;
    
    if (c1.compare(c2)) {
        cout << "Les cercles sont identiques." << endl;
    } else {
        cout << "Les cercles sont différents." << endl;
    }
    
    return 0;
}