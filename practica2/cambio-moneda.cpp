#include <iostream>

using namespace std;

int main() {
    cout << "Escribe una cantidad de dinero no negativa de dinero en euros: ";
    // Recuerda preguntar porque salen muchos 9s al depurarlo
    double conversion = 178.737;
    // 0.0030000000000000001 ???
    double dinero;
    cin >> dinero;
    if (dinero < 0){
        cout << "Has introducido una cantidad negativa"<< endl << "Saliendo del programa...";
        return 1;

    }
    // Conseguimos los euros con un simple casteo
    int euros = (int)dinero;
    // Ahora vamos a poner centimos como un entero
    double centimos = (dinero - euros) *100;
    centimos += centimos - (int)centimos >= 0.5 ? 1 : 0;
    if(centimos >=100 ){
        euros++;
        centimos -= 100;
    }
    // Calculamos yenes
    double yenes = dinero*conversion;
    if ((yenes - (int)yenes) >=0.5) yenes++;
    // Imprimimos resultado (No intentar calcularlos en medio del print, puede dar problemas)
    cout << "Son " << euros << " euros y " << (int)centimos << " centimos que equivalen a "
         << (int)(yenes) << " yenes" << endl;  
}