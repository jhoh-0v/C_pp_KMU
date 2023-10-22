#include <iostream>
using namespace std;

class additionclass{

    private:

    int num_1, num_2, num_3;

    public:

    void read(){

        cout << "Enter Number 1 : ";
        cin >> num_1;

        cout << "Enter Number 2 : ";
        cin >> num_2;

    }

    void sum(){

        num_3 = num_1 + num_2;

    }

    void print(){

        cout << "Result : " << num_1 << " + " << num_2 << " = " << num_3 << endl;

    }
};

int main(){

    additionclass obj1;
    additionclass obj2;

    cout << "Additionclass : obj1\n";
    obj1.read();
    obj1.sum();
    obj1.print();

    cout << "Additionclass : obj2\n";
    obj2.read();
    obj2.sum();
    obj2.print();

}