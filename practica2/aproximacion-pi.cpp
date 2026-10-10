#include <iostream>
#include <random>
#include <cmath>
using namespace std;

/**
 * Programa que aproxima el valor de pi por el método de Monte Carlo: solicita al usuario el
 * número de puntos, genera puntos aleatorios en el cuadrado unidad y presenta por pantalla el
 * recuento obtenido como valor aproximado de pi
 *
 * Autor: Pablo Lanero Perez
 */
int main() {
    cout << "Introduzca el número de puntos para la aproximación: ";
    unsigned cantidadPuntos;
    cin >> cantidadPuntos;
    int radio = 1;
    int puntosDentro =0;
    for(unsigned i = 0; i <=cantidadPuntos; i++){
        double puntoX = rand() / INT32_MAX;
        double puntoY = rand() / INT32_MAX;
        double distancia00 = sqrt(pow(puntoX,2)+pow(puntoY,2));
        if(distancia00 >1)puntosDentro++;
    }
    cout << "Aproximación de pi obtenida con "<< cantidadPuntos << " puntos: " << puntosDentro << endl;
}