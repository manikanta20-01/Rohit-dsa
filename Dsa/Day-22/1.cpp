// 1: Take 20 elements from user input and find its sum with the help of an array.

#include <iostream>
using namespace std;

const int size = 20;
int s = 0;
int sum(int a[],int n)
{
    for(int i = 0;i < n;i++)
    {
        s += a[i];
    }
  return s;
}

int main()
{
    int num[size];
    cout << "Enter 20 numbers : " << endl;
    for(int i = 0;i < size;i++)
    {
        cin >> num[i];
    }
    int sumofNum = sum(num,size);
    cout << "Sum of 20 numbers is : " << sumofNum << endl;
    
    return 0;
    
}