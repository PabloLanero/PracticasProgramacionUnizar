#include <iostream>

using namespace std;
/**
 * Programa interactivo que pide al usuario que exprese el tiempo de duración de un
 * determinado evento como una cantidad natural expresada en segundos, para informar a
 * continuación por la pantalla de la equivalencia del tiempo introducido en semanas, días,
 * horas, minutos y segundos
 *
 * Autor: Pablo Lanero Perez
 */
int main() {
    cout << "Duracion en segundos: ";
    int tiempo;
    cin >> tiempo;
    if (tiempo < 0){
        cout << "Has introducido una cantidad negativa"<< endl << "Saliendo del programa...";
        return 1;

    }
    unsigned segundos = tiempo % 60;
    tiempo /=60;
    unsigned minutos = tiempo % 60;
    tiempo /=60;
    unsigned horas = tiempo % 24;
    tiempo /=24;
    unsigned dias = tiempo % 7;
    tiempo /=7;
    unsigned semanas = tiempo;
    cout << "Este tiempo equivale a " << semanas << " semanas, " << dias << " dias, "
         << horas << " horas, " << minutos << " minutos y " << segundos << " segundos" << endl;
}