#include <iostream>
using namespace std;

int smallest(int* arr, int size);

int main()
{

	int arr[10] = { 100, 10, 50, 25, 4, 8, 40, 60, 33, 11 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "The smallest value is " << smallest(arr, n) << endl;
    cout << n << endl;
    cout << sizeof(arr) << endl;
    cout << sizeof(arr[0]);

	return 0;

}


int smallest(int* arr, int size)
{
	int i;
	int num = arr[0];

	for (i = 0; i < size; i++)
	{
	
		if (arr[i] < num)
		{
			
			num = arr[i];

		}
	}

	return num;
}