#include <iostream>

using namespace std;

int main()
{
    //declaracion de las variables de los dos matrices incluyendo la resultante
    int n;
    cin>>n;
    int matriz1[n][n];
    int matriz2[n][n];
    int matrizsuma[n][n];
    int matrizresta[n][n];
    int matrizmultiplicacion[n][n];
    //asi es como ponemos la variable n para que la dimension sea una...columna e fila

    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
             cin>>matriz1[i][j];

        }

    }
    //segunda matriz
    cin>>n;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
             cin>>matriz2[i][j];

        }

    }
    //la operacion suma ..se hace por dentro del programa
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            matrizsuma[i][j]=matriz1[i][j]+matriz2[i][j];//la operacion

        }
    }

    //la operacion de resta
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            matrizresta[i][j]=matriz1[i][j]-matriz2[i][j];//la operacion
        }
    }

    //la operacion de multiplicacion
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrizmultiplicacion[i][j] = 0;
            for (int z = 0; z < n; z++) {
                matrizmultiplicacion[i][j] += matriz1[i][z] * matriz2[z][j];
            }
        }
    }
    cout<<"suma"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                cout<< matrizsuma[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"resta"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                cout<< matrizresta[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"multiplicacion"<<endl;
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                cout<< matrizmultiplicacion[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;


    return 0;
}
