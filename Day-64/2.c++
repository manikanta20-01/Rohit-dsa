#include<iostream>
using namespace std;

void swapping(int *p1,int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    cout << p1 << " " << p2 << endl;
    cout << &p1 << " " << &p2 << endl;
}

int main()
{
    int first = 10,second = 20;
    
    swapping(&first,&second);

    cout << first << " " << second;


}