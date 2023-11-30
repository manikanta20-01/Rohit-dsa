//  What is void*, and what is its use case

// void* is used to print char array in pointers

// #include<iostream>
// using namespace std;

// int main()
// {
//     char arr[] = {'a','b'};
//     char *ptr = arr;
//     cout << (void*)arr << endl;   // Printing the address of the char array as a void pointer
    
//     cout << (void*)&ptr << endl;  // Printing the address stored in the pointer

// output is 
// 0x61ff0e
// 0x61ff08
// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// 2. What is static_cast in c++.

// In C++, static_cast is one of the four casting operators provided by the language for type casting. The primary purpose of static_cast is to perform type conversions that are known at compile time and are considered safe.

// new_type static_cast <new_type> (expression);



// #include<iostream>
// using namespace std;

// int main()
// {
//     char arr[] = {'a','b'};
//     char *ptr = arr;
//     cout << static_cast<void*>(arr) << endl;   // Printing the address of the char array as a void pointer
//     cout << static_cast<void*>(&ptr) << endl;

// //      0x61ff0e
// //  0x61ff08
// }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// 3.const char *str = "Hello, World!";
//  char *str = "Hello, World!";

// #include<iostream>
// using namespace std;

// int main()
// {
//     const char *str = "Hello, World!";  // print the varaiable 
//     cout << &str << endl;
//     cout << static_cast<void*>(&str) << endl;

//      char *str1 = "Hello, World!"; // convert this is string or you can use const                            
//     cout << &str1 << endl;         // else it shows error

// }

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// #include <iostream>
// using namespace std;

//     int calculateLength(const char *str) {
//     int length = 0;

//     // Calculate the length of string  
//     while(*str != '\n')
//     {
//         length++;
//         str++;
//     }
    
//    }

// int main() {
//     const char *myString = "Hello, World!";
//     cout << "Length of the string: " <<calculateLength(myString) << endl;
// };


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// 5: Write a function to check if a C-style string is a palindrome.

#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(const char *str) {
    int length = strlen(str);
  // Check for palindrome  
//   while(*str != '\0')
//     {
//         length++;
//         str++;
//     }
 
    for(int i = 0;i < length  / 2;i++)
    {
        if(str[i] != str[length - 1 - i])
        {
            return false;
        }
    }
    return true;
  
   


}

int main() {
    const char *palindrome1 = "level";
    const char *palindrome2 = "hello";
    cout << "Is '" << palindrome1 << "' a palindrome? " << (isPalindrome(palindrome1) ? "Yes" : "No") <<endl;
    cout << "Is '" << palindrome2 << "' a palindrome? " << (isPalindrome(palindrome2) ? "Yes" : "No") <<endl;
    return 0;
}









