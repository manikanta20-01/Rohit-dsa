// 2: Write a recursive function to reverse the elements of an array.

#include<iostream>
using namespace std;

void rev(int arr[], int start, int end) {
    // Base condition
    if (start < end) {
        swap(arr[start], arr[end]);
        rev(arr, start + 1, end - 1);
    }
}

int main() {
    int arr[] = {3, 5, 6, 8, 9};
    int start = 0;
    int end = 4;

    rev(arr, start, end);

    for (int i = 0; i <= end; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
