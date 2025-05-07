
 #include <iostream>

 using namespace std;

int main() {
    /*
    Escribir un programa que solicite al usuario una
    cantidad y luego itere la cantidad de veces dada.
    En cada iteración, solicitar al usuario que ingrese
    un número. Al finalizar, mostrar la suma de
    todos los números ingresados.
    */



    // Solicitar al usuario una cantidad
    int cantidad;
    cout << "Ingrese una cantidad: ";
    cin >> cantidad;

    // Variables para la suma y el número ingresado en cada iteración
    int suma = 0;
    int numero;

    // Iterar la cantidad de veces dada
    for (int i = 0; i < cantidad; ++i) {
        // Solicitar al usuario que ingrese un número
        cout << "Ingrese un numero en la iteracion " << i + 1 << ": ";
        cin >> numero;

        // Sumar el número ingresado al total
        suma += numero;
    }

    // Mostrar la suma de todos los números ingresados
    cout << "La suma de los numeros ingresados es: " << suma <<endl;

    return 0;
}
