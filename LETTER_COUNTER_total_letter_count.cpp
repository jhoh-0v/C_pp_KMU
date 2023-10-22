#include <iostream>
using namespace std;

int main(){

    char c[2048];
    cout << "input : ";
    gets(c);
    int count = 0;
    while(c[count] != '\0'){

        count ++;

    }

    cout << "The total number of letters = " << count;

    return 0;

}