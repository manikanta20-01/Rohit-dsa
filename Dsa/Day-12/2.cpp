// 2: Even and Positive Number: Write a program that prints “YES” if a given number is both even and positive, otherwise it will print “NO”.

#include <iostream>
using namespace std;

int main()
{
    int temp;
    cout << "Enter the Number: " << endl;
    cin >> temp;
    if(temp > 0 and temp % 2 == 0)
    {
        cout << "YES";
    } 
    else{
        cout << "NO";
    }

}