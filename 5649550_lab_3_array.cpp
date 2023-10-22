#include <iostream>
using namespace std ;

int arr[5], i ;

int main(){

    cout << "enter 5 numbers : " ;

    for(i=0 ; i<5 ; i++){
        cin >> arr[i] ;
    }

    cout << "the numbers are : " ;

    for(i=0 ; i<5 ; i++){
        cout << arr[i] << " " ;
    }
    
}