#include <iostream>
using namespace std;
int main()
{
int arr[] = {2,3,13,8,7};
int n = 5;
for(int row = 0;row < 5;row++)
{
    for(int col = 0;col < 5 - row;col++)
    {
        cout << arr[col] << " ";
    }
    cout << endl;
}
};