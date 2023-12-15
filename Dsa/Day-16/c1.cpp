#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter number" << endl;
    cin >> num;
    int rem,ans = 0,mul = 1;
    while(num > 0)
    {
        // remainder
        rem = num % 2;
        // dividend
        num /= 2;
        // answer
        ans += rem * mul;
        // multiplication  
        mul *= 10;
    }
    cout <<"Binary number is : " <<  ans << endl;
}

