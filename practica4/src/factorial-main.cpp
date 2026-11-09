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
 * Post: Pedira al usuario un numero > 0
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
/**
 * Programa que pedira al usuario un numero y calculara su valor factorial de forma que 
 * permitira una mayor cantidad de digitos
 */
int main() {
    int numeroNatural = pedirDato();
    unsigned numeroVector[NUM_DIGITOS] = {};
    convertir(1, numeroVector);
    bool desbordamiento = false;
    for(int i = 1; i <= numeroNatural && !desbordamiento; i++){
        multiplicar(numeroVector,i,numeroVector, desbordamiento);
    }
    if(desbordamiento){
        cout << "No se ha podido calcular el factorial"<< endl;
    }else{
        cout << numeroNatural << "! = ";
        escribirEnPantalla(numeroVector);
        cout << '\n';
    }

    return 0;
}
