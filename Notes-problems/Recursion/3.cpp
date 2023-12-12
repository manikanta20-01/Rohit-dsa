#include<iostream>
using namespace std;

void print(int num,int N)
{
    if(num == N)
    {
        cout << N << endl;
        return;
    }
    cout << num << endl;
    print(num + 1,N);
}

int main()
{
    int start,end;
    cout << "Enter the start number: ";
    cin >> start;
    cout << "Enter the end number: ";
    cin >> end;
    print(start,end);
}




