// first pattern 
// triangle ion star 

#include <iostream>
using namespace std;

int main()
{
    for(int i = 0;i <= 5;i++)
    {
        for(int j = 1;j <= i;j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}


// output

// * 
// * *
// * * *
// * * * *
// * * * * *