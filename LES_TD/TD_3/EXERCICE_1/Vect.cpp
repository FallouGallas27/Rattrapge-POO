#include<iostream>
#include <cstdlib>
using namespace std;

template <class T>
class Vect
{
    T *tab;
    int taille;
public:
    Vect(int s);
    ~Vect();
    T& operator[](int i);
};

template <class T>
Vect<T>::Vect(int s)
{
    taille = s;
    tab = new T[taille];
}

template <class T>
Vect<T>::~Vect()
{
    delete [] tab;
}

template <class T>
T& Vect<T>::operator[](int i)
{
    if (i < 0 || i >= taille)
    {
        cerr << "Debordement de tableau" << endl;
        exit(1);
    }
    return tab[i];
}

int main()
{
    Vect<int> v(5);
    for (int i = 0; i < 5; i++)
        v[i] = i * i;
    for (int i = 0; i < 5; i++)
        cout << v[i] << " ";
    cout << endl;
    return 0;
}