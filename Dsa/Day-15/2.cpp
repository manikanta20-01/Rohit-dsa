// 2: Find the factorial of a number n using a while loop and do a while loop.

#include <iostream>
using namespace std;

int main()
{
    int n,i = 1,fact = 1;
    cout << "Enter number : " << endl;
    cin >> n;
    while(i <= n)
    {
        fact = fact * i;
        
        i++;
    }
    cout << "Factorial is : " << fact << endl;

    
}




