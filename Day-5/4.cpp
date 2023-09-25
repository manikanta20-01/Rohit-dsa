// There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.

#include <iostream>
using namespace std;

int main()
{
    int firstNumber = 220;
    int lastNumber = 730;
    int commonDifference = 7;

    for(int num = firstNumber;num < lastNumber;num += commonDifference)
    {
        cout << num << endl;
    }
}



