#include <iostream>
using namespace std;

int array(int arr[]){

    int s;

    for(int i = 0; i < 10; i ++){

        for(int j = 0; j < 9; j ++){

            if(arr[j] < arr[j+1]){

                s = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = s;

            }
        }

    }
}

int main(){

    int arr_2[10]; 

    cout << "Enter numbers : " ;

    for(int i = 0; i < 10; i++){

        cin >> arr_2[i];

    }
    array(arr_2);

    cout << "The smallest value is " << arr_2[9];

}