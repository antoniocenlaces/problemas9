/******************************************************************************\
 * Curso de Programación 1. Tema 9 y colección problemas
 * 
 * Realizado por: Antonio J González Almela
 * 
 * Resumen: Copia un vector de entrada en un segundo vector
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
 * Pre:  Los vectores «original» y «copia» tienen al menos «n» componentes cada uno. 
 * Post: Copia las primeras «n» componentes del vector «original» en las 
 *       primeras «n» componentes del vector «copia». 
 */ 
void copiar(const int original[], const unsigned n, int copia[]) {
     for (unsigned i = 0; i < n; i++) {
        copia[i] = original[i];
     }
}

int main() {
    cout << "Introduzca un número positivo: ";
    unsigned n;
    cin >> n;

    if (n > 0){
        int vector[n] = {0};
        pideDatos(vector, n);
        int copia[n] = {0};
        copiar(vector, n, copia);
        cout << "El vector copiado: " << endl;
        for (unsigned i = 0; i < n - 1; i++) {
            cout << copia[i] << ", ";
        }
        cout << copia[n - 1] << endl;
    } else {
        cout << "Solo sirven números enteros y positivos" << endl;
        return 1;
    }
    return 0;
}