#include <iostream>
using namespace std;

int main()
{
    int arr[1000];
    int size;
    cout << "Enter the Size of array " << " "<< endl;
    cin >> size;
    cout << "Enter the Array Elements : " << endl;
    for(int i = 0;i < size;i++)
    {
        cin >> arr[i];
    }
    for(int i = size - 2;i >= 0;i--)
    {
        bool swapped = 0;
        for(int j = 0;j <= i;j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swapped = 1;
                swap(arr[j],arr[j + 1]);
                
            }
        }
        if(swapped = 0)
          break;
    }
    for(int i = 0;i < size;i++)
    {
        cout << arr[i] << " ";
    }
}