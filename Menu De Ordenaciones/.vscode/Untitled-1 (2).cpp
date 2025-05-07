#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include<stdlib.h>
#include<locale.h>

#include <stdio.h>



using namespace std;
//grafiquito
void drawBar(int value) {
    // Utilizamos el carácter '#' para representar una barra en el gráfico
    for (int i = 0; i < value; ++i) {
        cout << '#';
    }
    cout << endl;
}

// Prototipos de funciones de ordenamiento
void bubbleSort(int arr[], int size, bool ascending, int &cycles);
void insertionSort(int arr[], int size, bool ascending, int &cycles);
void selectionSort(int arr[], int size, bool ascending, int &cycles);
void countingSort(int arr[], int size, bool ascending, int &cycles);
void quickSort(int arr[], int low, int high, bool ascending, int &cycles);
void mergeSort(int arr[], int low, int high, bool ascending, int &cycles);


// Función para imprimir el array
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
}

// Función para llenar el array con números aleatorios
void fillArrayRandom(int arr[], int size)
{
    srand(time(NULL));
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 100;
    }
}

// Implementación de la función de ordenamiento bubbleSort
void bubbleSort(int arr[], int size, bool ascending, int &cycles)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1]))
            {
                swap(arr[j], arr[j + 1]);
            }
            cycles++;
        }
    }
}

// Implementación de la función de ordenamiento insertionSort
void insertionSort(int arr[], int size, bool ascending, int &cycles)
{
    for (int i = 1; i < size; ++i)
    {
        int key = arr[i];
        int j = i - 1;

        while ((j >= 0) && ((ascending && arr[j] > key) || (!ascending && arr[j] < key)))
        {
            arr[j + 1] = arr[j];
            --j;
            cycles++;
        }
        arr[j + 1] = key;
    }
}

// Implementación de la función de ordenamiento selectionSort
void selectionSort(int arr[], int size, bool ascending, int &cycles)
{
    for (int i = 0; i < size - 1; ++i)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j)
        {
            if ((ascending && arr[j] < arr[minIndex]) || (!ascending && arr[j] > arr[minIndex]))
            {
                minIndex = j;
            }
            cycles++;
        }
        swap(arr[minIndex], arr[i]);
    }
}

// Implementación de la función de ordenamiento countingSort
void countingSort(int arr[], int size, bool ascending, int &cycles)
{
    int maxElement = *max_element(arr, arr + size);
    int minElement = *min_element(arr, arr + size);

    int range = maxElement - minElement + 1;
    int count[range] = {0};

    for (int i = 0; i < size; ++i)
    {
        count[arr[i] - minElement]++;
        cycles++;
    }

    int outputIndex = 0;
    for (int i = 0; i < range; ++i)
    {
        while (count[i] > 0)
        {
            arr[outputIndex++] = i + minElement;
            count[i]--;
            cycles++;
        }
    }
}

