// 2 3 13 8 7
// 3 13 8 7
// 13 8 7
// 8 7
// 7

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2,3,13,8,7};
    int n = 5;
    for(int row = 0;row < n;row++)
    {
        for(int col = row;col < n;col++)
        {
            cout << arr[col] << " ";
        }
        cout << endl;
    }
}

