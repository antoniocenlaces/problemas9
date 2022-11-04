/******************************************************************************\
 * Curso de Programación 1. Tema 9 y colección problemas
 * 
 * Realizado por: Antonio J González Almela
 * 
 * Resumen: Calcula la moda de una distribución
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
* Pre: El vector «v» tiene «n» componentes y se cumple que 0 ≤ i < n.
* Post: Devuelve el número de veces que está repetido el dato v[i] en el vector «v».
*/
int numeroRepeticiones(const int v[], const unsigned i, const unsigned n) {
    unsigned repeticiones = 0;
    for (unsigned k = 0; k < n; k++) {
        if (v[k] == v[i]) {
            repeticiones++;
        }
    }
    return repeticiones;
}

/*
* Pre: El vector «v» tiene «n» componentes.
* Post: Devuelve la psoción de "v" donde se encuentra
*       el máximo de los valores almacenados en «v»
*/
unsigned maximo(const int v[], const unsigned n) {
    int max = v[0];
    unsigned pos = 0;
    for (unsigned i = 1; i < n; i++) {
        if(v[i] > max) {
            max = v[i];
            pos = i;
        }
    }
    return pos;
}

/*
* Pre: El vector «v» tiene «n» componentes.
* Post: Devuelve la moda de los datos almacenados en el vector «v».
*/
int moda(const int v[], const unsigned n) {
    int r[n];
    int max;
    unsigned posicionMaximo = 0;
    for (unsigned i = 0; i < n; i++){
        r[i]=numeroRepeticiones(v, i, n);
    }
    posicionMaximo = maximo(r, n);
    return v[posicionMaximo];
}

int main() {
    cout << "Introduzca un número positivo: ";
    unsigned n;
    cin >> n;

    if (n > 0){
        int vector[n] = {0};
        pideDatos(vector, n);
        unsigned pos = maximo(vector, n);
        
        cout << "El máximo de la distribución es: " << vector[pos] << " y está en la posición: " 
            << pos + 1 << endl;
        cout << "La moda de la distribución es: " << moda(vector, n) << endl;
    } else {
        cout << "Solo sirven números enteros y positivos" << endl;
        return 1;
    }
    return 0;
}