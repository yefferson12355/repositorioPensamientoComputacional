#include<iostream>
using namespace std;
int main()
{
    //entrada : una cadena de caracteres donde la suma de cada
    //letra es la suma del condigo ASCII 
    //salida:el numero de divisores de la suma de la cadema en codigo ASCII
   string a;
   int divisor=2;
   int contador=0;
    cin>>a;
    //Recorre cada caracter de la cadena, convierte cada caracter
    // a mayúsculas utilizando toupper y suma sus códigos ASCII al contador.
    for(int i=0;i<(int)a.length();++i){
    contador=contador+(char)toupper(a[i]);}
    //Utiliza un bucle para iterar desde 2 hasta la mitad del valor almacenado en contador.
    //Verifica si el valor en contador es divisible por i. Si es divisible, incrementa el contador de divisores.
    for(int i=2;i<=contador/2;++i) 
    if(contador%i==0)
    {
        divisor++;
    }
    cout<<divisor<<endl;
    
    return 0;
}
