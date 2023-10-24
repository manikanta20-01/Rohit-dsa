#include <iostream>
#include <vector>
#include <utility>
using namespace std;

pair<long long, long long> indexes(vector<long long> arr, long long target) {
    long long start = 0;
    long long end = arr.size() - 1;
    long long leftindex = -1;
    long long rightindex = -1;
    long long mid;

    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            leftindex = mid;
            end = mid - 1;
        } else if (arr[mid] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    start = 0;
    end = arr.size() - 1;

    while (start <= end) {
        mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            rightindex = mid;
            start = mid + 1;
        } else if (arr[mid] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return {leftindex, rightindex};
}

int main() {
    vector<long long> arr;
    long long n, target;

    cout << "Enter the number of elements in the sorted array: ";
    cin >> n;

    cout << "Enter the sorted elements of the array: ";
    for (long long i = 0; i < n; i++) {
        long long element;
        cin >> element;
        arr.push_back(element);
    }

    cout << "Enter the target value: ";
    cin >> target;

    pair<long long, long long> result = indexes(arr, target);

    if (result.first == -1) {
        cout << "Target not found in the array." << endl;
    } else {
        cout << "Leftmost index of " << target << ": " << result.first << endl;
        if (result.second != -1) {
            cout << "Rightmost index of " << target << ": " << result.second << endl;
        } else {
            cout << "Target appears only once in the array." << endl;
        }
    }

    return 0;
}
