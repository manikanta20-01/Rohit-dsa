// Write a program to convert binary numbers to decimal numbers using a for loop.

#include <iostream>
using namespace std;

int main()
{
    int num,ans = 0,mul = 1,rem;
    cout << "Enter binary number : " << endl;
    cin >> num;

    while(num > 0)
    {
        rem = num % 10;
        num = num / 10;
        ans = rem * mul + ans;
        mul = mul * 2;
    }
    cout << "Decimal number : " << ans << endl;
}

