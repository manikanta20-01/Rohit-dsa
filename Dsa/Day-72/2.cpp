// 2: Print all odd number from n to 1 using recursion

#include<iostream>
using namespace std;
                              
void print(int n)
{
    
    if(n < 1)
    {
        return;
    }
    if(n % 2 != 0)
    {
        cout << n << endl;
    }
    print(n - 1);
}

int main()
{
    
    int x = 10;
    print(x);

}