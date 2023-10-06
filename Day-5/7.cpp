// Print n’th Fibonacci number.

#include <iostream>
using namespace std;

int fibbonoci(int n)
{
    if(n <= 1) return n;

    int prev = 0,curr = 1;

    for(int i = 2;i <= n;++i)
    {
        int next = prev + curr;
        prev = curr;
        curr = next;
    }

return curr;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "The " << n << "th Fibonacci number is: " << fibbonoci(n) << endl;


}