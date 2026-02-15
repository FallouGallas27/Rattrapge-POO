#include <iostream>
using namespace std;

class Tableau
{
private:
    int *tab;
    int max;
public:
    Tableau(int size){
        max = size;
        tab = new int[max];
    }
    ~Tableau(){
        delete[] tab;
    }
    int& operator[](int index){
        if(index < 0 || index >= max){
            throw out_of_range("Index out of range");
        }
        return tab[index];
    }

};

