#include <iostream>
using namespace std;

int binarySearch(int arr[],int n,int key)
{
    int mid,start = 0,end = n - 1;
    while(start <= end)
    {
        mid = start + (end - start)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] < key)
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
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

