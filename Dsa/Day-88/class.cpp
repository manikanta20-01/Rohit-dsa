#include<iostream>
using namespace std;


int tsum(int arr[],int index,int n,int sum)
{
    if(sum == 0)
    return 1;
    if(index == n || sum < 0)
    return 0;
    return tsum(arr,index + 1,n,sum) + tsum(arr,index,n,sum - arr[index]);
   
}    

int main()
{
    int arr[] = {2,3,4};
    int sum = 6;
    cout << tsum(arr,0,3,sum) << " " << endl;
}