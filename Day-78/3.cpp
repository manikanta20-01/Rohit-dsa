// 3: Find the Number of even elements in a given array of size N.

#include<iostream>
using namespace std;

int Even(int arr[],int index,int n)
{
    if(index == n)
     return 0; 
    int currEle = arr[index] % 2 == 0 ? 1 : 0;
    return currEle + Even(arr,index + 1,n);

}
int main()
{
    int arr[] = {2,5,8,1,6};
    int index = 0;
    int n = 5;
    cout << Even(arr,index,n);
}