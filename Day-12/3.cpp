// 3: Age Check: Implement a program that checks if a person is a teenager. A teenager is someone whose age is between 13 and 19 (inclusive).

#include <iostream>
using namespace std;

int main()
{
    int temp;
    cout << "Enter the Age : " << endl;
    cin >> temp;
    if(temp >= 13 and temp <= 19)
    {
        cout << "YES";
    } 
    else{
        cout << "NO";
    }

}