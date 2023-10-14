// Search Element in an array

#include <iostream>
using namespace std;

int sElement(int arr[],int n,int k)
{
    for(int i = 0;i < n;i++)
    {
        if(arr[i] == k)
        {
            return i;
            break;
        }
    }
    return -1;
}

int main()
{
    int size,k;
    cout << "Enter the size of array : " << endl;
    cin >> size;
    int a[size];
    cout << "Enter array elements : " << endl;
    for(int i = 0;i < size;i++)
    {
        cin >> a[i];
    }
    cout << "Enter the Search Element : " << endl;
    cin >> k;
    int x = sElement(a,size,k);
    if (x != -1) {
        cout << "Element found at index: " << x << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

}
