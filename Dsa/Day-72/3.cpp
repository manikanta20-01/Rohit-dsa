// 3: Print all numbers from 1 to n using recursion. 

#include<iostream>
using namespace std;
                              
void print(int n)
{
    
    if(n > 10)
    {
        return;
    }
    cout << n << endl;
    print(n + 1);
}

int main()
{
    
    int x = 1;
    print(x);

}