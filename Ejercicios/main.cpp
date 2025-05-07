//Operaciones
#include <cmath>
#include<iostream>
using namespace std;
//1.- Escriba un codigo para resolver la suma de dos numeros :
int main(){
int num1,num2;
    cout<<"suma de dos numeros "<<endl;
    cout<<"ingrese numero "<<endl;
    cin>>num1;
    cout<<"ingrese numero "<<endl;
    cin>>num2;
    cout<<"resultado  "<<endl<<num1+num2;

//2 escriba un codigo para resolver la resta de dos numeros :

    cout<<"resta de dos numeros "<<endl;
    cout<<"ingrese numero "<<endl;
    cin>>num1;
    cout<<"ingrese numero "<<endl;
    cin>>num2;
    cout<<"resultado  "<<endl<<num1-num2;
//3.-Escriba un codigo para resolver la division de dos numeros


    cout<<"division de dos nuneros"<<endl;
    cout<<"ingrese numero "<<endl;
    cin>>num1;
    cout<<"ingrese numero "<<endl;
    cin>>num2;
    if(num2==0)
    {
      cout<<"dividendo no valido"<<endl;
    }
    else
    cout<<"resultado  "<<endl<<endl<<num1/num2;
//4.-Escribe un codigo para resolver la multiplicacion de dos numeros.




    cout<<"multiplicacion de dos nuneros"<<endl;
    cout<<"ingrese numero "<<endl;
    cin>>num1;
    cout<<"ingrese numero "<<endl;
    cin>>num2;
    cout<<"resultado  "<<endl<<endl<<num1*num2;

//5.-determina el promedio de  las edades de 5 compañeros de tu salon

int edad1,edad2,edad3,edad4,edad5,promedio;

    cout<<"escribe edad 1"<<endl;
    cin>>edad1;
    cout<<"escribe edad 2"<<endl;
    cin>>edad2;
    cout<<"escribe edad 3"<<endl;
    cin>>edad3;
    cout<<"escribe edad 4"<<endl;
    cin>>edad4;
    cout<<"escribe edad 5"<<endl;
    cin>>edad5;
    promedio=(edad1+edad2+edad3+edad4+edad5)/5;
    cout<<"promedio "<<endl<<endl<<promedio;
//6.-escribe un codigo para resolver la siguiente formula de ecuacion cuadratica:
    int a,b,c;
    double raiz;
    double x1,x2;
    cout<<"ingrese valor de a"<<endl;
    cin>>a;
    cout<<"ingrese valor de b"<<endl;
    cin>>b;
    cout<<"ingrese valor de c"<<endl;
    cin>>c;
    raiz=(sqrt(pow(b,2))-4*a*c);
    x1 = ((-b+raiz)/2*a);
    x2 = ((-b-raiz)/2*a);
    cout<<"los resultados de x son :"<<x1<<","<<x2;


//7.-escriba un programa que te permita hallar el area de un triangulo :
float base,altura,area;

cout<<"     EL AREA DE UN TRIANGULO    "<<endl;

cout<<"ingrese el valor de la BASE del triangulo"<<endl;
cin>>base;
cout<<"ingrese el valor de la ALTURA del traingulo"<<endl;
cin>>altura;
area= (base*altura)/2;

cout<<"el area del triangulo es :"<<area<<endl;

//8. -Escriba un programa que te permita hallar el área de un circulo.

float pi,radio;
    //float area

cout<<"     EL AREA DE UN CIRCULO   "<<endl;

cout<<"ingrese el valor del radio del circulo "<<endl;
cin>>radio;
pi=3.14159265;
area= pi*pow(radio,2);

cout<<"el area del circulo es :"<<area<<endl;

//9. Escriba un programa que te permita hallar el volumen de un circulo.

float volumen,radioCUB;
//float pi,radio;
cout<<"     EL  VOLUMEN DE UNA ESFERA   "<<endl;

cout<<"ingrese el valor del radio de la esfera "<<endl;
cin>>radio;
pi=3.14159265;
radioCUB=radio*radio*radio;
volumen= 1.33*pi*radioCUB;

cout<<"el volumen de la esfera es :"<<volumen<<endl;
cout<<"EL CIRCULO NO TIENE VOLUMEN"<<endl;

//10.- Escriba un programa que te permita hallar el área de un paralelogramo.

//float altura,base,area;

cout<<"     EL AREA DE UN PARALELOGRAMO   "<<endl;

cout<<"ingrese el valor de la base del paralelogramo "<<endl;
cin>>base;
cout<<"ingrese el valor de la altura del paralelogramo "<<endl;
cin>>altura;
area=base*altura;
cout<<"el area del paralelogramo es :"<<area<<endl;

//11.- Escriba un programa que te permita hallar el volumen de una esfera.

//float pi,radio,volumen,radioCUB;

cout<<"     EL  VOLUMEN DE UNA ESFERA   "<<endl;

cout<<"ingrese el valor del radio de la esfera "<<endl;
cin>>radio;
pi=3.14159265;
radioCUB=radio*radio*radio;
volumen= 1.33*pi*radioCUB;

cout<<"el volumen de la esfera es :"<<volumen<<endl;

//12.-Escriba un programa que te permita determinar la cantidad de años,meses y dias  de una persona en razon a su fecha de nacimiento :

    int diaN,mesN,anioN;
    int diaA,mesA,anioA;
    int dia,mes,anio;
    cout<<"   CALCULA TU EDAD MESES Y DIAS VIVIDOS "<<endl;
    cout<<"      ingrese su fecha de nacimiento"<<endl;
    cout<<"              dia/mes/anio"<<endl;
    cin>>diaN>>mesN>>anioN;
    cout<<"           ingrese fecha actual"<<endl;
    cin>>diaA>>mesA>>anioA;

    if (mesA>mesN&diaA>diaN){
        anio=anioA-anioN;
        mes=mesA-mesN;
        dia=diaA-diaN;
        cout<<"tienes "<<anio<<" anios"<<endl;
        cout<<"tienes "<< mes<<" meses"<<endl;
        cout<<"tienes "<<dia<<" dias"<<endl;

    }
    if (mesA>mesN&diaA<diaN){
        anio=anioA-anioN;
        mes=(mesA-mesN)-1;
        dia=30-(diaN-diaA);
        cout<<"tienes "<<anio<<" anios"<<endl;
        cout<<"tienes "<< mes<<" meses"<<endl;
        cout<<"tienes "<<dia<<" dias"<<endl;
    }
    if (mesA<mesN&diaA>diaN){
        anio=(anioA-anioN)-1;
        mes=12-(mesN-mesA);
        dia=diaA-diaN;
        cout<<"tienes "<<anio<<" anios"<<endl;
        cout<<"tienes "<< mes<<" meses"<<endl;
        cout<<"tienes "<<dia<<" dias"<<endl;
    }
    if (mesA<mesN&diaA<diaN){
        anio=(anioA-anioN)-1;
        mes=(12-(mesN-mesA)-1);
        dia=30-(diaN-diaA);
        cout<<"tienes "<<anio<<" anios"<<endl;
        cout<<"tienes "<< mes<<" meses"<<endl;
        cout<<"tienes "<<dia<<" dias"<<endl;
    }

    cout<<"todo es un aproximado __puede varias de uno a dos dias "<<endl;
    cout<<"fin "<<endl;
//13.-Escriba un programa que te permita determinar en qué etapa de la vida está en razón a
//su fecha de nacimiento de acuerdo a la gráfica :

    //int diaN,mesN,anioN;
    //int diaA,mesA,anioA;
    //int dia,mes,anio;
    int edad;
    cout<<"   CALCULAR LA ETAPA DE LA VIDA EN LA QUE ESTAS   "<<endl;
    cout<<"      ingrese su fecha de nacimiento"<<endl;
    cout<<"              dia/mes/anio"<<endl;
    cin>>diaN>>mesN>>anioN;
    cout<<"           ingrese fecha actual"<<endl;
    cin>>diaA>>mesA>>anioA;

    if (mesA>mesN&diaA>diaN){
        anio=anioA-anioN;
        mes=mesA-mesN;
        dia=diaA-diaN;
        cout<<"tienes "<<anio<<" anios"<<endl;
        cout<<"tienes "<< mes<<" meses"<<endl;
        cout<<"tienes "<<dia<<" dias"<<endl;
        cout<<" POR LO TANTO USTED ESTA EN LA ETAPA DE "<<endl;
    }

    if (mesA>mesN&diaA<diaN){
        anio=anioA-anioN;
        mes=(mesA-mesN)-1;
        dia=30-(diaN-diaA);
        cout<<"tienes "<<anio<<" anios"<<endl;
        cout<<"tienes "<< mes<<" meses"<<endl;
        cout<<"tienes "<<dia<<" dias"<<endl;
        cout<<" POR LO TANTO USTED ESTA EN LA ETAPA DE "<<endl;
    }

    if (mesA<mesN&diaA>diaN){
        anio=(anioA-anioN)-1;
        mes=12-(mesN-mesA);
        dia=diaA-diaN;
        cout<<"tienes "<<anio<<" anios"<<endl;
        cout<<"tienes "<< mes<<" meses"<<endl;
        cout<<"tienes "<<dia<<" dias"<<endl;
        cout<<" POR LO TANTO USTED ESTA EN LA ETAPA DE "<<endl;
    }

    if (mesA<mesN&diaA<diaN){
        anio=(anioA-anioN)-1;
        mes=(12-(mesN-mesA)-1);
        dia=30-(diaN-diaA);
        cout<<"tienes "<<anio<<" anios"<<endl;
        cout<<"tienes "<< mes<<" meses"<<endl;
        cout<<"tienes "<<dia<<" dias"<<endl;
        cout<<" POR LO TANTO USTED ESTA EN LA ETAPA DE "<<endl;
    }

    edad=anio;
    if ( edad >= 0 && edad <= 120 )
    if (edad<0)
        cout<<"PRENATAL"<<endl;
     else
        if ( edad < 2 )
            cout<<"INFANCIA"<<endl;
        else
            if ( edad < 13 )
                cout<<"NINIES"<<endl;
            else
                if ( edad < 18 )
                    cout<<"ADOLECENCIA"<<endl;
                else
                    if ( edad < 31 )
                        cout<<"JUVENTUD"<<endl;
                    else
                        if ( edad < 65 )
                            cout<<"ADULTEZ"<<endl;
                        else
                            cout<<"VEJEZ"<<endl;
    else
        cout<<"edad incorrecta"<<endl;
    return 0;

}

