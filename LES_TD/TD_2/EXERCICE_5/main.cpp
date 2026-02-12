#include "Pile.h"

int main(){
    Pile p(5);
    
    cout << "Test de la pile LIFO" << endl;
    cout << "=====================" << endl;
    
    p.afficher();
    
    cout << "\nAjout d'elements (1, 2, 3, 4, 5):" << endl;
    p.empiler(1);
    p.empiler(2);
    p.empiler(3);
    p.empiler(4);
    p.empiler(5);
    p.afficher();
    
    cout << "\nSommet de la pile: " << p.sommet() << endl;
    
    cout << "\nRetrait des elements:" << endl;
    while(!p.estVide()){
        cout << "Retrait de: " << p.sommet() << endl;
        p.depiler();
    }
    p.afficher();
    
    return 0;
}
