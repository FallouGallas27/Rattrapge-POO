#ifndef PROF_H
#define PROF_H

#include "Salarie.h"
class Prof : public Salarie
{
private:
    char* diplome;
    char** matiere;
public:
    Prof(char*,char*, char*);
    ~Prof();
    char* getDiplome()const;
    char* GetIemamtiere(int);
    void affiche();
    void ajouter_matiere(char*);
};

#endif