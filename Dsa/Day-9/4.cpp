
// Fourth Pattern:

//       A B C D
//       A B C
//       A B
//       A

#include <iostream>
using namespace std;

int main()

{
    
    for(int i = 4;i >= 0;i--)
    {
        char curr = 'A';
        for(char j = 'A';j < 'A' + i;j++)
        {
            cout << curr << " ";
            curr++;
        }
        cout << endl;
    }
}

