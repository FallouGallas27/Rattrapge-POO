#include "Ensemble.h"

Ensemble::Ensemble(int n){
    N = n;
    nb_elements = 0;
    elements = new int[n];
    cout<<"Appel du const d'ensemble "<<this<<endl;
}
Ensemble::~Ensemble(){
    delete[] elements;
    cout<<"Appel du dest d'ensemble "<<this<<endl;
}
int Ensemble::cardinal()const{
    return nb_elements;
}
Ensemble& Ensemble::operator<<(int n){
    if (*this % n)
    {
       cout<<"Element existant "<<endl;
    }
    else if (nb_elements < N)
    {
        elements[nb_elements++] = n;
    }
    else
    {
        cout<<"Ensemble plein "<<endl;
    }
    return *this;
}
bool Ensemble::operator%(int n){
    for (int i = 0; i < nb_elements; i++)
    {
        if (elements[i] == n)
        {
            return true;
        }
        
    }
    return false;
}

Ensemble& Ensemble::operator>>(int n){
    if(*this % n){
        int i = 0;
        while (i < nb_elements && elements[i] != n)
        {
            i++;
        }
        while (i < nb_elements)
        {
            elements[i] = elements[i+1];
            i++;
        }
        nb_elements--;
        return *this;
    }
    else cout<<"Element "<<n<<" inexistant"<<endl;
    return *this;
}

void Ensemble::affichage(){
    //cout<<"Affichaga de l'ensemble "<<endl;
    cout<<"E = [";
    for (int i = 0; i < nb_elements-1 ; i++)
    {
        cout<<elements[i]<<", ";
    }
    cout<<elements[nb_elements-1]<<"]"<<endl;
}
int main(){
    Ensemble E1(6);
    E1<<1<<3<<5<<7<<9;
    cout<<"Affichage des elments de E1"<<endl;
    E1.affichage();
    E1>>2>>9;
    cout<<"Suppression de 2 et 9"<<endl;
    E1.affichage();
    if(E1%5)
        cout<<"5 est dans E1"<<endl;
    else
        cout<<"5 n'est pas dans E1"<<endl;
    cout<<"Cardinal de E1: "<<E1.cardinal()<<endl;
    return 0;
}