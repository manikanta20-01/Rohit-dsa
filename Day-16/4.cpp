// Write a program to convert Octal numbers to decimal numbers.

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
        rem = num % 10;
        // dividend
        num = num / 10;
        // answer
        ans = rem * mul + ans;
        // multiplication
        mul = mul * 8;
    }
    cout << "Binary number : " << ans << endl;
}
