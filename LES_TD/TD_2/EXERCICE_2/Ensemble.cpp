#include "Ensemble.h"

Ensemble::Ensemble(int n){
    N = n;
    nb_elements = 0;
    courant = 0;
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
void Ensemble::ajouter(int a){
    if (!contient(a)&& nb_elements < N)
    {
        elements[nb_elements++] = a;
    }
    else if (contient(a))
    {
        cout<<"Element existe deja"<<endl;
    }
    else cout<<"Ensemble plein"<<endl;
    
}

void Ensemble::supprimer(int a){
    if (contient(a))
    {
        int i = 0;
        while (i < nb_elements && a != elements[i])
        {
            i++;
        }
        while (i < nb_elements)
        {
            elements[i] = elements[i + 1];
            i++;
        }
        nb_elements--;
    }
    else
        cout<<"Element inexistant"<<endl;
}
bool Ensemble::contient(int a){
    int i = 0;
    while (i < nb_elements && elements[i] != a)
    {
        i++;
    }
    if (i < nb_elements)
    {
        return true;
    }
    else return false;
    
}

void Ensemble::afficher(){
    if(nb_elements==0)
    {
        cout<<"E = []"<<endl;
        return;
    }
    cout<<"E = [";
    for (int i = 0; i < nb_elements-1 ; i++)
    {
        cout<<elements[i]<<", ";
    }
    cout<<elements[nb_elements-1]<<"]"<<endl;
}

Ensemble::Ensemble(const Ensemble &E){
    N = E.N;
    nb_elements = E.nb_elements;
    elements = new int[N];
    for (int i = 0; i < nb_elements; i++)
    {
        elements[i] = E.elements[i];
    }
    cout<<"Appel du const de recopie\n";
}
Ensemble f(Ensemble& E){
    return E;
}
void Ensemble::init(){
    courant = 0;
}
bool Ensemble::existe(){
    return courant < nb_elements;  
}
int Ensemble::prochain(){
    return elements[courant++];
}
void traiter(int s){
    int c = 5;
    c += s;
    cout<<"La somme est "<<c<<endl;
}
int main(){
    Ensemble E1(7);
    E1.ajouter(0);
    E1.ajouter(2);
    E1.ajouter(3);
    E1.ajouter(5);
    E1.ajouter(7);
    E1.ajouter(8);
    cout<<"Affichage de l'ensemble E1"<<endl;
    E1.afficher();
    cout<<"Le cardinal de l'enesemble E1 est "<<E1.cardinal()<<endl;
    cout<<"Suppression de l'element 5 de E1"<<endl;
    E1.supprimer(5);
    cout<<"Le cardinal de l'enesemble E1 est "<<E1.cardinal()<<endl;
    E1.afficher();
    if (E1.contient(3))
    {
        cout<<"L'element 3 est dans E1"<<endl;
    }
    else
    {
        cout<<"L'element 3 n'est pas dans E1"<<endl;
    }    
    Ensemble E2 = E1;
    cout<<"Affichage de l'ensemble E2"<<endl;
    E2.afficher();
    E2.ajouter(5);
    Ensemble E3(E2);
    Ensemble E5 = f(E3);
    E1.init();
    while(E1.existe())
        traiter(E1.prochain());
}
