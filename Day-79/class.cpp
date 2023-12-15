#include<iostream>
using namespace std;

// bool checkPal(string str,int start,int end)
// {
//     // Base condition

//     if(start >= end)
//        return 1;
//     if(str[start] != str[end])
//        return 0;
//     return checkPal(str,start+1,end-1);
    
// }

// int main()
// {
//     string str = "naman";
//     cout << checkPal(str,0,4);

//     return 0;
// }

// count vowels.........................................................................

// int countVowel(string str,int index)
// {
//     // Base condition
//     if(index == -1)
//        return 0;
//     // string is vowel
//     if(str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u')
//     {
//         return 1 + countVowel(str,index - 1);
//     }
//     // Not vowel

//     else{
//         return countVowel(str,index - 1);
//     }
    
// }

// int main()
// {
//     string str = "manikanta";
//     cout << countVowel(str,9);

//     return 0;
// }

// Reverse a string...................................................................

// void rev(string &str,int start,int end)
// {
//     // Base condition
//     if(start >= end)
//        return;
//     // reverse char
//     char c = str[start];
//     str[start] = str[end];
//     str[end] = c;

//     rev(str,start+1,end-1);
        
// }

// int main()
// {
//     string str = "manikanta";
//      rev(str,0,str.length() - 1);
//     cout << str;
//     return 0;
// }


// Lower to Upper....................................................................

// void lowToupp(string &str,int index)
// {
//     // Base condition
//     if(index == -1)
//        return;

//     str[index] = 'A' + str[index] - 'a';

//     return lowToupp(str,index - 1);    
// }

// int main()
// {
//     string str = "manikanta";
//      lowToupp(str,str.length() - 1);
//     cout << str;
//     return 0;
// }

