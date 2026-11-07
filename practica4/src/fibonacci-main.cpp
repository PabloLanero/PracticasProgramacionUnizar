/******************************************************************************
 * Programación 1. Práctica 4
 * Autores: ------------- Pablo Lanero Perez -------------
 * Resumen: 
 *****************************************************************************/
#include <iostream>
#include "naturales-grandes.hpp"

using namespace std;

int main() {
    unsigned a[NUM_DIGITOS] = {};
    unsigned b[NUM_DIGITOS] = {};
    convertir(0,a);
    convertir(1,b);
    unsigned primero, ultimo;
    cout << "Términos inicial y final (0 o negativo para acabar): ";
    cin >> primero;
    while(primero > 0 ){
        cin >> ultimo;
        convertir(0,a);
        convertir(1,b);
        unsigned posicion = 1;
        bool desbordamiento = false;
        while(!desbordamiento && posicion <=ultimo){
            unsigned suma[NUM_DIGITOS] = {};
            if(posicion >= primero){
                cout << posicion << ". ";
                escribirEnPantalla(a);
                cout << '\n';
            }
            sumar(a,b,suma,desbordamiento);
            copiar(b, a);
            copiar(suma, b);
            posicion++;
        }
        if(desbordamiento){
            if(posicion >= primero){
                cout << posicion << ". ";
                escribirEnPantalla(a);
                cout << '\n';
            }
            cout << "Desbordamiento al calcular el termino " << posicion + 1 << '\n';
        }
        cout << "Términos inicial y final (0 o negativo para acabar): ";
        cin >> primero;
    }
    return 0;
}
