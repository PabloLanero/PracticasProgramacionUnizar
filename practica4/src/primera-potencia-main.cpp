/******************************************************************************
 * Programación 1. Práctica 4
 * Autores: ------------- Pablo Lanero Perez -------------
 * Resumen: Programa que solicita al usuario un número de dígitos y calcula la
 *          primera potencia de 2 que alcanza esa cantidad de cifras.
 *****************************************************************************/
#include <iostream>
#include "naturales-grandes.hpp"

using namespace std;

/*
 * Pre:  ---
 * Post: Solicita al usuario por pantalla un número de dígitos (indicando que
 *       un valor menor o igual que 0 finaliza el programa) y asigna a «numero»
 *       el valor introducido.
 */
void pedirDato(int &numero){
    cout << "Numero de digitos (0 o negativo para acabar): ";
    cin >> numero;

}

/*
 * Pre:  «vector» almacena la representación de un número natural de
 *       «NUM_DIGITOS» componentes (con las unidades en la componente 0, las
 *       decenas en la 1 y así sucesivamente, y con valor 0 en las componentes
 *       superiores al dígito más significativo), correspondiente al valor 2
 *       elevado a «contador», cuyo número de cifras es «cantidadCifras».
 * Post: Escribe en la pantalla el número natural representado por «vector»
 *       (sin ceros a la izquierda), seguido de un mensaje indicando que es 2
 *       elevado a la «contador»-ésima potencia y la primera potencia de 2 de
 *       «cantidadCifras» dígitos.
 */
void imprimirResultado(unsigned vector[], const unsigned contador, const unsigned cantidadCifras){
    escribirEnPantalla(vector);
    cout << '\n';
    cout << "es 2 elevado a la " << contador << ".º potencia" << endl;
    cout << "y es la primera potencia de 2 de " << cantidadCifras << " digitos" << endl;
}

/*
 * Programa que pide de forma reiterada al usuario un número de dígitos (hasta
 * que introduzca 0 o un número negativo) y calcula y muestra la primera
 * potencia de 2 que tiene esa cantidad de cifras.
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
        imprimirResultado(numeroVector, contador, cantidadCifras);
        pedirDato(numero);
    }
    return 0;
}
