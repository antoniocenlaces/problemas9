/******************************************************************************\
 * Curso de Programación 1. Tema 9 y colección problemas
 * 
 * Realizado por: Antonio J González Almela
 * 
 * Resumen: Contar el número de elementos de un vector y devuelve
 *  el número de elementos positivos en él
\******************************************************************************/

#include <iostream>

using namespace std;

void pideDatos(int vector[], const unsigned n) {
    
    cout << "Introduzca " << n << " números enteros: ";

    for (unsigned i = 0; i < n; i++) {
        cin >> vector[i];
    }
}

/* 
 * Pre:  El vector «v» tiene al menos «n» componentes. 
 * Post: Devuelve el número de datos positivos almacenados en las primeras «n»  
 *       componentes del vector «v». 
 */ 
unsigned numPositivos(const int v[], const unsigned n) {
    unsigned positivos = 0;
    for (unsigned i = 0; i < n; i++) {
        if (v[i] > 0) {
            positivos++;
        }
    }
    return positivos;
}

int main() {
    cout << "Introduzca un número positivo: ";
    unsigned n;
    cin >> n;

    if (n > 0){
        int vector[n] = {0};
        pideDatos(vector, n);
        cout << "El vector tiene " << numPositivos(vector, n) << " datos estrictamente positivos." << endl;
    } else {
        cout << "Solo sirven números enteros y positivos" << endl;
        return 1;
    }
    return 0;
}