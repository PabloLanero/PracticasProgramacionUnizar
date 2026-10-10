#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
/**
 * Programa que pide al usuario que defina un ángulo en grados, minutos y
 * segundos sexagesimales y le informa por pantalla, a continuación, del valor equivalente de ese ángulo en
 * radianes, así como de los valores de su seno, coseno y tangente
 *
 * Autor: Pablo Lanero Perez
 */
int main() {
    cout << "Escribe el valor de un angulo (grados, minutos y segundos): ";
    double grados, minutos, segundos;
    cin >> grados >> minutos >> segundos;
    grados += minutos/60 +segundos/3600;
    double radianes = grados*M_PI/180;
    if (((int)grados % 90) != 0){
        cout << "Valor del angulo en radianes: " << setprecision(4) << radianes << " radianes " << endl
             << "sen " <<  fixed << setprecision(3) << radianes << " = " << fixed << setprecision(4) << sin(radianes) << endl
             << "cos " <<  fixed << setprecision(3) << radianes << " = " << fixed << setprecision(4) << cos(radianes) << endl
             << "tg " << fixed << setprecision(3) << radianes << " = " << fixed << setprecision(4) << tan(radianes) << endl;

    }else {
        cout << "Valor del angulo en radianes: " << setprecision(4) << radianes << " radianes " << endl
             << "sen " <<  fixed << setprecision(3) << radianes << " = " << fixed << setprecision(4) << sin(radianes) << endl
             << "cos " <<  fixed << setprecision(3) << radianes << " = " << fixed << setprecision(4) << cos(radianes) << endl
             << "tg " << fixed << setprecision(3) << radianes << " = No tiene tangente" << endl;
    }
    

}