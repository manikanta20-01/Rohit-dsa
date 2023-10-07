// 3: There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.

#include <iostream>
using namespace std;

int three(int a,int b,int c)
{
    int temp = a;
    a = b;
    b = c;
    c = temp;
    
}

int main()
{
    int a,b,c;
    cout << "Enter a number : " << endl;
    cin >>  a >> b >> c;
    cout << "a  " << a << endl;
    cout << "b  " << b << endl;
    cout << "c  " << c << endl;

    return 0;
}