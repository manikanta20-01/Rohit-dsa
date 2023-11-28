#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int *ptr = arr;

    // print the adderess of first element or 1

    cout << arr << endl;
    cout << arr+0 << endl;
    cout << &arr[0] << endl;
    cout << ptr << endl;

    // print the adderess of second element or 2

    cout << arr + 1 << endl;
    cout << ptr + 1 << endl;
    cout << &arr[1] << endl;

    // print the value at zero index 

    cout << *arr << endl;
    cout << arr[0] << endl;
    cout << *ptr << endl;
    cout << *(arr + 0) << endl;

    // print all the address 
    

    for(int i = 0;i < sizeof(arr) / sizeof(arr[0]);i++)
    {
        cout << arr + i << endl;
    }


}