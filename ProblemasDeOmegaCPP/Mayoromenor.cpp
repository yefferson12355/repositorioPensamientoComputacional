#include <iostream>

using namespace std;

int main(){
    int r0, r1, r2;
    
    cin >> r0;
    
    r1 = r0;
    r2 = r0;
    
    
    for ( int n = 0; n < 4; n++ ){
        
        cin >> r0;
        
        
        if (r0 > r1){
            r1 = r0;
        }
        else if ( r0 < r2 ){
            r2 = r0;
        }
        
        
    }
    
    cout << r2 << ' ' << r1;
    
    
}