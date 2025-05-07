#include<iostream>
using namespace std;
//Un divisor es una cantidad que divide a otra sin dejar residuo
//Para un numero n ,dos numeros siempre seran sus divisores 1 y n
//Escribe un programa que calcule todos los divisores de n

int main()
{
    //entrada : solo una linea con el valor de n
    int n;
    //salida : todos los divisores de n, empezando desde el mas grande al mas chico
    cin>>n;
    cout<<n<<endl;
    for(int i=n/2;i>=1;--i){
    if(n%i==0)
    cout<<i<<endl;
    }

    return 0;
}
