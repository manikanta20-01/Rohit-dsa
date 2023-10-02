// 3: Given a number n, print all the numbers from 1 to n(inclusive) which are not divisible by 3 and 5. (use Continue here).

#include <iostream>
using namespace std;

int main()
{
    int n,i = 1;
    cout << "Enter number : " << endl;
    cin >> n;
    while(i <= n)
    {
        if(i % 3 != 0 and i % 5 != 0)
        {
            cout << i << " ";
        }
        i++;
    }    
}