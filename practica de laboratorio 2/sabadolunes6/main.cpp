ff#include<iostream>


int main() {
    using namespace std;

    string frase;
    // Solicitar al usuario que ingrese una frase
    cout << "Ingrese una frase: ";
    /* la función getline solo funciona con cadenas de caracteres (string) en C++.
    string line; getline(cin, line) */

    getline(cin,frase);
// Imprimir las vocales que aparecen en la frase (sin repetirlas)
    cout << " Vocales de la frase : ";
    // Verificar si el carácter es una vocal (mayúscula o minúscula)
    bool vocal_repetida = false;
    for (int i = 0; i < frase.length(); i++) {
        //la funcion length es para saber la longitud de una cadena

    char letra = frase[i];

        if (letra == 'a'  || letra == 'A' ||
            letra == 'e'  || letra == 'E' ||
            letra == 'i'  || letra == 'I' ||
            letra == 'o'  || letra == 'O' ||
            letra == 'u'  || letra == 'U')
           if (vocal_repetida=true) {
            // La letra "a" se ha repetido
            break;}

        //ahora solo queremos que imprima una sola vez las vocales

        {
            cout <<letra << " ";
        }

    }


    cout<<endl;

    return 0;
}

