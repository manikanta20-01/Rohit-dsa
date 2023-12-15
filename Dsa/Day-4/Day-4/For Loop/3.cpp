// Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.

#include <iostream>
using namespace std;

int main()
{
    int i = 4,n;
    cout << "Enter Your Number" << endl;
    cin >> n;
    while(i < n)
    {
        if(i % 4 == 0)
        {
            cout << i << endl;
        }
        i++;
    }
}


