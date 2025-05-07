

/*Entra un valor entero N, si P=0 imprime par,si p=1 imprime impar,N puede tendra que ser de 1 a  20 y P 0 y 1*/
//salida los pares o impares por un espacio separado//

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    // Verificar que el tamaño del arreglo sea válido
    if (N < 1 || N > 20) {
        //"El tamaño del arreglo debe estar entre 1 y 20. Saliendo del programa."//
        return 1;
    }

    // Declarar un arreglo para almacenar los elementos
    int arreglo[N];

    for (int i = 0; i < N; ++i) {
        cin >> arreglo[i];


        // Verificar que los elementos del arreglo estén entre 0 y 100
        if (arreglo[i] < 0 || arreglo[i] > 100) {
            //Los elementos del arreglo deben estar entre 0 y 100. Saliendo del programa//
            return 1;//
        }
    }

    int P;
    cin >> P;

    // Imprimir valores pares o impares según el valor de P
    if (P == 0) {

        for (int i = 0; i < N; ++i) {
            if (arreglo[i] % 2 == 0) {
                cout << " " << arreglo[i];
            }
        }
    } else if (P == 1) {

        for (int i = 0; i < N; ++i) {
            if (arreglo[i] % 2 != 0) {
                cout << " " << arreglo[i];
            }
        }
    } else {
   //El valor de P debe ser 0 o 1//
        return 1;  // Salir del programa con un código de error
    }



    return 0;
}
