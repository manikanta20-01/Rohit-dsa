// 2: Calculate the average of elements in an array of size 18.

#include <iostream>
using namespace std;

const int size = 18;

int s = 0;
int average(int a[],int n)
{
    for(int i = 0;i < n;i++)
    {
         s += a[i];
    }
    return static_cast<double>(s) / n;
}

int main()
{
    int num[size];
    cout << "Enter 18 numbers : " << endl;
    for(int i = 0;i < size;i++)
    {
        cin >> num[i];
    }
    int x = average(num,size);
    cout << "average of elements in an array : " << x << endl;

}

