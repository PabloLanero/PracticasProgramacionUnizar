/******************************************************************************
 * Curso de Programación 1. Tema 1
 * Autores: Miguel Ángel Latre
 * Modificado por: Pablo Lanero Perez
 * Resumen: Tareas 3 y 4
 *****************************************************************************/
#include <iostream>
using namespace std;

/*
 * Programa que solicita un número entero al usuario y lo escribe en pantalla.
 */
int main() {
    /*
     * Este codigo es el correspondiente de la tarea 3
     */
    // cout << "Escriba un entero: ";
    
    // int numero;
    // cin >> numero;

    // cout << "Escriba otro entero: ";
    
    // int numero2;
    // cin >> numero2;
    // cout << "Su suma es: " << numero + numero2 << endl;

    cout << "Escriba dos numeros separados por un espacio: ";
    // Recogemos variables
    int numero1;
    cin >> numero1;
    int numero2;
    cin >> numero2;
    // No me creo que con un espacio sepa separarlos (Preguntar como es que sabe separarlo el codigo al ser compilado)
    cout << "Su suma es: " << numero1 + numero2 << endl;
}
