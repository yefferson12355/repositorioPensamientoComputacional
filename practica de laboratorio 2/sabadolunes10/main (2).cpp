#include <iostream>

int main() {
    using namespace std;

    // Inicializar variables
    int numero;
    int sumatoriaNegativos = 0;
    int cantidadPositivos = 0;
    int sumaPositivos = 0;

    // Solicitar al usuario ingresar 6 n�meros
    cout << "Ingrese 6 numeros enteros (positivos o negativos):" << endl;

    for (int i = 0; i < 6; ++i) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numero;

        // Verificar si el n�mero es negativo
        if (numero < 0) {
            sumatoriaNegativos += numero;
        }
        // Verificar si el n�mero es positivo
        else if (numero > 0) {
            sumaPositivos += numero;
            cantidadPositivos++;
        }
    }

    // Calcular el promedio de los n�meros positivos (evitando la divisi�n por cero)
    double promedioPositivos = cantidadPositivos != 0 ? sumaPositivos / static_cast<double>(cantidadPositivos) : 0.0;

    // Mostrar resultados
    cout << "La sumatoria de los numeros negativos es: " << sumatoriaNegativos << endl;
    cout << "El promedio de los numeros positivos es: " << promedioPositivos << endl;

    return 0;
}
