#include <iostream>
using namespace std ;

int main(){

    char arr[3][4] = { 
        { 'a', 'b', 'c', 'd' }, 
        { '1', '2', '3', '4' }, 
        { 'e', 'z', 'q', 'm' } 
        } ;

    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << " " ;
        }
        
        cout << "\n" ;
    }

}