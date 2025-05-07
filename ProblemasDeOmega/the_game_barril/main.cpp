#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "El juego del barril" << endl;
    int pos=0;
    int tam;
    int score[20];
    // cout<<"Ingrese el tamaño de barril y ingrese la posicion a entrar"<<endl;
    //tamaño del barril
    cin>>tam;
    cin>>pos;
    if(tam<=2*pow(10,6)){
        for(int i=0;i<tam;i++)
            {
                cin>>score[i];

            }


    }
    else{
    return 1;
    }
    cout<<"el pezcal "<<pos<<" se encuentra en Ni "<<score[pos-1];



    return 0;
}
