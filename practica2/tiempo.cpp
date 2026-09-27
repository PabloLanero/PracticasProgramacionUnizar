#include <iostream>

using namespace std;

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