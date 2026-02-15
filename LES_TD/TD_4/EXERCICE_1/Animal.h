#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>
using namespace std;
class Animal
{
protected:
    string nom;
public:
    Animal(string nom){
        this->nom = nom;
    }
    virtual ~Animal(){
        cout << "Destruction de l'animal: " << nom << endl;
    }
    virtual void exprimer()= 0;
};


#endif
