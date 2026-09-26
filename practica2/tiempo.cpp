#include <iostream>

using namespace std;

int main() {
    cout << "Duracion en segundos: ";
    unsigned tiempo;
    cin >> tiempo;
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