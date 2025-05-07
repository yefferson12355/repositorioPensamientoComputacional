#include<iostream>

using namespace std;

int main()
{
/*int contador= 3 ;

while(contador < 6 )
{

    cout<<"guaf guaf"<<endl;
    contador++;
}
*/

    //dividir dos numeros//

 int num1,num2;

cout<<"ingrese dividendo"<<endl;
cin>>num1;
cout<<"ingrese divisor"<<endl;
cin>>num2;
if( num2==0){
cout<<"divisor no valido"<<endl;
  break ;
}
else
cout<<"resultado"<<endl<<num1/num2;

return 0 ;
}
