
#include<iostream>
using namespace std;

int main()
{
    char arr[] = {"ABCDE"};
    char *ptr = arr; 
    // 1: Print the address of the first index of the char array in c++.
    cout << (void*)arr << endl; 
    // 2: Print the address of the char variable in c++.
    cout << (void*)ptr << endl;

    // 3: Print the address of String in c++.

    string str = "manikanta";
    cout << str << endl;
}



