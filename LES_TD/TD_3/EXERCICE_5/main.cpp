#include "Vect.h"
#include "Vectb.h"

int main()
{
    // Test de la classe Vect (indices 0..n-1)
    cout << "=== Test Vect ===" << endl;
    Vect v(5);
    for (int i = 0; i < 5; ++i) {
        v[i] = (i + 1) * 10;
    }

    cout << "Vecteur classique (indices 0-4):" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "v[" << i << "] = " << v[i] << endl;
    }
    VectB vb(1, 5);
    for (int i = 1; i <= 5; ++i) {
        vb[i] = i * 100;
    }
    cout << "\nVecteur borné (indices 1-5):" << endl;
    for (int i = 1; i <= 5; ++i) {
        cout << "vb[" << i << "] = " << vb[i] << endl;
    }
    return 0;
}
