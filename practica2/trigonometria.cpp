#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    cout << "Escribe el valor de un angulo (grados, minutos y segundos): ";
    double grados, minutos, segundos;
    cin >> grados >> minutos >> segundos;
    grados += minutos/60 +segundos/3600;
    double radianes = grados*M_PI/180;
    cout << "Valor del angulo en radianes: " << setprecision(4) << radianes << " radianes " << endl
         << "sen " <<  fixed << setprecision(3) << radianes << " = " << fixed << setprecision(4) << sin(radianes) << endl
         << "cos " <<  fixed << setprecision(3) << radianes << " = " << fixed << setprecision(4) << cos(radianes) << endl
         << "tg " << fixed << setprecision(3) << radianes << " = " << fixed << setprecision(4) << tan(radianes) << endl;
    

}