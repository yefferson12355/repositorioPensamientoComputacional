#include <iostream>

using namespace std;

int main(){
	int r0, r1 = 0;

	for ( int n = 0; n < 10; n++ ){
		cin >> r0;

		if ( r0 % 4 == 0 && ( r0 % 100 != 0 or r0 % 400 == 0 ) ){
			r1++;
		}
	}


	cout << r1;

	return 0;
}