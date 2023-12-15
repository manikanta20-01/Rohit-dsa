// 1: Find the cube of a number using Function. 

#include <iostream>
using namespace std;
int cubeNumber(int n)
{
    int curr = n * n * n;
    return curr;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Cube of " << n << " is " << cubeNumber(n) << endl;
    return 0;
}

