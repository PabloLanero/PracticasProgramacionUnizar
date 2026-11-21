/******************************************************************************
 * Programación 1. Práctica 4
 * Autores: ------------- Pablo Lanero Perez -------------
 * Resumen: Programa que solicita al usuario un número natural y calcula y
 *          muestra su factorial utilizando números naturales grandes.
 *****************************************************************************/
#include <iostream>
#include "naturales-grandes.hpp"

using namespace std;

/*
 * Pre:  ---
 * Post: Solicita al usuario un número natural (mayor o igual que 0),
 *       reiterando la petición mientras el valor introducido sea negativo, y
 *       devuelve el número introducido.
 */
int pedirDato(){
    cout << "Escriba un numero natural: ";
    int numeroNatural;
    cin >> numeroNatural;
    while(numeroNatural < 0){
        cout << "El número tiene que ser mayor o igual que 0." << endl;
        cin >> numeroNatural;
    }
    return numeroNatural;
}

/*
 * Pre:  Si «desbordamiento» es «false», «numeroGrande» almacena la
 *       representación de un número natural de «NUM_DIGITOS» componentes (con
 *       las unidades en la componente 0, las decenas en la 1 y así
 *       sucesivamente, y con valor 0 en las componentes superiores al dígito
 *       más significativo) correspondiente al factorial de «numeroNatural».
 * Post: Si «desbordamiento» es «true», escribe en la pantalla un mensaje
 *       indicando que no se ha podido calcular el factorial. En caso
 *       contrario, escribe en la pantalla el resultado con el formato
 *       «numeroNatural! = numeroGrande».
 */
void imprimirResultado(const unsigned numeroGrande[], const unsigned numeroNatural, const bool desbordamiento){
    if(desbordamiento){
        cout << "No se ha podido calcular el factorial"<< endl;
    }else{
        cout << numeroNatural << "! = ";
        escribirEnPantalla(numeroGrande);
        cout << '\n';
    }
}

/*
 * Programa que pide al usuario un número natural y calcula su factorial
 * mediante multiplicaciones sucesivas con números naturales grandes, mostrando
 * el resultado en pantalla o un aviso en caso de desbordamiento.
 */
int main() {
    int numeroNatural = pedirDato();
    unsigned numeroVector[NUM_DIGITOS] = {};
    convertir(1, numeroVector);
    bool desbordamiento = false;
    for(int i = 1; i <= numeroNatural && !desbordamiento; i++){
        multiplicar(numeroVector,i,numeroVector, desbordamiento);
    }
    imprimirResultado(numeroVector ,numeroNatural, desbordamiento);

    return 0;
}
