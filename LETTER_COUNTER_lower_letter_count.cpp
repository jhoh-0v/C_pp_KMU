#include <iostream>
using namespace std ;

int main(){

    char c[2048];
    cout << "input : ";
    gets(c);

    int lower = 0;
    int count = 0;

    while(c[count] != '\0'){
        
        if('a'<= c[count] && c[count] <= 'z'){
            
            lower ++;

        }

        count ++;
    }

    cout << lower;
}