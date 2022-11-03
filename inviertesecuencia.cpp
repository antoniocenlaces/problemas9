/******************************************************************************\
 * Curso de Programación 1. Tema 9 y colección problemas
 * 
 * Realizado por: Antonio J González Almela
 * 
 * Resumen: Invierte el contenido de un vector de reales
\******************************************************************************/

#include <iostream>

using namespace std;

int main() {
    cout << "Introduzca un número positivo: ";
    unsigned n;
    cin >> n;

    if (n > 0) {
        cout << "Introduzca " << n << " números reales: ";

        double vector[n] = {0};
        for (unsigned i = 0; i < n; i++) {
            cin >> vector[i];
        }

        cout << "La secuencia en orden inverso es:" << endl;
        for (unsigned i = n - 1; i >= 1; i--) {
            cout << vector[i] << ", ";
        }
        cout << vector[0] << endl;
    } else {
        cout << "Solo sirven números enteros y positivos" << endl;
        return 1;
    }
    return 0;
}