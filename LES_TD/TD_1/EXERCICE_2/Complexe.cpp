#include <math.h>
#include "Complexe.h"
using namespace std;

Complexe::Complexe(double r, double i){
    re = r;
    im = i;
    std::cout<<"Appel deu const de Complexe"<<endl;
}

double Complexe::get_reelle(){
    return re;
}
double Complexe::get_imaginaire(){
    return im;
}
double Complexe::Module(){
    return sqrt(re*re + im*im);
}
Complexe Complexe::ajouter(Complexe c){
    Complexe f(0,0) ;
    f.re = re + c.re;
    f.im = im + c.im;
    return f;
}
Complexe Complexe::multiplier(Complexe c){
    Complexe d(0,0);
    d.re = re * c.re - im * c.im;
    d.im = re * c.im + im * c.re;
    return d;
}
void Complexe::afficher(){
    if(im >= 0)
        cout << re << "+" << im << "i" << endl;
    else
        cout << re << im << "i" << endl;
}

Complexe Complexe::operator+(Complexe& c){
    Complexe d(0,0);
    d.re = re + c.re;
    d.im = im + c.im;
    return d;
}
Complexe Complexe::operator*(Complexe& c){
    Complexe d(0,0);
    d.re = re * c.re - im * c.im;
    d.im = re * c.im + im * c.re;
    return d;
}
ostream& operator<<(ostream & sortie,const Complexe& c){
    if(c.im > 0){
        sortie<<c.re <<"+"<< c.im<<"i"<<endl;
    }
    else{
        sortie<<c.re <<c.im <<"i"<<endl;
    }
    return sortie;
}