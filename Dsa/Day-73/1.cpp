// 1: Print all odd numbers from 1 to n using recursion.

#include<iostream>
using namespace std;

void oddNum(int num,int N)
{
    if(num == N)
    {
        cout << N << endl;
        return;
    }
    cout << num << endl;
    oddNum(num + 2,N);
}

int main()
{
    int target = 10;
    if(target % 2 == 0)
      target--;
    oddNum(1,target);
}