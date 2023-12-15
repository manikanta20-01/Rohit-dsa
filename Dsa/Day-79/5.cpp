// 5: Given a String, count the number of consonants in it.

#include<iostream>
using namespace std;

int constant(string str,int index)
{
    // Base condition
     if(index == -1)
       return 0;
    // constant is proved

    if(str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u')
    return constant(str,index - 1);
    else{
        return 1 + constant(str,index - 1);
    }
}

int main()
{
    string str = "manikanta";
    int size = str.length() - 1;
    cout << constant(str,size);
    return 0;
}

