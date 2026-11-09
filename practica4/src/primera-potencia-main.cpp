/******************************************************************************
 * Programación 1. Práctica 4
 * Autores: ------------- Pablo Lanero Perez -------------
 * Resumen: 
 *****************************************************************************/
#include <iostream>
#include "naturales-grandes.hpp"

using namespace std;

/**
 * Pre: ---
 * Post: Metodo para pedir el numero al usuario
 */
void pedirDato(int &numero){
    cout << "Numero de digitos (0 o negativo para acabar): ";
    cin >> numero;

}
/**
 * Programa que pedira al usuario un numero y calculara que numero 2^n tiene esa cantidad de digitos
 */
int main() {
    int numero;
    pedirDato(numero);
    while(numero > 0){
        unsigned numeroVector[NUM_DIGITOS] = {};
        convertir(1, numeroVector);
        // Lo idoneo seria unsigned, pero al compararlo con el numero del usuario, saltaria warning al
        // comparar un int con un unsigned
        int cantidadCifras= 1;
        bool desbordamiento = false;
        unsigned contador = 0;
        while(cantidadCifras < numero && !desbordamiento){
            multiplicar(numeroVector, 2, numeroVector, desbordamiento);
            cantidadCifras = numCifras(numeroVector);
            contador++;
        }
        escribirEnPantalla(numeroVector);
        cout << '\n';
        cout << "es 2 elevado a la " << contador << ".º potencia" << endl;
        cout << "y es la primera potencia de 2 de " << cantidadCifras << " digitos" << endl;
        pedirDato(numero);
    }
    return 0;
}
