#include <math.h>
#include "Cercle.h"

Cercle::Cercle(double r, double c) : rayon(r), centre(c) {}
double Cercle::getRayon() {
    return rayon;
}
double Cercle::getCentre() {
    return centre;
}
void Cercle::setRayon(double r) {
    rayon = r;
}
void Cercle::setCentre(double c) {
    centre = c;
}
double Cercle::aire() {
    return 3.14159 * rayon * rayon;
}
double Cercle::perimetre() {
    return 2 * 3.14159 * rayon;
}
bool Cercle::compare(const Cercle& autre) {
    return rayon == autre.rayon && centre == autre.centre;
}
void Cercle::afficher() {
    cout << "Cercle: rayon = " << rayon << ", centre = " << centre << endl;
    
    int r = (int)rayon;
    int c = (int)centre;
    
    // Dessiner le cercle en ASCII
    for (int y = -r; y <= r; y++) {
        for (int x = -r; x <= r; x++) {
            double dist = sqrt(x * x + y * y);
            if (dist >= r - 0.5 && dist <= r + 0.5) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
    