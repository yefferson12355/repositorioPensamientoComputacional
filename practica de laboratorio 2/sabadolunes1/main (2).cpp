#include <iostream>

using namespace std;

int main()
{
    // Imprimir todos los dígitos decimales, del 0 al 9, utilizando una repetición.//
    //declaramos las variables de iniciacione en decimal
    double contador=0.0;
    //poner en double por que tipo de dato float no soporta tantos bits


    while(contador<=9.0)
    {
        cout<<contador<<endl;
        contador=contador+0.1;
    }

    return 0;
}
