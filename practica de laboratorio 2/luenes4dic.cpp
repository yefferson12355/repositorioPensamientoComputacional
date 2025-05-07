#include<iostream>

using namespace std;

//calcularIGV
//calcular el monto total de pagar +IGV//
void IGV (){
    //declarando variables //
    //una buena practica es la inicializacion de variables en cero para evitar valoresbasura//
    float precioT=0,precioB=0;
    float Igv = 0;

    cout<<"CALCULAR EL MONTO TOTAL "<<endl;
    cout<<"Monto Base:"<<endl;cin>>precioB;
    cout<<"IGV 18%:";
    //Asignacion de valores//
    Igv=precioB*0.18;
    cout<<Igv<<endl;
    precioT=precioB+Igv;
    cout<<"Total:" << precioT<<endl;
}

void reciduoDIV (){
    //decir si es par o no //

    //declaracion de variables//
    int dividendo=0,divisor=0,resultado=0,residuo=0;

    cout<<"DIVISION Y COMPROBAR SI ES PAR O IMPAR"<<endl;

    cout<<"ingrese el dividendo "<<endl;
    cin>>dividendo;
    cout<<"ingrese el divisor "<<endl;
    cin>>divisor;

    resultado=dividendo/divisor;
    residuo=divisor%dividendo;
    if (residuo==0){
        cout<<"el resultado es :"<<resultado<<endl;
        cout<<"es exacta"<<endl;
        cout<<"su residuo es: "<<residuo<<endl;
    }
    else{
    cout<<"el resultado es :"<<resultado<<endl;
    cout<<"es inexacta"<<endl;
    cout<<"su residuo es: "<<residuo<<endl;
    }


}
void Nmayor(){
    //declaracion de variables //
    int M,a,b,c;
    cout<<"NUMERO  MAYOR DE TRES NUMEROS"<<endl;
    cout<<"ingrese A numero"<<endl;
    cin>>a;
    cout<<"ingrese B numero"<<endl;
    cin>>b;
    cout<<"ingrese C numero"<<endl;
    cin>>c;
    cout<<endl;

    if(a>b&&a>c){
        cout<<"A es mayor"<<endl;
    }
    else
        if(b>c){
            cout<<"B es mayor"<<endl;
        }
        else
            cout<<"C es mayor"<<endl;

}
int main (){

        Nmayor();

return 0;
}
