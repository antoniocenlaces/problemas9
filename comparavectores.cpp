/******************************************************************************\
 * Curso de Programación 1. Tema 9 y colección problemas
 * 
 * Realizado por: Antonio J González Almela
 * 
 * Resumen: Compara los contenidos de dos vectores
\******************************************************************************/

#include <iostream>

using namespace std;


/* 
 * Pre:  Vector tiene n componentes. 
 * Post: Pide n datos enteros del teclado y los deveulve en vector. 
 */ 
void pideDatos(int vector[], const unsigned n) {
    
    cout << "Introduzca " << n << " números enteros: ";

    for (unsigned i = 0; i < n; i++) {
        cin >> vector[i];
    }
}

/* 
 * Pre:  Los vectores «v» y «w» tienen al menos «n» componentes cada uno. 
 * Post: Devuelve true si y solo si los datos de las primeras «n» componentes de 
 *       los vectores «v» y «w» son iguales. 
 */ 
bool sonIguales(const int v[], const int w[], const unsigned n) {
    bool iguales;
    unsigned i = 0;
    do {
        iguales = v[i] == w[i];
        i++;
    } while (i < n && iguales);
    return iguales;
}

int main() {
    cout << "Introduzca un número positivo: ";
    unsigned n;
    cin >> n;

    if (n > 0){
        int vector[n] = {0};
        pideDatos(vector, n);
        int otro[n] = {0};
        cout << "Vamos a introducir una segunda secuencia de " << n << " numeros." << endl;
        pideDatos(otro, n);        

        cout << "Los vectores " << (sonIguales(vector, otro, n) ? "SI" : "NO") << " son iguales" << endl;

        cout << "El vector primero: ";
        for (unsigned i = 0; i < n - 1; i++) {
            cout << vector[i] << ", ";
        }
        cout << vector[n - 1] << endl;

        cout << "El vector segundo: ";
        for (unsigned i = 0; i < n - 1; i++) {
            cout << otro[i] << ", ";
        }
        cout << otro[n - 1] << endl;
    } else {
        cout << "Solo sirven números enteros y positivos" << endl;
        return 1;
    }
    return 0;
}
