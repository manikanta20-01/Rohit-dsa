// // Day 81/180 Time and Space Complexity in Recursion

// // Calculate the time and space complexity of each program

// // 1: 
// int fact(int n)
// {
//    if(n<=1)
//    return 1;


//    return n*fact(n-1);

// }

// // T.C  - o(n)

// // 2: 
// int power(int base, int exponent) {
//    if (exponent == 0)
//        return 1;
//    return base * power(base, exponent - 1);
// }

// // T.C  - o(n)



// // 3:
// bool isPalindrome(string str, int start, int end) {
//    if (start >= end)
//        return true;
//    return (str[start] == str[end]) && isPalindrome(str, start + 1, end - 1);
// }

// // T.C  - o(n)


// // 4:
// void reverseString(string& str, int start, int end) {
//    if (start < end) {
//        swap(str[start], str[end]);
//        reverseString(str, start + 1, end - 1);
//    }
// }

// // T.C  - o(n)


// // 5:
// bool isEven(int n) {
//    if (n == 0)
//        return true;
//    return !isEven(n - 1);
// }

// // T.C  - o(n)

