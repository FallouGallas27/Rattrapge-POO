#include <iostream>
using namespace std;

class Rectangle{
    unsigned int hauteur;
    unsigned int largeur;
    public:
    Rectangle (unsigned int ,unsigned int);
    unsigned int get_Largeur() const;
    unsigned int get_Hauteur() const;
    unsigned int perimetre()const;
    unsigned surface()const;
    void set_Largeur(unsigned int);
    void set_Hauteur(unsigned int);
    bool operator==(const Rectangle&) const;
    friend ostream& operator<<(ostream&, const Rectangle&);
};