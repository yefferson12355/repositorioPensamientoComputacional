
 #include <iostream>

 using namespace std;

int main() {
    /*
    Escribir un programa que solicite al usuario una
    cantidad y luego itere la cantidad de veces dada.
    En cada iteraci�n, solicitar al usuario que ingrese
    un n�mero. Al finalizar, mostrar la suma de
    todos los n�meros ingresados.
    */



    // Solicitar al usuario una cantidad
    int cantidad;
    cout << "Ingrese una cantidad: ";
    cin >> cantidad;

    // Variables para la suma y el n�mero ingresado en cada iteraci�n
    int suma = 0;
    int numero;

    // Iterar la cantidad de veces dada
    for (int i = 0; i < cantidad; ++i) {
        // Solicitar al usuario que ingrese un n�mero
        cout << "Ingrese un numero en la iteracion " << i + 1 << ": ";
        cin >> numero;

        // Sumar el n�mero ingresado al total
        suma += numero;
    }

    // Mostrar la suma de todos los n�meros ingresados
    cout << "La suma de los numeros ingresados es: " << suma <<endl;

    return 0;
}