// Función de partición para quickSort
int partition(int arr[], int low, int high, bool ascending, int &cycles)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; ++j)
    {
        if ((ascending && arr[j] < pivot) || (!ascending && arr[j] > pivot))
        {
            ++i;
            swap(arr[i], arr[j]);
        }
        cycles++;
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Implementación de la función de ordenamiento quickSort
void quickSort(int arr[], int low, int high, bool ascending, int &cycles)
{
    if (low < high)
    {
        int pi = partition(arr, low, high, ascending, cycles);

        quickSort(arr, low, pi - 1, ascending, cycles);
        quickSort(arr, pi + 1, high, ascending, cycles);
    }
}

// Función de fusión para mergeSort
void merge(int arr[], int low, int middle, int high, bool ascending, int &cycles)
{
    int n1 = middle - low + 1;
    int n2 = high - middle;

    int left[n1], right[n2];

    for (int i = 0; i < n1; ++i)
    {
        left[i] = arr[low + i];
    }
    for (int j = 0; j < n2; ++j)
    {
        right[j] = arr[middle + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = low;

    while (i < n1 && j < n2)
    {
        if ((ascending && left[i] <= right[j]) || (!ascending && left[i] >= right[j]))
        {
            arr[k] = left[i];
            ++i;
        }
        else
        {
            arr[k] = right[j];
            ++j;
        }
        ++k;
        cycles++;
    }

    while (i < n1)
    {
        arr[k] = left[i];
        ++i;
        ++k;
        cycles++;
    }

    while (j < n2)
    {
        arr[k] = right[j];
        ++j;
        ++k;
        cycles++;
    }
}

// Implementación de la función de ordenamiento mergeSort
void mergeSort(int arr[], int low, int high, bool ascending, int &cycles)
{
    if (low < high)
    {
        int middle = low + (high - low) / 2;

        mergeSort(arr, low, middle, ascending, cycles);
        mergeSort(arr, middle + 1, high, ascending, cycles);

        merge(arr, low, middle, high, ascending, cycles);
    }
}

// Función principal

int main()
{
    system("Color 4F");
    //color de la consola
    //system("Color F0");
    // Tamaño del array
    int size;
    cout <<"|                             MENU DE ORDENACIONES                         |"<<endl;

    cout <<"Ingrese el tama"<<char(164)<<"o del array: "<<endl<<endl;
    cin >> size;

    if (size <= 0)
    {
        cout << "Tamaño no válido. Saliendo del programa.\n";
        return 1;
    }

    // Crear el array
    int arr[size];

    // Llenar el array con números aleatorios
    fillArrayRandom(arr, size);

    // Contador de ciclos
    int cycles = 0;

    // Menú de selección ascendente o descendente
    int choice;
    bool ascending;
    cout  << "Seleccione el orden:"<<endl;
    cout << "1. Ascendente\n2. Descendente\n";
    cout << "Ingrese el numero correspondiente al orden: ";
    cin >> choice;
    ascending = (choice == 1);

    // Imprimir el array original
    cout << "Array original: ";
    printArray(arr, size);
    cout << endl;

    // Ejecutar y mostrar resultados de cada método de ordenamiento
    cout << "Resultados de los metodos de ordenamiento:\n";
    cout << left << setw(15) << "Metodo" << setw(26) << "Array ordenado" << setw(0) << "Ciclos\n";
    cout << "-----------------------------------------------\n";

    cout << left << setw(15) << "Bubble Sort" << " ==> ";
    int arr1[size];
    copy(arr, arr + size, arr1);
    bubbleSort(arr1, size, ascending, cycles);
    printArray(arr1, size);
    cout << setw(9) <<"===> "<<cycles << endl;
    int grafico1=cycles;
    cycles = 0;


    cout << left << setw(15) << "Insertion Sort" << " ==> ";
    int arr2[size];
    copy(arr, arr + size, arr2);
    insertionSort(arr2, size, ascending, cycles);
    printArray(arr2, size);
    cout << setw(9) <<"===> "<<cycles << endl;
    int grafico2=cycles;
    cycles = 0;

    cout << left << setw(15) << "Selection Sort" << " ==> ";
    int arr3[size];
    copy(arr, arr + size, arr3);
    selectionSort(arr3, size, ascending, cycles);
    printArray(arr3, size);
    cout << setw(9) <<"===>"<<cycles << endl;
    int grafico3=cycles;
    cycles = 0;

    cout << left << setw(15) << "Counting Sort" << " ==> ";
    int arr4[size];
    copy(arr, arr + size, arr4);
    countingSort(arr4, size, ascending, cycles);
    printArray(arr4, size);
    cout << setw(9) <<"===>"<<cycles << endl;
    int grafico4=cycles;
    cycles = 0;

    cout << left << setw(15) << "Quick Sort" << " ==> ";
    int arr5[size];
    copy(arr, arr + size, arr5);
    quickSort(arr5, 0, size - 1, ascending, cycles);
    printArray(arr5, size);
    cout << setw(9) <<"===>"<<cycles << endl;
    int grafico5=cycles;
    cycles = 0;

    cout << left << setw(15) << "Merge Sort" << " ==> ";
    int arr6[size];
    copy(arr, arr + size, arr6);
    mergeSort(arr6, 0, size - 1, ascending, cycles);
    printArray(arr6, size);
    cout << setw(9) <<"===>"<<cycles << endl;
    int grafico6=cycles;

    //GRAFIQUITO
    cout <<endl;
    cout<<"GRAFICO";
    cout <<endl;
    cout<<endl;
    cout << left << setw(15) << "Bubble Sort" << " ==> ";;drawBar(grafico1);
    cout << left << setw(15) << "Insertion Sort" << " ==> ";;drawBar(grafico2);
    cout << left << setw(15) << "Selection Sort" << " ==> ";;drawBar(grafico3);
    cout << left << setw(15) << "Counting Sort" << " ==> ";;drawBar(grafico4);
    cout << left << setw(15) << "Quick Sort" << " ==> ";;drawBar(grafico5);
    cout << left << setw(15) << "Merge Sort" << " ==> ";;drawBar(grafico6);

    /*
    for (int i = 0; i < cantidadNumeros; ++i)
    {
        cin >> numeros[i];
    }
   */
    // Encontrar el menor número en el arreglo
    cout<<endl;
    int cantidadNumeros[]={grafico1,grafico2,grafico3,grafico4,grafico5,grafico6};
    int menor = cantidadNumeros[0]; // Asumir que el primer número es el menor

    for (int i = 0; i < 6; ++i)
    {
        if (cantidadNumeros[i] < menor)
        {
            menor = cantidadNumeros[i];
        }
    }

    if(menor==grafico1)
    {
        cout<<"Bubble Sort es el mejor metodo sus ciclos son: "<<grafico1<<endl;
    }
    if(menor==grafico2)
    {
        cout<<"Insertion Sort es el mejor metodo sus ciclos son: "<<grafico2<<endl;
    }
    if(menor==grafico3)
    {
        cout<<"Selection Sortes el mejor metodo sus ciclos son: "<<grafico3<<endl;
    }
    if(menor==grafico4)
    {
        cout<<"Counting Sort es el mejor metodo sus ciclos son: "<<grafico4<<endl;
    }
    if(menor==grafico5)
    {
        cout<<"Quick Sort es el mejor metodo sus ciclos son: "<<grafico5<<endl;
    }
     if(menor==grafico6)
    {
        cout<<"Merge Sort es el mejor metodo sus ciclos son: "<<grafico6<<endl;
    }

    return 0;
}