#ifndef ADMIN_H
#define ADMIN_H
#include "Salarie.h"

class Admin : public Salarie
{
private:
    char* fonction;
public:
    Admin(char*, char*, char*);
    ~Admin();
    char* getFonction()const;
    void affiche();
};

#endif