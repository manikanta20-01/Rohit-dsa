#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10,10,1,5,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i < size - 1;i++)
    {
        int index = i;
        for(int j = i+1;j < size;j++)
        {
            if(arr[index] > arr[j])
                index = j;
        }
        swap(arr[i],arr[index]);
    }
    for(int i = 0;i < size;i++)
    {
        cout << arr[i] << " ";
    }
}

