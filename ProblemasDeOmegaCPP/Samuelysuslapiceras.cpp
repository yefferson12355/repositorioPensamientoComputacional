#include <iostream>

using namespace std;

int main(){
    int r0, r2;
    float r1 = 0;

    cin >> r0;


    for ( int n = 0; n < r0; n++ ){
    	cin >> r2;
    	r1 += r2;
    }


    cout << r1 / r0;

    
    return 0;
}