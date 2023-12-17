// 1: Given an array in non-increasing order, an element is given X, find if that element is present in the array or not. print 1 if its present else print 0.

#include<iostream>
using namespace std;
int bsearch(int arr[],int start,int end,int X)
{
    int mid = start + (end - start)/2;
    if(arr[mid] == X)
     return 1;
    else if(arr[mid] < X)
    return bsearch(arr,mid + 1,end,X);
    else
    return bsearch(arr,start,mid - 1,X);
}
int main()
{
    int arr[] = {3,5,6,8,9};
    int start = 0;
    int end = 5;
    int X = 8;
    cout << bsearch(arr,start,end,X);
}