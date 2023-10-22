#include <iostream>
using namespace std;

class Swap{

    public:

    int a, b;

    void getdata(){

        cout << "Enter two numbers : ";
        cin >> a >> b;

        cout << "\nBefore swap :\n";
        cout << "a = " << a << " b = " << b << endl;
    }

    void swapv(){

        int c;

        c = a;
        a = b;
        b = c;

    }

    void display(){

        cout << "After swap :\n";
        cout << "a = " << a << " b = " << b;
    }
};

int main(){

    Swap s;
    s.getdata();
    s.swapv();
    s.display();

}