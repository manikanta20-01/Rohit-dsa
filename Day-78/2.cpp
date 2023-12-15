// 2: Find the Product of all elements in a given array of size N.

#include<iostream>
using namespace std;

int product(int arr[],int index,int n)
{
    if(index == n)
     return 1; // if you given 0 all are product will be 0
    return (arr[index] * product(arr,index + 1,n));
}

int main()
{
    int arr[] = {3,5,8,1,6};
    int index = 0;
    int n = 5;
    cout << product(arr,index,n);
}