#include <iostream>

using namespace std;

int main()
{
    //hallar el perimetro de un octaegro, cuadrado, circulo y triangulo
    //PERIMETRO DE UN OCTAEDRO
    int num;
    cout<<endl;
    cout<<"    PERIMETROS"<<endl;
    cout<<"Ingrese 1 para octaedro "<<endl;
    cout<<"Ingrese 2 para cuadrado "<<endl;
    cout<<"Ingrese 3 para circulo "<<endl;
    cout<<"Ingrese 4 para triangulo "<<endl;
    cin>>num;
    //Ahora haremos diferentes casos para cada uno de los perimetros
    switch(num){
        case 1:
        {
            //octaedro
            //P:24 veces la longitud de la arista

            int arist,peri;
            cout<<"      OCTAEDRO"<<endl;
            cout<<"Ingrese la longitud de una de las aristas"<<endl;
            cin>>arist;
            peri=arist*12;
            cout<<"El perimetro del octaedro es :"<<peri<<endl;
            break;
        }
        case 2:
        {
            break;
        }
        case 3:
        {
            break;
        }
        case 4:
        {

            break;
        }

    }

    return main();
}
