#include <iostream>
using namespace std;

int total(char c[]){

    int count = 0;

    while(c[count] != '\0'){

        count ++;

    }

    return count;

}

int upper(char c[]){

    int upper = 0;
    int count = 0;

    while(c[count] != '\0'){
        
        if('A'<= c[count] && c[count] <= 'Z'){
            
            upper ++;

        }

        count ++;
    }

    return upper;

}

int lower(char c[]){

    int lower = 0;
    int count = 0;

    while(c[count] != '\0'){
        
        if('a'<= c[count] && c[count] <= 'z'){
            
            lower ++;

        }

        count ++;
    }

    return lower;

}

int space(char c[]){

    int space = 0;
    int count = 0;

    while(c[count] != '\0'){
        
        if(c[count] == ' ' || c[count] == '\t'){
            
            space ++;

        }

        count ++;
    }

    return space;

}

int main(){

    char input[2048];

    cout << "Enter any sentence\n";

    gets(input);

    cout << "The Total number of letters = " << total(input) << endl;
    cout << "The upper case letters = " << upper(input) << endl;
    cout << "The lower case letters = " << lower(input) << endl;
    cout << "The white space = " << space(input) << endl;
    
}