#include <iostream>

using namespace std;

int main(){
    cout << "Escriba un numero de habitacion: ";
    int numero;
    cin >> numero;
    unsigned piso = numero /100;
    unsigned habitacion = numero %100;
    cout << "Es la habitacion numero " <<habitacion
         << " de la planta " << piso << endl; 

}