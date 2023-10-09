// 3: Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.


#include <iostream>
using namespace std;



int findElement(int a[],int size,int element)
{
    for(int i = 0;i < size;i++)
    {
        if(a[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int size;
    
    cout << "Enter size of Element : " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter" << size << " elements for the array:" << endl;
    for(int i = 0;i < size;i++)
    {
        cin >> arr[i];
    }  
    int element;
    cout << "Enter Element to find : " << endl;
    cin >> element;

    int index = findElement(arr,size,element);

    cout << index << endl;
    
    return 0;
}

