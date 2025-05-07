#include <iostream>

int main() {
    using namespace std;

    // Inicializar la variable para almacenar la sumatoria
    int sumatoria = 0;

    // Iterar desde 0 hasta 100 e ir acumulando la sumatoria de múltiplos de 3
    for (int i = 0; i <= 100; i += 3) {
        sumatoria += i;
    }

    // Mostrar la sumatoria
    cout << "La sumatoria de los multiplos de 3 entre 0 y 100 es: " << sumatoria << endl;

    return 0;
}
