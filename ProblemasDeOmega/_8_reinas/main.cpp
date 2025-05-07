#include <iostream>

using namespace std;

int main()
{
    //Incluir matrices para el problema de 8 reinas
    int matris[8][8];
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            matris[i][j]=0;
        }
    }
    //posicion de N reinas inicializasos al principio
    //y respectivos coordenadas ,inicializado en uno
    int NumReinas;
    cin>>NumReinas;
    int cordX,cordY;
    for(int i=0;i<NumReinas;i++)
    {
        cin>>cordX>>cordY;
        //cordenadas
        matris[cordX-1][cordY-1]=1;
    }

    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cout<<matris[i][j];
        }
        cout<<endl;

    }
    return 0;
}
