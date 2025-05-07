#include <iostream>
#include <string>

using namespace std;

int main (){
    
    bool part2 = false;
    
    string enter;
    
    cin >> enter;
    
    
    string store = "";
    int CLAVE = 0, NUMIN = 0;
    float price = 0;


    enter += ",";
    
    
    for ( int l: enter ){

        
        if ( l == ','  && part2 == false){
            CLAVE = stoi( store );
            part2 = true;
            store = "";
            
        }
        else if ( l == ',' && part2 == true ){
            NUMIN = stoi( store );
            store = "";
            
            
        }
        else{
            store += l;
            
        }
    

        
    }
    
    switch ( CLAVE ){
        case 12:
            price = 2;
            break;
        case 15:
            price = 2.2;
            break;
        case 18:
            price = 4.5;
            break;
        case 19:
            price = 3.5;
            break;
        case 23:
            price = 6;
            break;

        case 25:
            price = 6;
            break;
        case 29:
            price = 5;
            break;
            
    }
    
    
    cout << price * NUMIN;
    
    
    return 0;
}