#include <iostream>

using namespace std;

int main() {
    // Inicializar la variable para almacenar la sumatoria
    int sumatoria = 0;

    // Iterar desde 0 hasta 100 e ir acumulando la sumatoria
    for (int i = 0; i <= 100; ++i) {
        sumatoria += i;
    }

    // Mostrar la sumatoria
    cout << "La sumatoria de los numeros entre 0 y 100 es: " << sumatoria << std::endl;

    return 0;
}
