#include <iostream>
using namespace std ;

int main(){

    int i = 0, sum = 0 ;

    do{

        cin >> i ;

        if ( i >= 0)
        sum += i ;

    }
    while ( i >= 0 ) ;

    cout << sum ;
}