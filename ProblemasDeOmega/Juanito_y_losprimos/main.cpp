#include <iostream>

using namespace std;

int main()
{
    int num1;
    cin>>num1;

        if(num1%2==0){
            cout<<"no es primo"<<endl;
        }
        else if (num1%2!=0){
            cout<<"es primo"<<endl;
        }
        else
        cout<<"no es un numero primo"<<endl;


    return 0;
}
