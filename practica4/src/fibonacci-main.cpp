/******************************************************************************
 * Programación 1. Práctica 4
 * Autores: ------------- Pablo Lanero Perez -------------
 * Resumen: Programa que solicita al usuario intervalos de términos de la
 *          sucesión de Fibonacci y muestra los valores comprendidos en cada
 *          intervalo utilizando números naturales grandes.
 *****************************************************************************/
#include <iostream>
#include "naturales-grandes.hpp"

using namespace std;

/*
 * Pre:  «a» y «b» almacenan las representaciones de sendos números naturales,
 *       con las unidades en la componente de índice 0, las decenas en la de
 *       índice 1 y así sucesivamente, y con valor 0 en las componentes de
 *       índices superiores al dígito más significativo. Los vectores «a»,
 *       «b» y «suma» tienen «NUM_DIGITOS» componentes.
 * Post: Calcula la suma de los naturales representados por «a» y «b» en
 *       «suma», asignando a «desbordamiento» el valor «true» si la suma supera
 *       «NUM_DIGITOS» cifras (en cuyo caso «suma» queda indefinido) y «false»
 *       en caso contrario. Además, copia «b» en «a» y «suma» en «b».
 */
void sumarNaturalesGrandes(unsigned a[], unsigned b[], unsigned suma[], bool &desbordamiento){
    sumar(a,b,suma,desbordamiento);
    copiar(b, a);
    copiar(suma, b);
}

/*
 * Pre:  Los vectores «a» y «b» tienen «NUM_DIGITOS» componentes.
 * Post: Inicializa «a» con la representación del número natural 0, «b» con la
 *       del 1, «posicion» con el valor 1 y «desbordamiento» con «false».
 */
void resetearValores(unsigned a[], unsigned b[], int &posicion, bool &desbordamiento){
    convertir(0,a);
    convertir(1,b);
    posicion = 1;
    desbordamiento= false;
}

/*
 * Pre:  «vector» almacena la representación de un número natural grande de
 *       «NUM_DIGITOS» componentes, con las unidades en la componente 0, las
 *       decenas en la 1 y así sucesivamente, y con valor 0 en las componentes
 *       de índices superiores al dígito más significativo.
 * Post: Escribe en la pantalla el valor de «posicion» seguido de ". ", el
 *       número natural representado por «vector» (sin ceros a la izquierda) y
 *       un salto de línea.
 */
void escribirIteraccion(const unsigned vector[], const int posicion){
    cout << posicion << ". ";
    escribirEnPantalla(vector);
    cout << endl;
}

/*
 * Programa que pide de forma reiterada al usuario dos números naturales
 * (término inicial y final, finalizando cuando el inicial es 0 o negativo) y
 * calcula y muestra los términos de la sucesión de Fibonacci comprendidos en
 * ese intervalo, informando si se produce desbordamiento.
 */
int main() {
    unsigned a[NUM_DIGITOS] = {};
    unsigned b[NUM_DIGITOS] = {};
    unsigned suma[NUM_DIGITOS] = {};
    int posicion;
    bool desbordamiento;
    resetearValores(a, b, posicion, desbordamiento);
    int primero, ultimo;
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
            if(posicion >= primero){
                escribirIteraccion(a, posicion);
            }
            cout << "Desbordamiento al calcular el termino " << posicion + 1 << '\n';
        }
        cout << "Términos inicial y final (0 o negativo para acabar): ";
        cin >> primero;
    }
    return 0;
}
