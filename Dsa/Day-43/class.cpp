#include<iostream>
using namespace std;

// Print all the elements in matrix
// int main()
// {
//     int arr[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};
//     for(int i = 0;i < 4;i++)
//     for(int j = 0;j < 3;j++)
//     cout << arr[i][j] << " ";
//     return 0;
// };


int main()
{
    int arr[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};
    for(int i = 0;i < 4;i++)
    for(int j = 0;j < 3;j++)
    if(arr[i][j] == 7)
    {
        cout << "Yes" << endl;
    }
}