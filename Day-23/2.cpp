// Reverse Array 

#include <iostream>
using namespace std;

int reverse(int arr[],int n)
{
    for(int i = n - 1;i >= 0;i--)
    {
        cout << arr[i] << " ";
    }   
}

int main()
{
    int size;
    cout << "Enter the size of array : " << endl;
    cin >> size;
    int a[size];
    cout << "Enter array elements : " << endl;
    for(int i = 0;i < size;i++)
    {
        cin >> a[i];
    }
    reverse(a,size);

    

}
