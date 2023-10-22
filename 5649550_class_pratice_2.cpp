#include <iostream>
using namespace std;

class student{

    private:

    string name;
    int id;
    int score;
    double Final_score;

    public:

    void getdetails(){

        cout << "Enter name : ";
        cin >> name;

        cout << "Enter Student ID : ";
        cin >> id;

        cout << "Enter total marks out of 500 : ";
        cin >> score;

        Final_score = (double)score/500*100;

    }

    void putdetails(){

        cout << "Student details : \n";
        cout << "Student Name : " << name << endl;
        cout << "Student ID : " << id << endl;
        cout << "Score : " << score << endl;
        cout << "Total score : " << Final_score << endl;

    }

};

int main(){

    student std;

    std.getdetails();
    std.putdetails();

}