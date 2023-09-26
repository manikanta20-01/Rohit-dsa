// Fourth Pattern:

// F G H I J K  
// F G H I J K
// F G H I J K
// F G H I J K
// F G H I J K


#include <iostream>
using namespace std;

int main()
{
    for(int i = 0;i <= 4;i++)
    {
        for(char j = 'F';j <= 'K';j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}


