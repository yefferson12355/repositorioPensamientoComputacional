#include <iostream>

using namespace std;
//realiza las areas de :triangulos ,circulo ,cuadrados  y rectangulo//
int main()
{   //Inicializar las variables
    int num;
    cout<<endl;
    cout<<"Ingrese la operacion de area que  quiere hacer"<<endl;
    cout<<"1 triangulo"<<endl;
    cout<<"2 circulo"<<endl;
    cout<<"3 cuadrado"<<endl;
    cout<<"4 rectangulo"<<endl;
    cin >>num;
    cout<<endl;
    switch(num){
        case 1:
        {
            //Inicializar las variables
            int bas=0,alt=0,area=0;
            //Area de triangulos //
            cout<<"Area de triangulo"<<endl;
            cout<<"ingrese la base :"<<endl;
            cin>>bas;
            cout<<"ingrese la altura :"<<endl;
            cin>>alt;
            area=(bas*alt)*0.5;
            cout<<"la area es :"<<area<<endl;
        }

        break;
        case 2:
        {

            /*Inicialize las variables del circulo
            en cero es buena practica*/
            //Area de circulo


            int radio=0;
            double Area=0;
            cout<<"Area de circulo"<<endl;
            cout<<"ingrese el radio :"<<endl;
            cin>>radio;
            Area=radio*radio *3.1416;
            cout<<"El area es:"<<Area<<endl;
        }
        break;
        case 3:
        {
            int bas=0,alt=0,area=0;
            //Area de cuadrado //
            cout<<"Area de cudrado "<<endl;
            cout<<"ingrese la base :"<<endl;
            cin>>bas;
            cout<<"ingrese la altura :"<<endl;
            cin>>alt;
            area=bas*alt;
            cout<<"la area es :"<<area<<endl;

            break;
        }
        case 4:
        {
            int bas=0,alt=0,area=0;
            //Area de rectangulo//
            cout<<"Area de rectangulo"<<endl;
            cout<<"ingrese la base :"<<endl;
            cin>>bas;
            cout<<"ingrese la altura :"<<endl;
            cin>>alt;
            area=bas*alt;
            cout<<"la area es :"<<area<<endl;

            break;
        }
        default :cout<<"Digite el numero dependiente al rango"<<endl;

    }


    return main();
}
