#include <iostream>

using namespace std;

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