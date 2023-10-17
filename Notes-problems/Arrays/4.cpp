// 3 13 12 8 4
// we can reverse the array and make them

// 4 8 12 13 3
// 4 8 12 13
// 4 8 12 
// 4 8 
// 4 

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3 ,13, 12, 8, 4};
    int n = 5,x;
    
    // first reverse the array

    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    for(int row = 0;row < n;row++)
    {
        for(int col = 0;col < n - row;col++)
        {
            cout << arr[col] << " ";
        }
        cout << endl;
    }

}