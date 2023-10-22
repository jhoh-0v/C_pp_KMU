#include <iostream>
using namespace std;

int main(){

    char c[2048];
    cout << "input : ";
    int count = 0;
    while(c[count] != '\0'){

        cin >> c[count];
        count ++;
    }

    cout << "total : " << count;
}