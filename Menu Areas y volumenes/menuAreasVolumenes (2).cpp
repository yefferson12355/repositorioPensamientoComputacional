#include <iostream>
#include <cmath>
#ifdef _WIN32
#include<windows.h>
#endif 
#define pi 3.1416
using namespace std;




void limpiar_pantalla()

{
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

//Areas


// Área de un pentágono regular
double areaPentagonoRegular(double lado) {
    return 0.25 * sqrt(5 * (5 + 2 * sqrt(5))) * pow(lado, 2);
}
// Área de un hexágono regular
double areaHexagonoRegular(double lado) {
    return 1.5 * sqrt(3) * pow(lado, 2);
}
// Área de un octágono regular
double areaOctagonoRegular(double lado) {
    return 2 * (1 + sqrt(2)) * pow(lado, 2);
}
// Área de un trapecio
double areaTrapecio(double base1, double base2, double altura) {
    return 0.5 * (base1 + base2) * altura;
}
// Área de un rombo
double areaRombo(double diagonalMayor, double diagonalMenor) {
    return 0.5 * diagonalMayor * diagonalMenor;
}
// Área de un triángulo rectángulo
double areaTrianguloRectangulo(double base, double altura) {
    return 0.5 * base * altura;
}
// Área de una esfera
double areaEsfera(double radio) {
    return 4 * pi * pow(radio, 2);
}
// Área de un cono
double areaCono(double radio, double generatriz) {
    return pi * pow(radio, 2) + pi * radio * generatriz;
}
// Área de un cilindro
double areaCilindro(double radio, double altura) {
    return 2 * pi * pow(radio, 2) + 2 * pi * radio * altura;
}
// Área de un cubo
double areaCubo(double arista) {
    return 6 * pow(arista, 2);
}
// Área de un prisma rectangular
double areaPrismaRectangular(double largo, double ancho, double altura) {
    return 2 * (largo * ancho + largo * altura + ancho * altura);
}
// Área de un prisma triangular
double areaPrismaTriangular(double base, double altura, double largo) {
    return base * altura + 3 * (0.5 * base * largo);
}
// Área de un icosaedro
double areaIcosaedro(double arista) {
    return 5 * sqrt(3) * pow(arista, 2);
}
// Área de un dodecaedro
double areaDodecaedro(double arista) {
    return 3 * sqrt(25 + 10 * sqrt(5)) * pow(arista, 2);
}



//volumenes



// función para calcular el volumen de cilindro
void volumenCilindro()
{
    double radio, altura, volumen;

    cout << "CILINDRO" << endl;
    cout << "Ingrese el radio del cilindro: ";
    cin >> radio;
    cout << "Ingrese la altura del cilindro: ";
    cin >> altura;

    volumen = pi * pow(radio, 2) * altura;

    cout << "El volumen del cilindro es: " << volumen << endl;
    cout << endl;
}
// Función para calcular el volumen de una pirámide
void volumenPiramide()
{
    double base, altura, volumen;

    cout << "PIRÁMIDE" << endl;
    cout << "Ingrese la longitud de la base de la pirámide: ";
    cin >> base;
    cout << "Ingrese la altura de la pirámide: ";
    cin >> altura;

    volumen = (1.0 / 3) * pow(base, 2) * altura;

    cout << "El volumen de la pirámide es: " << volumen << endl;
    cout << endl;
}
// Función para calcular el volumen de un cubo
void volumenCubo()
{
    double lado, volumen;

    cout << "CUBO" << endl;
    cout << "Ingrese la longitud de un lado del cubo: ";
    cin >> lado;

    volumen = pow(lado, 3);

    cout << "El volumen del cubo es: " << volumen << endl;
    cout << endl;
}
// Función para calcular el volumen de un prisma
void volumenPrisma()
{
    double base, altura, longitud, volumen;

    cout << "PRISMA" << endl;
    cout << "Ingrese la longitud de la base del prisma: ";
    cin >> base;
    cout << "Ingrese la altura de la base del prisma: ";
    cin >> altura;
    cout << "Ingrese la longitud del prisma: ";
    cin >> longitud;

    volumen = base * altura * longitud;

    cout << "El volumen del prisma es: " << volumen << endl;
    cout << endl;
}
// Función para calcular el volumen de un ortoedro
void volumenOrtoedro()
{
    double largo, ancho, altura, volumen;

    cout << "ORTOEDRO" << endl;
    cout << "Ingrese la longitud del ortoedro: ";
    cin >> largo;
    cout << "Ingrese el ancho del ortoedro: ";
    cin >> ancho;
    cout << "Ingrese la altura del ortoedro: ";
    cin >> altura;

    volumen = largo * ancho * altura;

    cout << "El volumen del ortoedro es: " << volumen << endl;
    cout << endl;
}
// Función para calcular el volumen de un tetraedro regular
void volumenTetraedroRegular()
{
    double arista, volumen;

    cout << "TETRAEDRO REGULAR" << endl;
    cout << "Ingrese la longitud de la arista del tetraedro regular: ";
    cin >> arista;

    volumen = (sqrt(2) / 12) * pow(arista, 3);

    cout << "El volumen del tetraedro regular es: " << volumen << endl;
    cout << endl;
}
// Función para calcular el volumen de un prisma hexagonal
void volumenPrismaHexagonal()
{
    double lado, apotema, altura, volumen;

    cout << "PRISMA HEXAGONAL" << endl;
    cout << "Ingrese la longitud de un lado del hexágono: ";
    cin >> lado;
    cout << "Ingrese la longitud de la apotema del hexágono: ";
    cin >> apotema;
    cout << "Ingrese la altura del prisma: ";
    cin >> altura;

    // Área del hexágono base
    double areaBase = 3 * sqrt(3) * pow(lado, 2) / 2;

    // Volumen del prisma hexagonal
    volumen = areaBase * altura;

    cout << "El volumen del prisma hexagonal es: " << volumen << endl;
    cout << endl;
}
// Función para calcular el volumen de un prisma rectangular
void volumenPrismaRectangular()
{
    double base, altura, longitud, volumen;

    cout << "PRISMA RECTANGULAR" << endl;
    cout << "Ingrese la longitud de la base del prisma: ";
    cin >> base;
    cout << "Ingrese la altura de la base del prisma: ";
    cin >> altura;
    cout << "Ingrese la longitud del prisma: ";
    cin >> longitud;

    volumen = base * altura * longitud;

    cout << "El volumen del prisma rectangular es: " << volumen << endl;
    cout << endl;
}
// Función para calcular el volumen de un prisma triangular
void volumenPrismaTriangular()


{
    double base, altura, longitud, volumen;

    cout << "PRISMA TRIANGULAR" << endl;
    cout << "Ingrese la longitud de la base del prisma: ";
    cin >> base;
    cout << "Ingrese la altura de la base del prisma: ";
    cin >> altura;
    cout << "Ingrese la longitud del prisma: ";
    cin >> longitud;

    volumen = (1.0 / 2) * base * altura * longitud;

    cout << "El volumen del prisma triangular es: " << volumen << endl;
    cout << endl;
}
// Función para calcular el volumen de un Icosaedro
void volumenIcosaedro()
{
        double arista, volumen;

        cout << "ICOSAEDRO" << endl;
        cout << "Ingrese la longitud de la arista del icosaedro: ";
        cin >> arista;

        volumen = (5.0 / 12) * (3 + sqrt(5)) * pow(arista, 3);

        cout << "El volumen del icosaedro es: " << volumen << endl;
        cout << endl;
}
// Función para calcular el volumen de un dodecaedro
void volumenDodecaedro()
    {
        double arista, volumen;

        cout << "DODECAEDRO" << endl;
        cout << "Ingrese la longitud de la arista del dodecaedro: ";
        cin >> arista;

        volumen = (15.0 / 4) * (3 + sqrt(5)) * pow(arista, 3);

        cout << "El volumen del dodecaedro es: " << volumen << endl;
        cout << endl;
    }


//Perimetros


// Perímetro de un círculo
double perimetroCirculo(double radio) {
    return 2 * pi * radio;
}
// Perímetro de un triángulo equilátero
double perimetroTrianguloEquilatero(double lado) {
    return 3 * lado;
}
// Perímetro de un cuadrado
double perimetroCuadrado(double lado) {
    return 4 * lado;
}
// Perímetro de un rectángulo
double perimetroRectangulo(double base, double altura) {
    return 2 * (base + altura);
}
// Perímetro de un pentágono regular
double perimetroPentagonoRegular(double lado) {
    return 5 * lado;
}
// Perímetro de un hexágono regular
double perimetroHexagonoRegular(double lado) {
    return 6 * lado;
}
// Perímetro de un octágono regular
double perimetroOctagonoRegular(double lado) {
    return 8 * lado;
}
// Perímetro de un trapecio
double perimetroTrapecio(double lado1, double lado2, double base1, double base2) {
    return lado1 + lado2 + base1 + base2;
}
// Perímetro de un rombo
double perimetroRombo(double lado) {
    return 4 * lado;
}
// Perímetro de un triángulo rectángulo
double perimetroTrianguloRectangulo(double lado1, double lado2, double hipotenusa) {
    return lado1 + lado2 + hipotenusa;
}
  



void perimetros()
{
    
    int menu3=1;
    while (menu3 != 0)
    {
    cout << "=======================================" << endl;
    cout << "Ingrese que operacion quiere realizar:" << endl<<endl;
    cout << "1.-Perimetro del circulo:"<<endl;
    cout << "2.-Perimetro del triangulo equilátero:"<<endl;
    cout << "3.-Perimetro del cuadrado:"<<endl;
    cout << "4.-Perimetro del rectangulo:"<<endl;
    cout << "5.-Perimetro del pentagono regular:"<<endl;
    cout << "6.-Perimetro del hexagono regular:"<<endl;
    cout << "7.-Perimetro del octagono regular:"<<endl;
    cout << "8.-Perimetro del trapecio: "<<endl;
    cout << "9.-Perimetro del rombo :"<<endl;
    cout << "10.-Perimetro del triangulo rectangulo:"<<endl;
    cout << "0 Atras:"<<endl;
    cout << "=======================================" << endl;
    cin >> menu3;
    cout << "=======================================" << endl;
    
    switch (menu3)
    {
    case 1:
    {
        double salida,a;
        cout<<"Ingrese el radio del circulo:"<<endl;
        cin>>a;
        cout<<perimetroCirculo(a) << endl;
        cout<<"======================================="<<endl;
            cout<<"1 para atras:"<<endl;
            cout<<"0 para salida:"<<endl;
        cin>>salida;
        if(salida==1)
            {
                limpiar_pantalla();
                break;
            }
        if(salida==0)
            {
                menu3=0;
            }
        break;
    }
    case 2:
    {
        double salida,a;
        cout<<"Ingrese el lado del triangulo Equilatero:"<<endl;
        cin>>a;
        cout<<perimetroTrianguloEquilatero(a)<< endl;
        cout<<"======================================="<<endl;
            cout<<"1 para atras:"<<endl;
            cout<<"0 para salida:"<<endl;
        cin>>salida;
        if(salida==1)
            {
                break;
            }
        if(salida==0)
            {
                menu3=0;
            }
        break;
    }
    case 3:
    {
        double salida,a;
        cout<<"Ingrese el lado del Cuadrado:"<<endl;
        cin>>a;
        cout<<perimetroCuadrado(a) << endl;
        cout<<"======================================="<<endl;
            cout<<"1 para atras:"<<endl;
            cout<<"0 para salida:"<<endl;
        cin>>salida;
        if(salida==1)
            {
                break;
            }
        if(salida==0)
            {
                menu3=0;
            }
        break;
    }
    case 4:
    {
            double a, b;
            int salida;
            cout<<"Ingrese la base del rectangulo:"<<endl;
            cin >> a;
            cout<<"Ingrese la altura del rectangulo:"<<endl;
            cin>> b;
            cout<<perimetroRectangulo(a,b) << endl;
            cout<<"======================================="<<endl;
            cout<<"1 para atras:"<<endl;
            cout<<"0 para salida:"<<endl;
            cin>>salida;
            
            if(salida==1)
                {
                    break;
                }
            if(salida==0)
                {
                    menu3=0;
                }
        break;
    }
    case 5:
    {
       double salida,a;
       cout<<"Ingrese el lado del PentagonoRegular:"<<endl;
        cin>>a;
        cout<<perimetroPentagonoRegular(a) << endl;
        cout<<"======================================="<<endl;
            cout<<"1 para atras:"<<endl;
            cout<<"0 para salida:"<<endl;
        cin>>salida;
        if(salida==1)
            {
                break;
            }
        if(salida==0)
            {
                menu3=0;
            }
        break;
    }
    case 6:
    {
        double salida,a;
        cout<<"Ingrese el lado del HexagonoRegular:"<<endl;
        cin>>a;
        cout<<perimetroHexagonoRegular(a) << endl;
        cout<<"======================================="<<endl;
            cout<<"1 para atras:"<<endl;
            cout<<"0 para salida:"<<endl;
        cin>>salida;
        if(salida==1)
            {
                break;
            }
        if(salida==0)
            {
                menu3=0;
            }
        break;
    }
    case 7:
    {
        double salida,a;
        cout<<"Ingrese el lado del OctagonoRegular:"<<endl;
        cin>>a;
        cout<< perimetroOctagonoRegular(a) << endl;
        cout<<"======================================="<<endl;
            cout<<"1 para atras:"<<endl;
            cout<<"0 para salida:"<<endl;
        cin>>salida;
        if(salida==1)
            {
                break;
            }
        if(salida==0)
            {
                menu3=0;
            }
        break;
    }
    case 8:
    {
        double salida,a,b,c,d;
        cout<<"Ingrese el lado1 del Trapecio:"<<endl;
        cin>>a;
        cout<<"Ingrese el lado2 del Trapecio:"<<endl;
        cin>>b;
        cout<<"Ingrese la base1 del Trapecio:"<<endl;
        cin>>c;
        cout<<"Ingrese la base2 del Trapecio:"<<endl;
        cin>>d;
        cout<< perimetroTrapecio(a,b,c,d)<<endl;
        cout<<"======================================="<<endl;
            cout<<"1 para atras:"<<endl;
            cout<<"0 para salida:"<<endl;
        cin>>salida;
        if(salida==1)
            {
                break;
            }
        if(salida==0)
            {
                menu3=0;
            }
        break;
    }
    case 9:
    {
       int salida,a;
       cout<<"Ingrese el lado del Rombo:"<<endl;
        cin>>a;
        cout<< perimetroRombo(a) << endl;
        cout<<"======================================="<<endl;
            cout<<"1 para atras:"<<endl;
            cout<<"0 para salida:"<<endl;
        cin>>salida;
        if(salida==1)
            {
                break;
            }
        if(salida==0)
            {
                menu3=0;
            }
        break;
    }
    case 10:
    {
        double salida,a,b,c;
        cout<<"Ingrese el lado1:"<<endl;
        cin>>a;
        cout<<"Ingrese el lado2:"<<endl;
        cin>>b;
        cout<<"Ingrese la hipotenusa:"<<endl;
        cin>>c;
        cout<< perimetroTrianguloRectangulo(a,b,c) << endl;
        cout<<"======================================="<<endl;
            cout<<"1 para atras:"<<endl;
            cout<<"0 para salida:"<<endl;
        cin>>salida;
        if(salida==1)
            {
                break;
            }
        if(salida==0)
            {
                menu3=0;
            }
        break;
    }

    default:
    {
        cout<<"Ingrese una opcion Humano estupido"<<endl;
        break;
    }
    }
    }
}
void Areas()
{
    int menu2 = 1; // Inicia el bucle
    while (menu2 != 0)
    {
        cout << "=======================================" << endl;
        cout << "AREAS:" << endl<<endl;
        cout << "1 Circulo:" << endl;
        cout << "2 Triangulo:" << endl;
        cout << "3 Cuadrado:" << endl;
        cout << "4 Rectangulo:" << endl;
        cout << "5 Pentágono Regular:" << endl;         
        cout << "6 Hexágono Regular:" << endl;                  
        cout << "7 Octágono Regular:" << endl;              
        cout << "8 Trapecio:" << endl;                      
        cout << "9 Rombo:" << endl;                         
        cout << "10 Triángulo Rectángulo:" << endl;                        
        cout << "0 Atras:" << endl;
        cout << "=======================================" << endl;
        cin >> menu2;
        cout << "=======================================" << endl;

        switch (menu2)
        {
        case 1:
        {
            int radio=0, salida=0;
            double resultado;
            cout << "Ingrese el valor del radio" << endl;
            cin>>radio;
            resultado = pi * pow(radio, 2);
            cout << "El Area es: " << resultado;
            cout << endl;
            cout << "=======================================" << endl;
            cout << "1 para atras:" << endl;
            cout << "0 para salida:" << endl;
            cin >> salida;
            if (salida == 1)
            {
                break; // Sale del bucle y regresa al menú anterior
            }
            if (salida == 0)
            {
                menu2 = 0; // Termina el bucle y sale del menú
            }
            break;
        }
        case 2:
        {
            int bas=0,alt=0,area=0,salida;
            //Area de triangulos //
            cout<<"Area de triangulo"<<endl;
            cout<<endl;
            cout<<"ingrese la base :"<<endl;
            cin>>bas;
            cout<<"ingrese la altura :"<<endl;
            cin>>alt;
            area=(bas*alt)*0.5;
            cout<<"la area es :"<<area<<endl;
            cout<<endl;
            cout<<"======================================="<<endl;
            cout<<"1 para atras:"<<endl;
            cout<<"0 para salida:"<<endl;
            cin>>salida;
            if(salida==1)
                {
                break;
                }
            if(salida==0)
            {
                menu2 =0;
            }
            break;
        }
        case 3:
        {
            int bas=0,alt=0,area=0,salida;
            //Area de cuadrado //
            cout<<"Area de cudrado "<<endl;
            cout<<"ingrese la base :"<<endl;
            cin>>bas;
            cout<<"ingrese la altura :"<<endl;
            cin>>alt;
            area=bas*alt;
            cout<<"la area es :"<<area<<endl;
            cout<<endl;
            cout<<"======================================="<<endl;
            cout<<"1 para atras:"<<endl;
            cout<<"0 para salida:"<<endl;
            cin>>salida;
            if(salida==1)
                {
                break;
                }
            if(salida==0)
            {
                menu2 = 0;
            }
            break;
        }
        case 4:
        {
        int bas=0,alt=0,area=0,salida;
        //Area de rectangulo//
        cout<<"Area de rectangulo"<<endl;
        cout<<"ingrese la base :"<<endl;
        cin>>bas;
        cout<<"ingrese la altura :"<<endl;
        cin>>alt;
        area=bas*alt;
        cout<<"la area es :"<<area<<endl;
        cout<<endl;
        cout<<"======================================="<<endl;
        cout<<"1 para atras:"<<endl;
        cout<<"0 para salida:"<<endl;
        cin>>salida;
        if(salida==1)
            {
                break;
            }
        if(salida==0)
            {
                menu2=0;
            }
        break;
        }
        case 5:
        {
            double lado,salida;
            cout << "Ingrese el lado del pentágono regular:" << endl;
            cin >> lado;
            cout << "El área del pentágono regular es: " << areaPentagonoRegular(lado) << endl;
            cout<<"======================================="<<endl;
            cout<<"1 para atras:"<<endl;
            cout<<"0 para salida:"<<endl;
            cin>>salida;
            if(salida==1)
                {
                    break;
                }
            if(salida==0)
                {
                    menu2=0;
                }
            break;
        }
        case 6:
        {
            double lado,salida;
            cout << "Ingrese el lado del hexágono regular:" << endl;
            cin >> lado;
            cout << "El área del hexágono regular es: " << areaHexagonoRegular(lado) << endl;
            cout<<"======================================="<<endl;
            cout<<"1 para atras:"<<endl;
            cout<<"0 para salida:"<<endl;
            cin>>salida;
            if(salida==1)
                {
                    break;
                }
            if(salida==0)
                {
                    menu2=0;
                }
            break;
        }
        case 7:
        {
            double lado,salida;
            cout << "Ingrese el lado del octágono regular:" << endl;
            cin >> lado;
            cout << "El área del octágono regular es: " << areaOctagonoRegular(lado) << endl;
            cout<<"======================================="<<endl;
            cout<<"1 para atras:"<<endl;
            cout<<"0 para salida:"<<endl;
            cin>>salida;
            if(salida==1)
                {
                    break;
                }
            if(salida==0)
                {
                    menu2=0;
                }
            break;
        }
        case 8:
        {
            double base1, base2, altura,salida;
            cout << "Ingrese la base mayor del trapecio:" << endl;
            cin >> base1;
            cout << "Ingrese la base menor del trapecio:" << endl;
            cin >> base2;
            cout << "Ingrese la altura del trapecio:" << endl;
            cin >> altura;
            cout << "El área del trapecio es: " << areaTrapecio(base1, base2, altura) << endl;
            cout<<"======================================="<<endl;
            cout<<"1 para atras:"<<endl;
            cout<<"0 para salida:"<<endl;
            cin>>salida;
            if(salida==1)
                {
                    break;
                }
            if(salida==0)
                {
                    menu2=0;
                }
            break;
        }
        case 9:
        {
            double diagonalMayor, diagonalMenor,salida;
            cout << "Ingrese la diagonal mayor del rombo:" << endl;
            cin >> diagonalMayor;
            cout << "Ingrese la diagonal menor del rombo:" << endl;
            cin >> diagonalMenor;
            cout << "El área del rombo es: " << areaRombo(diagonalMayor, diagonalMenor) << endl;
            cout<<"======================================="<<endl;
            cout<<"1 para atras:"<<endl;
            cout<<"0 para salida:"<<endl;
            cin>>salida;
            if(salida==1)
                {
                    break;
                }
            if(salida==0)
                {
                    menu2=0;
                }
            break;
        }
        case 10:
        {
            double base, altura,salida;
                cout << "Ingrese el valor de la base: ";
                cin >> base;
                cout << "Ingrese el valor de la altura: ";
                cin >> altura;
                cout << "El área es: " <<  areaTrianguloRectangulo(base,altura)<< endl;
            cout<<"======================================="<<endl;
            cout<<"1 para atras:"<<endl;
            cout<<"0 para salida:"<<endl;
            cin>>salida;
            if(salida==1)
                {
                    break;
                }
            if(salida==0)
                {
                    menu2=0;
                }
            break;
        }
        
        }
    }
}
void volumenes()
{
    int menu2 = 1; // Inicia el bucle
    while (menu2 != 0)
    {
        cout << "=======================================" << endl;
        cout << "VOLUMENES" << endl;
        cout << "1 volumenCilindro " << endl;
        cout << "2 volumenPiramide " << endl;
        cout << "3 volumenPrisma" << endl;
        cout << "4 volumenOrtoedro " << endl;
        cout << "5 volumenTetraedroRegular " << endl;
        cout << "6 volumenPrismaHexagonal" << endl;
        cout << "7 volumenPrismaRectangular" << endl;
        cout << "8 volumenPrismaTriangular" << endl;
        cout << "9 volumenIcosaedro " << endl;
        cout << "10 volumenDodecaedro " << endl;
        cout << "0 Atras" << endl;
        cout << "=======================================" << endl;
        cin >> menu2;
        cout << "=======================================" << endl;


        switch (menu2)
        {
            case 1:
            {
                int salida;
                limpiar_pantalla();
                volumenCilindro();
                cout<<"1 para atras "<<endl;
                cout<<"0 para salida "<<endl;
                cin >> salida;
                if (salida == 1)
                {
                    limpiar_pantalla();
                    break; // Sale del bucle y regresa al menú anterior
                }
                if (salida == 0)
                {
                    limpiar_pantalla();
                    menu2 = 0; // Termina el bucle y sale del menú
                }
                break;
            }
            case 2:
            {
                int salida;
                limpiar_pantalla();
                volumenPiramide();
                cout<<"1 para atras "<<endl;
                cout<<"0 para salida "<<endl;
                cin >> salida;
                if (salida == 1)
                {
                    limpiar_pantalla();
                    break; // Sale del bucle y regresa al menú anterior
                }
                if (salida == 0)
                {
                    limpiar_pantalla();
                    menu2 = 0; // Termina el bucle y sale del menú
                }
                break;
            }
            case 3:
            {
                int salida;
                limpiar_pantalla();
                volumenPrisma();
                cout<<"1 para atras "<<endl;
                cout<<"0 para salida "<<endl;
                cin >> salida;
                if (salida == 1)
                {
                    limpiar_pantalla();
                    break; // Sale del bucle y regresa al menú anterior
                }
                if (salida == 0)
                {
                    limpiar_pantalla();
                    menu2 = 0; // Termina el bucle y sale del menú
                }
                break;
            }
            case 4:
            {
                int salida;
                limpiar_pantalla();
                volumenOrtoedro();
                cout<<"1 para atras "<<endl;
                cout<<"0 para salida "<<endl;
                cin >> salida;
                if (salida == 1)
                {
                    limpiar_pantalla();
                    break; // Sale del bucle y regresa al menú anterior
                }
                if (salida == 0)
                {
                    limpiar_pantalla();
                    menu2 = 0; // Termina el bucle y sale del menú
                }
                break;
            }
            case 5:
            {
                int salida;
                limpiar_pantalla();
                volumenTetraedroRegular();
                cout<<"1 para atras "<<endl;
                cout<<"0 para salida "<<endl;
                cin >> salida;
                if (salida == 1)
                {
                    limpiar_pantalla();
                    break; // Sale del bucle y regresa al menú anterior
                }
                if (salida == 0)
                {
                    limpiar_pantalla();
                    menu2 = 0; // Termina el bucle y sale del menú
                }
                break;
            }
            case 6:
            {
                int salida;
                limpiar_pantalla();
                volumenPrismaHexagonal();
                cout<<"1 para atras "<<endl;
                cout<<"0 para salida "<<endl;
                cin >> salida;
                if (salida == 1)
                {
                    limpiar_pantalla();
                    break; // Sale del bucle y regresa al menú anterior
                }
                if (salida == 0)
                {
                    limpiar_pantalla();
                    menu2 = 0; // Termina el bucle y sale del menú
                }
                break;
            }
            case 7:
            {
                int salida;
                limpiar_pantalla();
                volumenPrismaRectangular();
                cout<<"1 para atras "<<endl;
                cout<<"0 para salida "<<endl;
                cin >> salida;
                if (salida == 1)
                {
                    limpiar_pantalla();
                    break; // Sale del bucle y regresa al menú anterior
                }
                if (salida == 0)
                {
                    limpiar_pantalla();
                    menu2 = 0; // Termina el bucle y sale del menú
                }
                break;
            }
            case 8:
            {
                int salida;
                limpiar_pantalla();
                volumenPrismaTriangular();
                cout<<"1 para atras "<<endl;
                cout<<"0 para salida "<<endl;
                cin >> salida;
                if (salida == 1)
                {
                    limpiar_pantalla();
                    break; // Sale del bucle y regresa al menú anterior
                }
                if (salida == 0)
                {
                    limpiar_pantalla();
                    menu2 = 0; // Termina el bucle y sale del menú
                }
                break;
            }
            case 9:
            {
                int salida;
                limpiar_pantalla();
                volumenIcosaedro();
                cout<<"1 para atras "<<endl;
                cout<<"0 para salida "<<endl;
                cin >> salida;
                if (salida == 1)
                {
                    limpiar_pantalla();
                    break; // Sale del bucle y regresa al menú anterior
                }
                if (salida == 0)
                {
                    limpiar_pantalla();
                    menu2 = 0; // Termina el bucle y sale del menú
                }
                break;
            }
            case 10:
            {
                int salida;
                limpiar_pantalla();
                volumenDodecaedro();
                cout<<"1 para atras "<<endl;
                cout<<"0 para salida "<<endl;
                cin >> salida;
                if (salida == 1)
                {
                    limpiar_pantalla();
                    break; // Sale del bucle y regresa al menú anterior
                }
                if (salida == 0)
                {
                    limpiar_pantalla();
                    menu2 = 0; // Termina el bucle y sale del menú
                }
                break;
            }
            default:
            {
            limpiar_pantalla();
            cout<<endl;
            cout <<"°°°°°°°Ingrese un apcion Humano estupido °°°°°°°"<< endl << endl;
            break;
        }
       }
    }
}   
int main()
{
    int menu = 1; // Inicia el bucle principal
    while (menu != 0)
    {
        cout <<"==============MENU=================== "<<endl<<endl;
        cout << "Ingrese que operacion quiere realizar:" <<endl << endl;
        cout << "1 Areas:" << endl;
        cout << "2 Volumenes:" << endl;
        cout << "3 Perimetros:" << endl;
        cout << "0 Salir:" << endl;
        cout << "=====================================" << endl;
        cin >> menu;

        switch (menu)
        {
        case 0:
            return 0; // Termina el programa
            
            
        case 1:
            limpiar_pantalla();
            Areas();
            break;

        case 2:
            limpiar_pantalla();
            volumenes();
            break;

        case 3:
            limpiar_pantalla();
            perimetros();
            break;
        default:
            limpiar_pantalla();
            cout << "Ingrese un apcion Humano estupido " << endl;
            break;
        }
        
    }
    return 0;
}