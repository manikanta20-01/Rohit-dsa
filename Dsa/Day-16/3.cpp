// Write a program to convert decimal numbers to Octal numbers.

#include <iostream>
using namespace std;

int main()
{
    int num,ans = 0,mul = 1,rem;
    cout << "Enter binary number : " << endl;
    cin >> num;

    while(num > 0)
    {
        rem = num % 8;
        
        ans = rem * mul + ans;
        mul = mul * 10;
        num = num / 8;
    }
    cout << "Decimal number : " << ans << endl;
}

