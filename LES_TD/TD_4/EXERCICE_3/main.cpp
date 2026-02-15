#include "Employe.h"
#include "Commercial.h"
#include "Manutentionnaire.h"
#include "Personnel.h"
int main()
{
    Personnel p(100);
    Commercial c("Dupont", "Jean", 1000, 5);
    Manutentionnaire m("Durand", "Pierre", 20, 15);
    p.ajouter(&c);
    p.ajouter(&m);
    p.afficher_employe();
    cout << "Salaire moyen: " << p.Salaire_moyen() << endl;
}