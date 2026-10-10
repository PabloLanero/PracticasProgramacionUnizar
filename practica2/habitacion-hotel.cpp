#include <iostream>

using namespace std;
/**
 * Programa en el que el usuario escribe un numero de al menos 3 cifras y le indica
 * el numero de la habitacion y la planta relacionada
 *
 * Autor: Pablo Lanero Perez
 */
int main(){
    cout << "Escriba un numero de habitacion: ";
    int numero;
    cin >> numero;
    unsigned piso = numero /100;
    unsigned habitacion = numero %100;
    if(numero <= 0 || habitacion >24 || piso == 0){
        cout << "Los datos introducidos no son correctos" << endl << "Saliendo del programa..." << endl;
        return 1;
    }
    cout << "Es la habitacion numero " <<habitacion
         << " de la planta " << piso << endl; 

}