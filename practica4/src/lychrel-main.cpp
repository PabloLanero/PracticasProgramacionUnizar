/******************************************************************************
 * Programación 1. Práctica 4
 * Autores: ------------- Pablo Lanero Perez -------------
 * Resumen: Programa que solicita un número natural al usuario y comprueba si
 *          converge a un capicúa al sumarle iterativamente su imagen especular
 *          o si podría ser un número de Lychrel.
 *****************************************************************************/

#include <iostream>
#include "naturales-grandes.hpp"

using namespace std;

/*
 * Pre:  «a», «b» y «suma» almacenan las representaciones de sendos números
 *       naturales de «NUM_DIGITOS» componentes, con las unidades en la
 *       componente 0, las decenas en la 1 y así sucesivamente, y con valor 0
 *       en las componentes superiores al dígito más significativo.
 * Post: Escribe en la pantalla el número de iteración «iteracion». Si
 *       «muchosDigitos» es «false», muestra la operación «a + b = suma» y
 *       actualiza «muchosDigitos» a «true» cuando «suma» tiene 20 o más
 *       cifras; si «muchosDigitos» es «true», escribe "...". Finaliza con un
 *       salto de línea.
 */
void escribirIteracion(const unsigned iteracion, const unsigned a[],
                     const unsigned b[], const unsigned suma[], bool &muchosDigitos){
    cout << "Iteracion " << iteracion << ": ";
        if(!muchosDigitos){
            escribirEnPantalla(a);
            cout << " + ";
            escribirEnPantalla(b);
            cout << " = ";
            escribirEnPantalla(suma);
            muchosDigitos = 20 <= numCifras(suma);
        }else{
            cout << "...";
        }
        cout << '\n';
}

/*
 * Programa que pide un número natural al usuario y comprueba si es un número
 * de Lychrel sumándole de forma iterativa su imagen especular hasta obtener un
 * capicúa o producirse desbordamiento, en cuyo caso asume que podría serlo.
 */
int main() {
    cout << "Escriba un numero natural: ";
    unsigned numero;
    unsigned iteracion = 0;
    cin >> numero;
    bool desbordamiento = false;
    bool demasiadosDigitos = false;
    unsigned a[NUM_DIGITOS], b[NUM_DIGITOS], suma[NUM_DIGITOS];
    convertir(numero,a);
    cout << "Iteracion " << iteracion << ": ";
    escribirEnPantalla(a);
    cout << endl;
    while(!desbordamiento && !esCapicua(a)){
        calcularImagen(a, b);
        sumar(a,b,suma,desbordamiento);
        iteracion++;
        escribirIteracion(iteracion,a,b, suma, demasiadosDigitos);
        copiar(suma, a);
    }
    if(esCapicua(a)){
        cout << numero << " no es un numero de Lychrel." << '\n';
    }else{
        cout << numero << " podria ser un numero de Lychrel." << '\n';
    }

}
