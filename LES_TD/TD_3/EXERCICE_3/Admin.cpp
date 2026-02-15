#include "Admin.h"
Admin::Admin(char* n, char* p ,char* f):Salarie(n,p){
    fonction = new char[strlen(f)+1];
    strcpy(fonction, f);
}
Admin::~Admin(){
    delete fonction;
}

char* Admin::getFonction()const{
    return fonction;
}

void Admin::affiche(){
    Salarie::affiche();
    cout<<"Fonction : "<<fonction<<endl;
}