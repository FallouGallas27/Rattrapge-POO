#include "str.h"

int main(){
    str C;
    char non[] = "Bonjour", j[]= "le  monde";
    str B(non);
    B.affiche();
    str A(B);
    A.affiche();
    C = B;
    C.affiche();
    if (A == C)
    {
        cout<<"A et C sont egal "<<endl;
    }
    else cout<<"A et C sont differents "<<endl;
    str D(j);
    str F = C + D;
    cout<<"Apres Concatenation "<<endl;
    F.affiche();
    cout<<F[3];
}