#include<iostream>
using namespace std;

// int lSearch(int arr[],int index,int length,int n)
// {
//     // Base condition
//     if(index == length)
//        return -1;

//     if(arr[index] == n)
//        return 1;

//     return lSearch(arr,index + 1,length,n);
// }

// int main()
// {
//     int arr[] = {2,8,9,6,5};
//     int index = 0;
    
//     cout << lSearch(arr,index,5,6);
// }

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


