// 5: Find the second largest element in an array of unique elements of size n. Where n>3.

// #include <iostream>
// #include <limits.h>
// using namespace std;

// int secondLargest(int arr[],int size)
// {
//     int largest = arr[0];
//     int secondLargest = INT_MIN;
//     for(int i = 0;i < size;i++)
//     {
//         if(arr[i] > largest)
//         {
//             secondLargest = largest;
//             largest = arr[i];
//         }
//         else if (arr[i] > secondLargest && arr[i] != largest)
//         {
//             secondLargest = arr[i];
//         }
//     }
//     return secondLargest;
// }

// int main()
// {
//     int n;

//     cout << "Enter size of array: ";
//     cin >> n;

//     int a[n];  // Declare an array of size n

//     cout << "Enter elements of the array:" << endl;
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     int x = secondLargest(a, n);
//     cout << "The second largest element is: " << x << endl;

//     return 0;
// }

