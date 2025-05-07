#include <iostream>

using namespace std;

int main(){
	int r0, r1;

	cin >> r0;

	if ( r0 % 2 == 0 ){
	    r0 /= 2;
	    r1 = r0 * ( r0 + 1);
	    r1 -= r0 * r0;
	}
	else{
	    r0 = (r0 + 1) / 2;
	    r1 = -1 * r0 * r0;
	    r0 -= 1;
	    r1 += r0 * ( r0 + 1 );
	}
	
	cout << r1;
	
	return 0;
}