#include "Liste.h"
Liste::Liste(int taille) {
    elements = new Base*[taille];
    nbElements = 0;
}
void Liste::ajouter(Base* elem) {
    if (nbElements < 10) {
        elements[nbElements++] = elem;
    } else {
        cout << "Liste pleine, impossible d'ajouter l'element." << endl;
    }
}
void Liste::afficher() {
    for (int i = 0; i < nbElements; i++) {
        if (elements[i] != nullptr) {
            elements[i]->afficher();
            cout << "Clef: " << elements[i]->clef() << endl;
        }
    }
}
Liste::~Liste() {
    delete[] elements;
}
