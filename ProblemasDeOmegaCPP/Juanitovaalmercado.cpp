#include <iostream>

using namespace std;

int main(){
	int r0, r1 = 0; //r0 - Manyproducts; r1 - Finalprice


	for ( int n = 0; n < 6; n++ ){
		cin >> r0;


		switch ( n ){
			case 0:
				r1 += r0 * 15;
				break;
			case 1:
				r1 += r0 * 20;
				break;
			case 2:
				r1 += r0 * 19;
				break;
			case 3:
				r1 += r0 * 10;
				break;
			case 4:
				r1 += r0 * 10;
				break;
			case 5:
				r1 += r0 * 5;
				break;

		}


	}


	cout << r1;

	return 0;
}