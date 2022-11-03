/******************************************************************************\
 * Curso de Programación 1. Tema 9 y colección problemas
 * 
 * Realizado por: Antonio J González Almela
 * 
 * Resumen: Contar secuencia de reales y calcular media
\******************************************************************************/

#include <iostream>

using namespace std;

void pideDatos(double vector[], const unsigned n) {
    
    cout << "Introduzca " << n << " números reales: ";

    for (unsigned i = 0; i < n; i++) {
        cin >> vector[i];
    }
}
double media(double vector[], const unsigned n) {
    double suma = 0;
    for (unsigned i = 0; i < n; i++){
        suma += vector[i];
    }
    return suma / n;
}

unsigned mayorQueMedia(double vector[], const unsigned n) {
    unsigned contador = 0;
    double mediaVector = media(vector, n);

    for (unsigned i = 0; i < n; i++) {
        if (vector[i] > mediaVector) {
            contador++;
        }
    }
    return contador;
}

int main() {
    cout << "Introduzca un número positivo: ";
    unsigned n;
    cin >> n;

    if (n > 0){
        double vector[n] = {0};
        pideDatos(vector, n);
        cout << "La media de los datos introducidos es " << media(vector, n) <<
             " y " << mayorQueMedia(vector, n) << " de ellos son superiores a la media." << endl;
    } else {
        cout << "Solo sirven números enteros y positivos" << endl;
        return 1;
    }
    return 0;
}