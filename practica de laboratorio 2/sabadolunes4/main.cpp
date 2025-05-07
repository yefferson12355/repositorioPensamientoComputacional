#include <iostream>

using namespace std;

int main() {
    // Solicitar al usuario que ingrese un número entero positivo
    int numero;
    //el do nos sirve para asegurarnos de que el usuario digite un numero entero positivo
    do {
        cout << "Ingrese un numero entero positivo: ";
        cin >> numero;

        if (numero <= 0) {
            cout << "Por favor, ingrese un numero entero positivo.\n";
        }
    /*
        while (numero <= 0): Después de ejecutar el bloque de código dentro
        de do, la condición numero <= 0 se evalúa. Si esta condición es verdadera
        (es decir, si el número ingresado por el usuario no es positivo),
        el bucle se repetirá y el bloque de código dentro de do se ejecutará
        nuevamente. Si la condición es falsa (es decir, si el número es positivo),
        el bucle do-while se detiene y la ejecución del programa continúa
        con el código que sigue después del bucle.
    */
    }
    while (numero <= 0);

    // Imprimir todos los números correlativos entre el ingresado y uno menos del doble del mismo
    int Finaldeoperacion = 2 * numero - 1;

    cout << "Numeros correlativos entre " << numero << " y " << Finaldeoperacion << ":\n";

    for (int i = numero; i <= Finaldeoperacion; ++i) {
        cout << i << " ";
    }

    return 0;
}

