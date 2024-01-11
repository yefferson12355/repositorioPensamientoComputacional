#include <iostream>
#include <conio.h>

using namespace std;


int main() {


    string cad ;
    // cin >> cad;
    getline(cin,cad);
    for(int i =cad.length()-1; i>=0; i--) {
       cout << cad[i];
    }
 return 0;
}
