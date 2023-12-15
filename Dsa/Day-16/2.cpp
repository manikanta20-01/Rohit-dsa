// Write a program to convert decimal numbers to binary numbers using a for loop.

#include <iostream>
using namespace std;

int main()
{
    int num,ans = 0,mul = 1,rem;
    cout << "Enter Decimal number : " << endl;
    cin >> num;

    while(num > 0)
    {
        // remainder 
        rem = num % 2;
        // dividend
        num = num / 2;
        // answer
        ans = rem * mul + ans;
        // multiplication
        mul = mul * 10;
    }
    cout << "Binary number : " << ans << endl;
}

