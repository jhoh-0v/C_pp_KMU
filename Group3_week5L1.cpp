#include <iostream>

using namespace std ; 

int main(){

    char character ;
    
    cout << " Enter ther Letter (In Capital Letter) : " ;
    cin >> character ;
    cout << "Your Character is " << character << " . ";

    if ( character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U' )
    cout << "Your Character is Vowel." ;

    else
    cout << "Your character is NOT Vowel. Otherwise NOT a capital Letter." ;

}