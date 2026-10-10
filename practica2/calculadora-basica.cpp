#include <iostream>
#include <cmath>
using namespace std;
/**
 * Programa que simula ser una calculadora entre dos numeros enteros, permitiendo las
 * operaciones suma, resta, multiplicacion, division, modulo y potencia, e imprimiendo
 * los resultados por pantalla hasta que el usuario introduzca un 0
 *
 * Autor: Pablo Lanero Perez
 */
int main() {
    cout << "Escriba una operacion entre enteros: ";
    int numero1, numero2, resultado;
    char operador;
    cin >> numero1;
    while (numero1 != 0)
    {
        cin >> operador;
        cin >> numero2;
        switch(operador){
            case '+':
                resultado = numero1 + numero2;
                break;
            case '-':
                resultado = numero1 - numero2;
                break;
            case '*':
                resultado = numero1 * numero2;
                break;
            case '/':
                resultado = numero1 / numero2;
                break;
            case '%':
                resultado = numero1 % numero2;
                break;
            case '^':
                resultado = pow(numero1, numero2);
                break;
        }
        cout << numero1 << " " << operador << " " << numero2 << " = " << resultado << endl;
        cout << "Escriba una operacion entre enteros: ";
        cin >> numero1;
    }
}