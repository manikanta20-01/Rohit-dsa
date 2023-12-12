// Dynamically create 4D Array
#include <iostream>
using namespace std;
int main() {
    int xSize = 2;
    int ySize = 3;
    int zSize = 4;
    int wSize = 5;

    // Dynamically allocate a 4D array
    int ****arr = new int***[xSize];
    for (int i = 0; i < xSize; ++i) {
        arr[i] = new int**[ySize];
        for (int j = 0; j < ySize; ++j) {
            arr[i][j] = new int*[zSize];
            for (int k = 0; k < zSize; ++k) {
                arr[i][j][k] = new int[wSize];
            }
        }
    }

    // Use the 4D array here...

    // Deallocate the memory for the 4D array
    for (int i = 0; i < xSize; ++i) {
        for (int j = 0; j < ySize; ++j) {
            for (int k = 0; k < zSize; ++k) {
                delete[] arr[i][j][k];
            }
            delete[] arr[i][j];
        }
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
