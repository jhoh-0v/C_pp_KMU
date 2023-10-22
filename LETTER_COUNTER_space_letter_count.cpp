#include <iostream>
using namespace std ;

int main(){

    char c[2048];
    cout << "input : ";
    gets(c);

    int space = 0;
    int count = 0;

    while(c[count] != '\0'){
        
        if(c[count] == ' ' || c[count] == '\t'){
            
            space ++;

        }

        count ++;
    }

    cout << space;
}