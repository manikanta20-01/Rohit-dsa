// Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.

#include <iostream>
using namespace std;

int main()
{
    int month;
    cout << "Enter number" << endl;
    cin >> month;

    if(month == 1)
    {
        cout << "January" << endl;
    }
    else if(month == 2)
    {
        cout << "Febraury" << endl;
    }
    else if(month == 3)
    {
        cout << "March" << endl;
    }
    else if(month == 4)
    {
        cout << "April" << endl;
    }
    else if(month == 5)
    {
        cout << "May" << endl;
    }
    else if(month == 6)
    {
        cout << "June" << endl;
    }
    else if(month == 7)
    {
        cout << "July" << endl;
    }
    else if(month == 8)
    {
        cout << "August" << endl;
    }
    else if(month == 9)
    {
        cout << "September" << endl;
    }
    else if(month == 10)
    {
        cout << "october" << endl;
    }
    else if(month == 11)
    {
        cout << "November" << endl;
    }
    else if(month == 12)
    {
        cout << "December" << endl;
    }
}