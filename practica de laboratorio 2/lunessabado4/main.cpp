#include <iostream>

using namespace std;

int main() {
    // Solicitar al usuario que ingrese un n�mero entero positivo
    int numero;
    //el do nos sirve para asegurarnos de que el usuario digite un numero entero positivo
    do {
        cout << "Ingrese un numero entero positivo: ";
        cin >> numero;

        if (numero <= 0) {
            cout << "Por favor, ingrese un numero entero positivo.\n";
        }
    /*
        while (numero <= 0): Despu�s de ejecutar el bloque de c�digo dentro
        de do, la condici�n numero <= 0 se eval�a. Si esta condici�n es verdadera
        (es decir, si el n�mero ingresado por el usuario no es positivo),
        el bucle se repetir� y el bloque de c�digo dentro de do se ejecutar�
        nuevamente. Si la condici�n es falsa (es decir, si el n�mero es positivo),
        el bucle do-while se detiene y la ejecuci�n del programa contin�a
        con el c�digo que sigue despu�s del bucle.
    */
    }
    while (numero <= 0);

    // Imprimir todos los n�meros correlativos entre el ingresado y uno menos del doble del mismo
    int Finaldeoperacion = 2 * numero - 1;

    cout << "Numeros correlativos entre " << numero << " y " << Finaldeoperacion << ":\n";

    for (int i = numero; i <= Finaldeoperacion; ++i) {
        cout << i << " ";
    }

    return 0;
}

