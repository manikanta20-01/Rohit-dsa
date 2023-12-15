// 2: Reverse a number n using Function, Constraints: -5000<=n<=5000

#include <iostream>
using namespace std;

int reverse(int n)
{
    int rev = 0;
    while(n != 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return rev;
}

int main()
{
    int num;
    cout << "Enter Number : " << endl;
    cin >> num;
    cout << reverse(num) << endl;
}

