#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter Binary" << endl;
    cin >> num;
    int rem,ans = 0,mul = 1;
    while(num > 0)
    {
        // remainder
        rem = num % 10;
        // multiplication
        num = num / 10;
        // answer 
        ans = rem * mul + ans;
        // multiplication
        mul = mul * 2;
    }
    cout <<"Decimal number is : " <<  ans << endl;
}