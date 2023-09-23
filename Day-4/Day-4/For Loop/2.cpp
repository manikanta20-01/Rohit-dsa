// Print all Odd numbers from 1 to n, take n as an input from the user.

#include <iostream>
using namespace std;

int main()
{
    int i = 1,n;
    cout << "Enter Your Number" << endl;
    cin >> n;
    while(i < n)
    {
        if(i % 2 != 0)
        {
            cout << i << endl;
        }
        i++;
    }
}