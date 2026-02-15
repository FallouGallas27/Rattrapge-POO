#include "Salarie.h"
#include "Admin.h"
#include "Prof.h"

int main(){
    char n1[]= "Ba",p1[] = "Aly",a1[] = "PATS";
    Admin A1(n1, p1, a1);
    A1.affiche();
    char n2[] = "Faye", p2[] = "Mamadou", d2[] = "Docteur";
    Prof P1(n2, p2, d2);
    char m1[] = "TD Algo1 ",m2[] = "Algo 3",m3[] = "POO";
    P1.ajouter_matiere(m1);
    P1.ajouter_matiere(m2);
    P1.ajouter_matiere(m3);
    P1.affiche();
}   