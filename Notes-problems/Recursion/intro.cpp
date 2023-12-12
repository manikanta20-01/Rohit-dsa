#include<iostream>
using namespace std;

// void fun3(int n)
// {
//     if(n == 0)
//     {
//         cout << "Happy birthday" << endl;
//     return;
//     }
//     cout << n << " happy birthday\n";
//     fun3(n - 1);
// }

void print(int n)
{
    // Base condition
    if(n == 1)
    {
        cout << 1 << endl;
        return;
    }
    cout << n << endl;
    print(n - 1);
}

int main()
{
    // Iterative approach
    // int n = 5;
    // for(int i = n;i > 0;i--)
    // {
    //     cout << i << " Days left for birthday" << endl;
    // }
    // cout << "Happy Birthday";

    int n = 6;
    print(n); 
}