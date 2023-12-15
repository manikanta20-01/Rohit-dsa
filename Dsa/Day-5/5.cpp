// Print Sum of square of first n natural number.

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter number";
    cin >> number;

    for(int i = 1;i <= number;i++)
    {
        cout << "Squre of : " << i << " = " << i*i << endl;


    }
}