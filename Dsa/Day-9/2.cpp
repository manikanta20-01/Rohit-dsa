// Second Pattern:
   
//     A
//     A B
//     A B C
//     A B C D
//     A B C D E


#include <iostream>
using namespace std;

int main()
{
    for(int i = 0;i <= 5;i++)
    {
        char curr = 'A';
        for(int j = 1;j <= i;j++)
        {
            cout << curr << " ";
            curr++;
        }
        
        cout << endl;
    }
}

// A 
// A B
// A B C
// A B C D
// A B C D E