#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    //Volumenes de esferas, cono, cilindro, cubo, piramide
    //Perimetros de octaedro,cuadrado,circulo,triangulo
    //declarar las variables
    int num;
    //pedir los numeros para que entre  a los casos y guardar el numero
    cout<<endl;
    //para que regrese al main en la consola y pregunte por otro caso
    cout<<"VOLUMENES"<<endl;
    cout<<"precione 1 para volumen de la esfera "<<endl;
    cout<<"precione 2 para volumen de la cono "<<endl;
    cout<<"precione 3 para volumen de la cilindro "<<endl;
    cout<<"precione 4 para volumen de la cubo "<<endl;
    cout<<"precione 5 para volumen de la piramide "<<endl;
    cin>>num;
    cout<<endl;
    //que guarde segun lo que precione
    switch(num){
    case 1:
        {
            //volumen de esfera
            int rad;
            double vol;
            cout<<"VOLUMEN : ESFERA"<<endl;
            cout<<"Ingrese el radio de la esfera :"<<endl;
            cin>>rad;
            vol= (4/3*3.1416)*pow(rad,3);
            cout<<"El volumen de la esfera es :"<<vol<<endl;
            break;

        }
    case 2:
        {
        //volumen de cono
        int radio=0,altura=0;
        double pi=3.1416,vol=0;
        cout<<"VOLUMEN : CONO "<<endl;

        cout<<"Ingrese el radio"<<endl;
        cin>>radio;
        cout<<"Ingrese la altura"<<endl;
        cin>>altura;
        vol=pi*(pow(radio,2)*altura)/3;
        //Π * radio al cuadrado * altura/3 en metros
        cout<<"El volumen es: "<<vol<<endl;

        break;
        }
    case 3:
      {
          //volumen de cilindro
          int radio=0,altura=0;
          double pi=3.1416 ,vol=0;
          cout<<"VOLUMEN :CILINDRO"<<endl;
          cout<<"ingrese la altura:"<<endl;
          cin>>altura;
          cout<<"ingrese la radio:"<<endl;
          cin>>radio;
          vol=pi*(pow(radio,2)*altura);
          cout<<"El volumen es:"<<vol<<endl;
          //pi por radio al cuadrado por altura
          break;
      }
    case 4:
        {
            //Volumen de cubo
            //perimetro al cubo
            cout<<"VOLUMEN DE CUBO"<<endl;
            double per,vol;
            cout<<"Ingrese el perimetro :"<<endl;
            cin>>per;
            vol=pow(per,3);
            cout<<"el volumen es :"<<vol<<endl;
            break;

        }
    case 5:
        {
            //volumen de piramide
            // un tercio por area de la base de cuadrado al cuadrado por altura
            cout<<"VOLUMEN : PIRAMIDE "<<endl;
            int lad=0,areaB=0,altura=0;
            double vol=0;
            cout<<"Ingrese el lado de la base de la piramide :"<<endl;
            cin>>lad;
            cout<<"Ingrese la altura de la piramide :"<<endl;
            cin>>altura;
            areaB=pow(lad,2);
            /*el 1 lo considera con entero ..para que la opecion sea completa es 1.0 para que lo tome como flotante y se a
            operacion flotante*/
            vol=1.0/3.0*(areaB*altura);
            cout<<"El volumen es :"<<vol<<endl;
            break;

        }
    default:cout<<"no determinado"<<endl;


    }




   return main();
}
