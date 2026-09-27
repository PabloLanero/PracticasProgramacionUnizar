#include <iostream>

using namespace std;

bool comprobarPunto(char punto){
    return punto == '.';
}

int main() {
    cout << "Escriba el identificador de la estancia: ";
    int planta, aula;
    char letra, punto;
    string tipoDeLetra, plantaTexto; 
    cin >> letra;
    cin >> punto;
    if(!comprobarPunto(punto)){
        cout << "El tipo de estancia y la planta se tienen que separar con un punto"<< endl;
        return 1;
    }
    cin >> planta;
    cin >> punto;
    if(!comprobarPunto(punto)){
        cout << "La planta y el número de estancia se tienen que separar con un punto."<< endl;
        return 1;
    }
    cin >> aula;
    if(aula <1){
        cout << "El número del espacio tiene que ser mayor o igual que 1." << endl;
        return 1;
    }
    // Cogemos el texto en funcion de la letra
    switch (letra) {
        case 'A':
            tipoDeLetra = "Aula";
            break;
        case 'D':
            tipoDeLetra = "Despacho";
            break;
        case 'S':
            tipoDeLetra = "Seminario";
            break;
        case 'L':
            tipoDeLetra = "Laboratorio";
            break;
        default:
            cout << "El tipo de estancia es incorrecto" << endl;
            return 1;
    }
    // Cogemos el texto en funcion de la planta
    switch (planta){
        case 0:
            plantaTexto = "planta baja";
            break;
        case 1:
            plantaTexto = "primera planta";
            break;
        case 2:
            plantaTexto = "segunda planta";
            break;
        case 3:
            plantaTexto = "tercera planta";
            break;
        case 4:
            plantaTexto = "cuarta planta";
            break;
        default:
            cout << "La planta tiene que estar comprendida entre 0 y 4.";
            return 1;
            
    }

    cout << tipoDeLetra << " numero " << aula << " de la " << plantaTexto << endl;
    // cout << letra << endl << planta << endl << aula;

    // string texto;
    // cin >> texto;
    // for (int i = 0; i < texto.length(); i++){
    // }
    // unsigned planta = to_integer<unsigned>(texto.at(2));
    // char edificio = texto[0];
    // unsigned planta, aula;
    // texto.substr(2,3) >> cin >> planta;

    // unsigned planta = texto[2];
    // unsigned aula = ((int)  texto.(4)) + (int)texto.at(5);
    // cout << edificio << endl << planta << endl << aula;
}

