#include<iostream>
using namespace std;

void fun(int *p1) {
    // Increment the pointer by 1 (equivalent to moving forward by 4 bytes for int)
    p1 += 1;
}

int main() {
    int *p = new int(10);

    cout << "Original value: " << *p << endl;
    cout << "Original memory address: " << p << endl;

    fun(p);

    cout << "Updated memory address: " << p << endl;

    delete p; // Don't forget to release the dynamically allocated memory
}
