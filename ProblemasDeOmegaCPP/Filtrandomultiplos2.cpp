#include <iostream>

using namespace std;

int main(){
    int r0, r2;
    
    cin >> r0;
    
	int r1[r0];
	
	for ( int n = 0; n < r0; n++ ){
	    cin >> r2;
	    r1[n] = r2;

	}
	
	cin >> r2;
	
	for ( int n = 0; n < r0; n++ ){
	    if ( r1[n] % r2  == 0){
	        cout << r1[n] << ' ';
	    }
	    
	    else{
	        cout << "x ";
	    }
	}
	

	return 0;
}