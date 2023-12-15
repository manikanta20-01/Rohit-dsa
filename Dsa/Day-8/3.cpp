//  Third Pattern:
  
//     1 8 27 64 125 216
//     1 8 27 64 125 216
//     1 8 27 64 125 216
//     1 8 27 64 125 216
//     1 8 27 64 125 216

#include <iostream>
using namespace std;

int main()
{
    for(int i = 0;i <= 4;i++)
    {
        for(int j = 1;j <= 6;j++)
        {
            cout << j * j *j << " ";

        }
        cout << endl;
    }
}