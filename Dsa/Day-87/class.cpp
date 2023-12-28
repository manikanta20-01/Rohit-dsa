#include<iostream>
using namespace std;

// void print(int arr[],int index,int n,int sum)
// {
//     if(index == n)
//     {
//         cout << sum << " " << endl;
//         return;
//     }
//     // not include
//     print(arr,index + 1,n,sum);
//     // include
//     print(arr,index + 1,n,sum + arr[index]);
// }

// int main()
// {
//     int arr[] = {1,2,3,4};
//     print(arr,0,4,0);
// }

bool find(int arr[],int index,int n,int target)
{
    if(target == 0)
      return 1;
    if(target < 0 || index == n)
      return 0;
    
    return find(arr,index + 1,n,target) || find(arr,index + 1,n,target - arr[index]);
}

int main()
{
    int arr[] = {1,2,3,4};
    int target = 6;
    cout << find(arr,0,4,target) << " " << endl;
}