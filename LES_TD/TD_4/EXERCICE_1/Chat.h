#ifndef CHAT_H
#define CHAT_H
#include "Mamifere.h"
class Chat : public Mamifere
{
private:
    /* data */
public:
    Chat(string nom) : Mamifere(nom) {}
    ~Chat(){}
    void exprimer() ;
};

#endif