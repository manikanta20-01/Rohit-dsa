// 2: Print all numbers from 10 to n using recursion, where n will be greater than 10.

#include<iostream>
using namespace std;

void rNum(int num,int N)
{

    if(num == N)
    {
        cout << N << endl;
        return;
    }
    cout << num << endl;
    rNum(num - 1,N);
};
int main()
{
    int target = 10;
    rNum(target,1);
    return 0;
}