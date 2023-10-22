#include <iostream>
using namespace std ;

int main(){

    int arr[6] ;
    int i ;

    for(i = 1 ; i < 7 ; i ++){
    cout << "enter hours for employee number " << i << " : " ;
    cin >> arr[i] ; 
    }
    
    for(i = 1 ; i < 7 ; i ++){
    cout << "employee number " << i << " : " << arr[i] << endl ;
    }
}