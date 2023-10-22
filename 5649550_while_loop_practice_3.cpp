#include <iostream>
using namespace std ;

int main(){
    int i = 1 ;

    while(i < 11){
        
        if(i == 1 || i == 3 || i == 5 || i == 7 || i == 9)
        cout << "****\n\n" ;

        else
        cout << "++++++++\n" ;

        i++ ;
    }
}