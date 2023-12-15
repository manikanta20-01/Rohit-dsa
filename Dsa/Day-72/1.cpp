// 1: Print “Coder Army” 10 times using recursion  

#include<iostream>
using namespace std;

void print(int n)
{
    
    if(n == 1)
    {
        cout << "Coder Army" << endl;
        return;
    }
    cout << "Coder Army" << endl;
    print(n - 1);

}

int main()
{
    
    int x = 10;
    print(x);


}