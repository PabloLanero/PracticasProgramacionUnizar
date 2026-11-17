/******************************************************************************
 * Programación 1. Práctica 4
 * Autores: ------------- Pablo Lanero Perez -------------
 * Resumen: 
 *****************************************************************************/

#include <iostream>
#include "naturales-grandes.hpp"

using namespace std;

void escribirIteracion(unsigned iteracion, unsigned a[],
                     unsigned b[], unsigned suma[], bool &muchosDigitos){
    cout << "Iteracion " << iteracion << ": ";
        if(!muchosDigitos){
            escribirEnPantalla(a);
            cout << " + ";
            escribirEnPantalla(b);
            cout << " = ";
            escribirEnPantalla(suma);
            muchosDigitos = 20 <= numCifras(suma);
        }else{
            cout << "...";
        }
        cout << '\n';
}
/**
 * Programa que pide un numero al usuario y comprobara si es un numero de Lychrel
 * si se produce desbordamiento al haber demasiados digitos, saldra del programa 
 * y asumira que puede ser un numero de Lychrel
 */
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
    cout << endl;
    iteracion++;
    while(!desbordamiento && !esCapicua(a)){
        calcularImagen(a, b);
        sumar(a,b,suma,desbordamiento);
        copiar(suma, a);
        iteracion++;

    }
    if(esCapicua(a)){
        cout << numero << " no es un numero de Lychrel." << '\n';
    }else{
        cout << numero << " podria ser un numero de Lychrel." << '\n';
    }

}
