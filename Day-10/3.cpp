// Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

//         5
//       5 4
//     5 4 3
//   5 4 3 2 
// 5 4 3 2 1


#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        // Print leading spaces
        for (int j = 1; j <= num - i; j++)
        {
            cout << "  ";
        }

        // Print numbers in descending order
        for (int k = num; k >= num - i + 1; k--)
        {
            cout << k;
            if (k > num - i + 1)
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}


