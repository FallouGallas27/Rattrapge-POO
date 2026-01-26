#include <iostream>
using namespace std;

class str {
    int longueur;
    char* mot;
    public:
    str();
    str(char*);
    str(const str&);
    ~str();
    void affiche();
    str& operator=(const str&);
    bool operator==(const str&);
    str operator+(const str&);
    char& operator[](int );
};