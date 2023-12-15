// 4: Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.

#include <iostream>
using namespace std;

void characters()
{
char cArray[26];

for (int i = 0;i < 26;i++)
{
    cArray[i] = 'a' + i;
}

for(int i = 0;i < 26;i++)
{
    cout << cArray[i] << endl;
}

cout << endl;
}
int main()
{
    characters();
};


