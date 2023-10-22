#include <iostream>
using namespace std ;

float cvt(float Cel) ;

int main(){

    float C, Fah ;

    cout << " enter Celsius degree " ;
    cin >> C ;

    Fah = cvt(C) ;

    cout << " Fahrenheit degree is :" << Fah ;

}

float cvt(float Cel){

    return (Cel * 9 / 5 + 32) ;
    
}