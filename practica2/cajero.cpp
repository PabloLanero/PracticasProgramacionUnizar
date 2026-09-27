#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Cantidad de retirar en euros [positiva y multiplo de 10]: ";
    int euros;
    cin >> euros;
    if(euros<0 || (euros%10) !=0){
        cout << "Has introducido una cantidad incorrecta"<< endl << "Saliendo del programa...";
        return 1;
    } 
    unsigned billetes50 = euros/50;
    unsigned billetes20 = (euros-(billetes50*50))/20;
    unsigned billetes10 = (euros-(billetes50*50+billetes20*20))/10;
    unsigned ANCHO = 10;
    cout << left << setw(ANCHO) << "Billetes" << left << setw(ANCHO) << "Euros" << endl 
         << left << setw(ANCHO) << "========" << left << setw(ANCHO) << "=====" << endl
         << right << setw(5) << billetes10 << right << setw(9) << 10 << endl
         << right << setw(5) << billetes20 << right << setw(9) << 20 << endl
         << right << setw(5) << billetes50 << right << setw(9) << 50 << endl;
}