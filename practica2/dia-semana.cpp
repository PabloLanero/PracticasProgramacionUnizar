#include <iostream>

using namespace std;

int main(){
    cout << "Escriba un entero entre 1 y 7: ";
    unsigned dia;
    cin >> dia;
    string diaSemana ;
    switch(dia){
        case 1:
            diaSemana = "Lunes";
            break;
        case 2:
            diaSemana = "Martes";
            break;
        case 3:
            diaSemana = "Miercoles";
            break;
        case 4:
            diaSemana = "Jueves";
            break;
        case 5:
            diaSemana = "Viernes";
            break;
        case 6:
            diaSemana = "Sabado";
            break;
        case 7:
            diaSemana = "Domingo";
            break;
        default:
            cout << "Has introducido un dia invalido"<< endl << "Saliendo del programa...";
            return 1;
    }
    cout << "El dia numero " << dia << " de la semana es " << diaSemana << endl;
}