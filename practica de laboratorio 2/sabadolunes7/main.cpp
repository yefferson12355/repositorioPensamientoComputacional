#include <iostream>

int main() {
    using namespace std;

    // Solicitar al usuario que ingrese una frase
    cout << "Ingrese una frase: ";
    string frase;
    cin >> frase;

    // Contadores para la cantidad de vocales en mayúsculas y minúsculas
    int contadorVocalesMayusculas = 0;
    int contadorVocalesMinusculas = 0;

    // Iterar a través de la frase y contar las vocales
    for (char caracter : frase) {
        // Verificar si el carácter es una vocal en mayúscula
        if (caracter == 'A' || caracter == 'E' ||
            caracter == 'I' || caracter == 'O' ||
            caracter == 'U') {
            contadorVocalesMayusculas++;
        }
        // Verificar si el carácter es una vocal en minúscula
        else if (caracter == 'a' || caracter == 'e' ||
                 caracter == 'i' || caracter == 'o' ||
                 caracter == 'u') {
            contadorVocalesMinusculas++;
        }
    }

    // Imprimir la cantidad de vocales en mayúsculas y minúsculas
    cout << "Cantidad de vocales en mayusculas: " << contadorVocalesMayusculas << endl;
    cout << "Cantidad de vocales en minusculas: " << contadorVocalesMinusculas << endl;

    return 0;
}
