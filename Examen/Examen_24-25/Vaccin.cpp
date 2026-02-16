#ifndef VACCIN_H
#define VACCIN_H

#include <iostream>
#include <string>
using namespace std;

const double COND_UNITE = 0.5;
const double PRIX_BASE = 1.5;
const double MAJORATION_HIGHTRCH = 0.5;
const double REDUCTION_DELOC = 0.2;
enum Fabrication {
    Standard,
    Higthtech
};
class Vaccin
{
protected:
    string nom;
    double volume_dose;
    int nb_dose_produire;
    Fabrication fabrication;
public:
    Vaccin(string nom, double volume_dose, int nb_dose_produire, Fabrication fabrication = Standard){
        this->nom = nom;
        this->volume_dose = volume_dose;
        this->nb_dose_produire = nb_dose_produire;
        this->fabrication = fabrication;
    }
    virtual~Vaccin(){};
    virtual void affiche(){
        cout << "Nom: " << nom << endl;
        cout << "Volume/dose: " << volume_dose << endl;
        cout << "Nombre de doses: " << nb_dose_produire << endl;
        cout << "Fabrication: " << (fabrication == Standard ? "Standard" : "Higthtech") << endl;
    }
    double conditionnement()const{
        return volume_dose * nb_dose_produire * COND_UNITE;
    }
    double fabrications()const{
        double prix = volume_dose * nb_dose_produire * PRIX_BASE;
        if (fabrication == Higthtech) {
            prix += prix * MAJORATION_HIGHTRCH;
        }
        return prix;
    }
    virtual double production(){
        return fabrications() + conditionnement();
    }
};

class Delocalise : public Vaccin
{
private:
    bool frontalier;
public:
    Delocalise(string nom, double volume_dose, int nb_dose_produire, Fabrication fabrication, bool frontalier):
        Vaccin(nom, volume_dose, nb_dose_produire, fabrication){
        this->frontalier = frontalier;
        }
    ~Delocalise(){};
    double production(){
        double prix = Vaccin::production();
        if (frontalier) {
            prix -= prix * REDUCTION_DELOC;
        }
        else {
            prix /= 2; // Si non frontalier, le coût de production est divisé par 2
        }
        return prix;
    }
    void affiche(){
        Vaccin::affiche();
        cout << "Frontalier: " << (frontalier ? "Oui" : "Non") << endl;
    }
};

// class Compagnie
// {
// private:
//     string nom;
//     int stock;
//     Vaccin** vaccin;
// public:
//     Compagnie(string n){
//         nom = n;
//         stock = 0;
//         vaccin = nullptr;
//     }
//     ~Compagnie(){
//         delete[] vaccin;
//     }
//     void ajouterVaccin(Vaccin* v){
//         Vaccin** temp = new Vaccin*[stock + 1];
//         for (int i = 0; i < stock; i++) {
//             temp[i] = vaccin[i];
//         }
//         temp[stock] = v;
//         delete[] vaccin;
//         vaccin = temp;
//         stock++;
//     }
//     void affiche(){
//         cout << "Compagnie: " << nom << endl;
//         cout << "Stock: " << stock << endl;
//         for (int i = 0; i < stock; i++) {
//             cout << "Vaccin " << i + 1 << ":" << endl;
//             vaccin[i]->affiche();
//             cout << "Cout de production: " << vaccin[i]->production() << endl;
//             cout << endl;
//         }
//     }
//     double coutTotalProduction(){
//         double total = 0;
//         for (int i = 0; i < stock; i++) {
//             total += vaccin[i]->production();
//         }
//         return total;
//     }
// };

class Compagnie{
    struct Liste{
        Vaccin* vaccin;
        Liste* suiv;
    };
    Liste *tete;
    Liste *courant;
    string nom;
    public:
    Compagnie(string n){
        nom = n;
        tete = nullptr;
        courant = nullptr;
    }
    ~Compagnie(){
        Liste* temp = tete;
        while (temp != nullptr) {
            Liste* p = temp;
            temp = temp->suiv;
            delete p->vaccin;
            delete p;
        }
    }
    void ajouterVaccin(Vaccin* v){
        Liste* nouveau = new Liste;
        nouveau->vaccin = v;
        nouveau->suiv = nullptr;
        if (tete == nullptr) {
            tete = nouveau;
            courant = nouveau;
        } else {
            courant->suiv = nouveau;
            courant = nouveau;
        }
    }
    void affiche(){
        cout << "Compagnie: " << nom << endl;
        Liste* temp = tete;
        int i = 1;
        while (temp != nullptr) {
            cout << "Vaccin " << i++ << ":" << endl;
            temp->vaccin->affiche();
            cout << "Cout de production: " << temp->vaccin->production() << endl;
            cout << endl;
            temp = temp->suiv;
        }
    }
    double coutTotalProduction(){
        double total = 0;
        Liste* temp = tete;
        while (temp != nullptr) {
            total += temp->vaccin->production();
            temp = temp->suiv;
        }
        return total;
    }
};
int main() {
    Compagnie c("ICIBA");
    Vaccin v1 ("Zamiflu", 0.55, 20000, Higthtech);
    Vaccin v2("Triphas", 0.20, 1000);
    Delocalise v3("Deloc", 0.30, 5000, Standard, true);
    Delocalise v4("Deloc2", 0.25, 3000, Higthtech, false);
    c.ajouterVaccin(&v1);
    c.ajouterVaccin(&v2);
    cout<<"Cout de production de v1 et v2 est: " << v1.production() + v2.production() << endl;
    c.ajouterVaccin(&v3);
    c.ajouterVaccin(&v4);
    c.affiche();
    cout << "Cout total de production: " << c.coutTotalProduction() << endl;
}
#endif // VACCIN_H