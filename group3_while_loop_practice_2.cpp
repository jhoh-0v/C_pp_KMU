#include <iostream>
using namespace std ;

int main(){
    int i = 1, sum = 0 ;
    
    while( i >= 0){
        cout << "enter a number : " ;
        cin >> i ;

        if (i >= 0) 
        sum += i ;
    }

    cout << sum ;
}