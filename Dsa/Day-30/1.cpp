// 1: An array is given in decreasing order with Key, Find the index of key, if key is not present, print -1;

#include <iostream>
using namespace std;

int binarySearch(int arr[],int n,int target)
{
    int start = 0,end = n - 1,mid;
    mid = start + (end - start)/2;

    if(arr[mid] == target)
    {
        return mid;
    }
    else if(arr[mid] > target)
    {
        start = mid + 1;
    }
    else 
       end = mid - 1;
}

int main()
{
    int arr[1000];
    int size,key;
    cout << "Enter the array size : ";
    cin >> size;
    cout << "Enter the array elements ";
    for(int i = 0;i < size;i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key ";
    cin >> key;
    int result = binarySearch(arr,size,key);
    if (result != -1)
    {
        cout << "Key found at index: " << result << endl;
    }
    else
    {
        cout << "Key not found in the array." << endl;
    }

}