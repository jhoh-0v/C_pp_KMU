#include <iostream>
using namespace std;

int prime(int,int);

int main()
{
    int startvalue, endvalue;

    cout << "Enter the start value =";
    cin >> startvalue;

    cout << "Enter the end value =";
    cin >> endvalue;

    prime(startvalue, endvalue);
    return 0;
}

int prime (int startvalue, int endvalue)
{
    int i, j, count;
    for (i=startvalue; i<=endvalue; i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            count = count+1;
        }
        if (count==2)
        cout << i << endl;
    }
}