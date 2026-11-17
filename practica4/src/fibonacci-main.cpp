/******************************************************************************
 * Programación 1. Práctica 4
 * Autores: ------------- Pablo Lanero Perez -------------
 * Resumen: 
 *****************************************************************************/
#include <iostream>
#include "naturales-grandes.hpp"

using namespace std;

/**
 * Pre:
 */
void sumarNaturalesGrandes(unsigned a[], unsigned b[], unsigned suma[], bool &desbordamiento){
    sumar(a,b,suma,desbordamiento);
    copiar(b, a);
    copiar(suma, b);
}

/**
 * Pre:
 */
void resetearValores(unsigned a[], unsigned b[], unsigned &posicion, bool &desbordamiento){
    convertir(0,a);
    convertir(1,b);
    posicion = 1;
    desbordamiento= false;
}

void escribirIteraccion(const unsigned vector[], const unsigned posicion){
    cout << posicion << ". ";
    escribirEnPantalla(vector);
    cout << endl;
}

/**
 * Programa que pedira al usuario dos numero naturales y calculara los valores de fibonacci que 
 * ocupen ese intervalo entre los numeros naturales
 */
int main() {
    unsigned a[NUM_DIGITOS] = {};
    unsigned b[NUM_DIGITOS] = {};
    unsigned suma[NUM_DIGITOS] = {};
    unsigned posicion;
    bool desbordamiento;
    resetearValores(a, b, posicion, desbordamiento);
    unsigned primero, ultimo;
    cout << "Términos inicial y final (0 o negativo para acabar): ";
    cin >> primero;
    while(primero > 0 ){
        cin >> ultimo;
        resetearValores(a,b, posicion, desbordamiento);
        while(!desbordamiento && posicion <=ultimo){
            if(posicion >= primero){
                escribirIteraccion(a, posicion);
            }
            sumarNaturalesGrandes(a, b, suma, desbordamiento);
            posicion++;
        }
        if(desbordamiento){
            escribirIteraccion(a, posicion);
            cout << "Desbordamiento al calcular el termino " << posicion + 1 << '\n';
        }
        cout << "Términos inicial y final (0 o negativo para acabar): ";
        cin >> primero;
    }
    return 0;
}
