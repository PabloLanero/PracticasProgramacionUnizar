/******************************************************************************
 * Programación 1. Práctica 4
 * Autores: ------------- ¡PON AQUÍ TU NOMBRE! -------------
 * Resumen: 
 *****************************************************************************/

#include <iostream>
#include "naturales-grandes.hpp"

using namespace std;

int main() {
    cout << "Escriba un numero natural: ";
    unsigned numero;
    unsigned iteracion = 0;
    cin >> numero;
    bool desbordamiento = false;
    bool demasiadosDigitos = false;
    unsigned a[NUM_DIGITOS], b[NUM_DIGITOS], suma[NUM_DIGITOS];
    convertir(numero,a);
    cout << "Iteracion " << iteracion << ": ";
    escribirEnPantalla(a);
    cout << '\n';
    iteracion++;
    while(!desbordamiento && !esCapicua(a)){
        calcularImagen(a, b);
        sumar(a,b,suma,desbordamiento);
        cout << "Iteracion " << iteracion << ": ";
        if(!demasiadosDigitos){
            escribirEnPantalla(a);
            cout << " + ";
            escribirEnPantalla(b);
            cout << " = ";
            escribirEnPantalla(suma);
            demasiadosDigitos = 20 <= numCifras(suma);
        }else{
            cout << "...";
        }
        cout << '\n';
        copiar(suma, a);
        iteracion++;

    }
    if(esCapicua(a)){
        cout << numero << " no es un numero de Lychrel." << '\n';
    }else{
        cout << numero << " podria ser un numero de Lychrel." << '\n';
    }

}
