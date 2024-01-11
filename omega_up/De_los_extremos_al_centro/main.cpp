#include <iostream>


using namespace std;

int main() {
    // Entrada de datos
    int n, p;
    //cout << "Ingrese la cantidad de tareas y el tiempo para la tarea olvidada (n p): ";
    cin >> n >> p;

    int tiempos[n];

    //cout << "Ingrese el tiempo para cada tarea separado por espacios: ";
    for (int i = 0; i < n; ++i) {
        //int tiempo;
        cin >> tiempos[i];
        //tiempos.push_back(tiempo);
    }

    // Procesamiento de datos
    int tareas_pendientes = 0;
    for (int i = 0; i < n; ++i) {
        //cout<<tiempos[i];
        if (tiempos[i] > p) {
            tareas_pendientes++;
        }
    }

    // Salida de resultados
    cout << tareas_pendientes;
    // "Cantidad de tareas que Diego debe terminar antes de acomodar la tarea olvidada: " <<
    return 0;
}
