#include <iostream>
using namespace std ;

int main(){

    char c[2048];
    cout << "input : ";
    gets(c);

    int upper = 0;
    int count = 0;

    while(c[count] != '\0'){
        
        if('A'<= c[count] && c[count] <= 'Z'){
            
            upper ++;

        }

        count ++;
    }

    cout << upper;
}