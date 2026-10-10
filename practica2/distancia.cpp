#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
/**
 * Programa que calcula la distancia entre dos puntos de un plano cartesiano,
 * calculando asi la longitud del vector que los une
 *
 * Autor: Pablo Lanero Perez
 */
int main() {
    cout << "Introduzca las coordenadas de un punto: ";
    double punto1x, punto1y, punto2x, punto2y;
    cin >> punto1x;
    cin >> punto1y;
    cout << "Introduzca las coordenadas de otro punto: ";
    cin >> punto2x;
    cin >> punto2y;
    double distancia = sqrt(pow(punto2x-punto1x,2)+pow(punto2y-punto1y,2));
    cout << "La distancia entre los puntos es de " << fixed << setprecision(4) << distancia << " unidades" << endl;
}