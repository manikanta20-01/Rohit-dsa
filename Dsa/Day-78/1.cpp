// 1: Find the Maximum element in a given array of size N.

#include<iostream>
using namespace std;

int maxEle(int arr[],int index,int n)
{
    if(index == n - 1)
     return arr[index];
    return max(arr[index],maxEle(arr,index + 1,n));
    
}

int main()
{
    int arr[] = {3,5,8,1,6};
    int index = 0;
    int n = 5;
    cout << maxEle(arr,index,n);
}