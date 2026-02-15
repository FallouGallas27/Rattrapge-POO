#include "Animal.h"
#include "Mamifere.h"
#include "Oiseau.h"
#include "Chat.h"
#include "Souris.h"
#include "Canari.h"
int main()
{
    Animal* animaux[4];
    animaux[0] = new Chat("Felix");
    animaux[1] = new Souris("Jerry");
    animaux[2] = new Canari("Tweety");
    animaux[3] = new Chat("Garfield");

    for (int i = 0; i < 4; i++) {
        animaux[i]->exprimer();
    }

    for (int i = 0; i < 4; i++) {
        delete animaux[i];
    }

    return 0;
}