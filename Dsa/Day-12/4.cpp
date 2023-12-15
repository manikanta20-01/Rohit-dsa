// 4: Take three numbers a,b,c from the user, print yes if a is either greater than b or c. Otherwise print NO.

#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter the Number : " << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if(a > (b and c))
    {
        cout << "YES";
    } 
    else{
        cout << "NO";
    }

}