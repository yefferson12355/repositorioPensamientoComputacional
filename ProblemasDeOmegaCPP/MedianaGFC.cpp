#include <iostream>

using namespace std;

int main(){
	int r0;
	
	cin >> r0;
	
    int r1[r0] = {0};


    for ( int n = 0; n < r0; n++){
        cin >> r1[n];
        
    }
    
    cout << r1[ ( r0 - 1 ) / 2 ];


	return 0;
}