#include <iostream>
using namespace std ;

float div(float a, float b) ;

int main(){

    float num_1, num_2,result ;

    cout << "enter 2 number : " ;
    cin >> num_1 >> num_2 ;

    result = div(num_1, num_2) ;

    cout << "division : " << result ;

    return 0 ;

}

float div(float a, float b) {

if(b == 0){
        return 0 ;
    }

    return (a / b) ;

}