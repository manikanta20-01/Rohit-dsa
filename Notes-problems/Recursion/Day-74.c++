#include<iostream>
using namespace std;

// int factorial(int n)
// {
//     if(n == 0)
//     {
//         return 1;
//     }
//     return n * factorial(n - 1);
// }

// int main()
// {
//     int num;
//     num = 5;
//     cout << factorial(num) << endl;
// }

int sNnum(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n + sNnum(n - 1);
}
int main()
{
    int num;
    num = 2;
    cout << sNnum(num) << endl;
}