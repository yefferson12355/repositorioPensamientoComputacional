#include <iostream>

using namespace std;

int main(){
	int r0, r1;

	cin >> r0;

	r1 = r0;

	for ( int n = 0; n < 2; n++ ){
		cin >> r0;
		if ( r0 > r1 ){
			r1 = r0;
		}

	}

	cout << r1;

	return 0;
}