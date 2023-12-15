// 3: Write a Table program using recursion. Take input number n, and print its table. 

#include<iostream>
using namespace std;

void numTable(int num,int mul)
{
    if(mul > 10)
    {
        return;
    }
    cout << num * mul << endl;
    numTable(num,mul + 1);
};
int main()
{
    int target = 10;
    numTable(target,1);
}