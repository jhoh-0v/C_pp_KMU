#include <iostream>
#include <string>
//using namespace std;

int main(){

    std::string name = "Peter";
    std::string dob = "July 14th, 1991";
    std::string mobile = "010-1234455"; 

    std::cout << "NAME:" << std::string(name) << std::endl;
    std::cout << "DOB:" << std::string(dob) << std::endl;
    std::cout << "MOBILE:" << std::string(mobile) << std::endl;

    return 0;
}