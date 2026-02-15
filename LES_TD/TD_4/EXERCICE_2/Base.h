#ifndef BASE_H
#define BASE_H
#include <string>
#include <iostream>
using namespace std;
class Base
{

public:
    virtual void afficher() = 0;
    virtual int clef() = 0;
    virtual ~Base() {}
};


#endif // BASE_H