/******************************************************************************\
 * Curso de Programación 1. Tema 9 y colección problemas
 * 
 * Realizado por: Antonio J González Almela
 * 
 * Resumen: Contar el número de elementos estrictamente positivos en un
 *           vector
\******************************************************************************/

#include <iostream>

using namespace std;

int main() {
    const unsigned NUM_POS = 21;
    int vector[]= {1, -5, -8, 6, 8, -3, -4, -6, 6, -1, 5, -8, 1, 9, 5, -9, 5, 8, 9, -2, -9};
    unsigned positivos = 0;

    for (unsigned i = 0; i < NUM_POS; i++) {
        if (vector[i] > 0) {
            positivos++;
        }
    }
    cout << "El vector tiene " << positivos << " datos estrictamente positivos." << endl;
    return 0;
}