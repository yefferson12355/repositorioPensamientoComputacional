#include<iostream>
using namespace std;
int matris[n][n];
int simetrico(){
    //comparacion si es matris simetrica
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matris[i][j]!=matris[j][i];){
            cout<<"No simétrica";
            }
        }
    }
    cout<<"Simetrica";
}

int main()
{
    /*Entrada: un numero m que sera el csao de prueba 
    seguido de esto un numero natural n indicando las matrices 
    y n lineas cada uno con n numero que representa las entradas de la matriz
    Salida:Simétrica
    No Simétrica
    */
    int m,n;
    cin>>m;
    //casos de numero de matrices m
    //primera matris
    for(int k=0;k<m;k++){
        cin>>n;
        
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matris[i][j];
        }
    }
    
    }
    return 0;
}
