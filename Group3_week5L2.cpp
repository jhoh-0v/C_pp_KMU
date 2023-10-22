#include <iostream>
using namespace std ;

int main(){
    char crt ;
    
    cout << "Enter the Letter (in capital letter) : "  ;
    cin >> crt ;

    switch(crt){

        case 'A' : cout << "Your Character is " << crt << " . Your Character is VOWEL." ;
        break ;

        case 'E' : cout << "Your Character is " << crt << " . Your Character is VOWEL." ;
        break ;

        case 'I' : cout << "Your Character is " << crt << " . Your Character is VOWEL." ;
        break ;

        case 'O' : cout << "Your Character is " << crt << " . Your Character is VOWEL." ;
        break ;

        case 'U' : cout << "Your Character is " << crt << " . Your Character is VOWEL." ;
        break ;

        default : cout << "Your Character is NOT VOWEL. Otherwise NOT A CAPITAL LETTER." ;

    }
}