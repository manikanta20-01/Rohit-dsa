// First Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

//         1
//       2 1
//     3 2 1
//   4 3 2 1
// 5 4 3 2 1  

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number : " << endl;
    cin >> num;
    for(int i = 1;i <= num;i++)
    {
        for(int j = 1;j <= num - i;j++)
        {
            cout << "  ";
        }
        for(int k = i;k >= 1;k--)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}

