#include "Employe.h"
Employe::Employe(string n, string p, int c, string post) : Individu(n, p, c) {
    competence = post;
    cout << "Constructeur Employe: " << n << " " << p << ", Poste: " << post << endl;
}
void Employe::afficher() {
    Individu::afficher();
    cout << "Competence: " << competence << endl;
}
int Employe::clef() {
    return Individu::clef();
}