//  Two numbers are given, print the bigger number, It is given that both numbers can’t be the same

#include <iostream>
using namespace std;
int main()
{
    int first, second;
    
    cout << "Enter your first number" << endl;
    cin >> first;
    cout << "Enter your second number" << endl;
    cin >> second;
    cout << "Your output is : " << endl;

    if(first == second)
    {
        cout << "Both are Same" << endl;
    }
    else
    {
        if(first > second)
        {
            cout << first << endl;
        }
        else{
           cout << second << endl; 
        }
        
    }
}


