#ifndef VECT_H
#define VECT_H
#include <iostream>
using namespace std;
class Vect
{
private:
    int n;
    int* adr;
public:
    Vect(int);
    ~Vect();
    int& operator[](int i);
};
#endif 