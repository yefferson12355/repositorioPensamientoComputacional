#include<iostream>

using namespace std;

int main()
{
    //entrada: Numero N
    int Nnumero=0;
    //la cantidad de Divisores
    int Divisores=1;
    cin>>Nnumero;
    for (int i=Nnumero/2;i>=1;i--)
    {
        if(Nnumero%i==0)
        {
            Divisores++;
        }
    }
    cout<<Divisores;
    return 0;
}
