#include<iostream>
using namespace std;

// void print(int arr[],int index,int n)
// {
//     if(index == n)
//      return;
//      print(arr,index + 1,n);
//     cout << arr[index] << " ";
    
// }
// int main()
// {
//     int arr[] = {3,7,6,2,8};
//     int index = 0;
//     int n = 5;
//     print(arr,index,n);

//     return 0;
// }

// sum

// int sum(int arr[],int index,int n)
// {
//     if(index == n)
//       return 0;
//      return arr[index] + sum(arr,index + 1,n);
// }
// int main()
// {
//     int arr[] = {3,7,6,2,8};
//     int index = 0;
//     int size = 5;
//     cout << sum(arr,index,size);

//     return 0;
// }


// minimum element

int minEle(int arr[],int index,int n)
{
    if(index == n - 1)
      return arr[index];
    return min(arr[index],minEle(arr,index + 1,n));
}
int main()
{
    int arr[] = {3,7,6,2,8};
    int index = 0;
    int size = 5;
    cout << minEle(arr,index,size);

    return 0;
}


