#include <iostream>
#include <cstdlib>
using namespace std;

template <class T, int n>
class Vect
{
private:
    T tab[n];
public:
    Vect(/* args */);
    ~Vect();
    T& operator[](int i);
    
};

template <class T ,int n> Vect<T,n>::Vect(/* args */)
{
    cout<<"Constructeur de Vect" << endl;
}

template <class T ,int n> Vect<T,n>::~Vect()
{
    cout<<"Destructeur de Vect" << endl;
}
template <class T, int n> T& Vect<T,n>::operator[](int op){
    if (op < 0 || op >= n)
    {
        cout<<"Attention debordement d'indice !!!";
        exit(1);
    }
    return tab[op];
}

int main()
{
    Vect<int,5> v;
    for (int i = 0; i < 5; i++)
        v[i] = i * i;
    for (int i = 0; i < 5; i++)
        cout << v[i] << " ";
    cout << endl;
    Vect<double,5> v2;
    for (int i = 0; i < 5; i++)
        v2[i] = i * 0.5;
    for (int i = 0; i < 5; i++)
        cout << v2[i] << " ";
    cout << endl;
    Vect<char,5> v3;
    for (int i = 0; i < 5; i++)
        v3[i] = 'a' + i;
    for (int i = 0; i < 5; i++)
        cout << v3[i] << " ";
    cout << endl;
    return 0;
}