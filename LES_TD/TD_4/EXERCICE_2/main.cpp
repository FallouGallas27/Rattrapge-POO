#include "Individu.h"
#include "Employe.h"
#include "Entreprise.h"
#include "Liste.h"

int main() {
    // Création dynamique d'un directeur de type Employe (typage dynamique)
    Individu* dir = new Employe("Dupont", "Jean", 1, "Directeur");

    Entreprise ent(101, "TechCorp", dir, 50);

    // Appels polymorphes : la méthode afficher() résout dynamiquement
    dir->afficher();
    ent.afficher();

    delete dir;
    cout << "---------------------------------" << endl;
    Liste liste(10);
    liste.ajouter(new Employe("Mbaye", "Amadou", 2, "Manager"));
    liste.ajouter(new Employe("Fall", "Fatou", 3, "Technicienne"));
    liste.ajouter(new Individu("Sarr", "Aminata", 4));
    //liste.ajouter(new Entreprise(102, "InnoTech", new Individu("Diop", "Moussa", 5), 30));
    cout << "Affichage de la liste d'objets:" << endl;
    liste.afficher();

    return 0;
}