/******************************************************************************
 * Curso de Programación 1. Práctica 3
 * Autores: Pablo Lanero Perez
 * Resumen: Programa que escribe en la pantalla el calendario de un determinado
 *          mes de un año, que se solicitan al usuario. El programa se asegura 
 *          de que el mes introducido está comprendido entre 1 y 12 y de que el
 *          año es igual o posterior a 1900.
 *          Clase de problemas correspondiente al tema 7 (diseño modular y
 *          descendente) y 3ª práctica.
 * Nota: Leer el fichero README.md, que contiene instrucciones para su 
 *       compilación y ejecución.
 *****************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
#include "fechas.hpp"
using namespace std;

const unsigned SEPARACION_DIAS = 4;     

/*
 * Pre:  1 ≤ mes ≤ 12
 * Post: Escribe en la pantalla el nombre (en mayúsculas) del mes
 *       correspondiente al valor del parámetro «mes».
 * Nota: Este código lo podrás comprender adecuadamente cuando hayamos visto
 *       los temas 9 (vectores) y 10 (cadenas de caracteres).
 */
void escribirNombreMes(unsigned mes) {
    const string NOMBRES_MES[12] = { "ENERO",
            "FEBRERO", "MARZO", "ABRIL", "MAYO", "JUNIO", "JULIO", "AGOSTO",
            "SEPTIEMBRE", "OCTUBRE", "NOVIEMBRE", "DICIEMBRE" };
    cout << NOMBRES_MES[mes - 1];
}
/**
 * Pre: 1 ≤ mes ≤ 12, 1900 ≤ agno
 * Post: Escribe el calendario del mes en el año en el se indica
 */
void escribirCalendario(unsigned mes, unsigned agno){
    cout << endl << endl << setw(22);
    escribirNombreMes(mes);
    cout << setw(6) << agno << endl << setw(SEPARACION_DIAS) << "L" << setw(SEPARACION_DIAS) << "M"
         << setw(SEPARACION_DIAS) << "X" << setw(SEPARACION_DIAS) << "J" << setw(SEPARACION_DIAS) << "V" 
         << setw(SEPARACION_DIAS) << "S" << setw(SEPARACION_DIAS) << "D" << endl 
         << "----------------------------" << endl;
    unsigned primerDia = diaDeLaSemana(1, mes, agno);
    cout << setw(SEPARACION_DIAS + (SEPARACION_DIAS * primerDia)) << 1;
    unsigned diasMes = diasDelMes(mes,agno);
    for (unsigned i = 2; i <= diasMes; i++){
        cout << setw(SEPARACION_DIAS) << i;
        if (diaDeLaSemana(i,mes,agno) == 6) {
            cout << endl;
        }
    }
    cout << endl;
}
/**
 * Pre: Pide mes y agno
 * Post: Metodo que pide al usuario que inicialice los valores de mes y año 
 * de forma correcta siendo mes entre 1 y 12 incluidos y agno siendo mayor que 1900
 * 
 */
void validarDatos(unsigned &mes, unsigned &agno){
    cout << "Introduzca el mes [1-12]: ";
    cin >> mes;
    while(mes < 1 || mes >12){
        cout << "El mes debe estar comprendido entre 1 y 12: ";
        cin >> mes;
    }
    cout << "Introduzca un año igual o posterior a 1900: ";
    cin >> agno;
    while(agno < 1900){
        cout << "El año debe ser igual o posterior a 1900: ";
        cin >> agno;
    }
}
/*
 * Esta es la funcion que se ejecuta
 */
int main() {
    unsigned mes, agno;
    validarDatos(mes, agno);
    escribirCalendario(mes, agno);
}
