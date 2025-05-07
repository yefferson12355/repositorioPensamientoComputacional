#include <iostream>

using namespace std;

int main(){
	int r0, r1 = 0;

	cin >> r0;

	while ( r0 < 30000 ){
		r1 += 1;
		r0 *= r0;
	}

	cout << r0 << ' ' << r1;



	return 0;
}