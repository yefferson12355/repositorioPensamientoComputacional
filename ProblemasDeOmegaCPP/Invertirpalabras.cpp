#include <iostream>

using namespace std;

int main(){
	string r0;
	cin >> r0;

	for ( int n = sizeof(r0); n < 0; n--){
		cout << n;
	}



	return 0;
}