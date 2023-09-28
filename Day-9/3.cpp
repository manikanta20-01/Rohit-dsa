// Third Pattern:
     
//        10
//        10 11
//        10 11 12
//        10 11 12 13
//        10 11 12 13 14
//        10 11 12 13 14 15


#include <iostream>
using namespace std;

int main()
{
    for(int i = 10;i <= 15;i++)
    {
        for(int j = 10;j <= i;j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    
}
