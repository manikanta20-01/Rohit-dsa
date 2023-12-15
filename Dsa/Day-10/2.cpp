// Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
   
    
//         A
//       B B
//     C C C
//   D D D D
// E E E E E



#include <iostream>
using namespace std;

int main()
{
   
    int n;
    cout << "Enter your number: " << endl;
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= n - i;j++)
        {
            cout << "  ";
        }
        char curr_char = static_cast<char>('A' + i - 1);
        for(int k = 1;k <= i;k++)
        {
            if (k == i)
                cout << curr_char;
            else
                cout << curr_char << " ";
            
        }
        cout << endl;
    }
     return 0;
}


