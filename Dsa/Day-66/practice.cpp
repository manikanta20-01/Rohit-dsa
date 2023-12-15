#include<iostream>
using namespace std;
void fun(int *p)
{
    *p = *p + 10;
}
int main()
{
    int n = 10;
    int *p = &n; // single pointer
    int **p2 = &p; // Double pointer
    int ***p3 = &p2; // triple pointer
    // cout << p << endl;
    // cout << p2 << endl;
    // cout << p3 << endl;

    // **p2 = **p2 + 5;
    fun(p);
    cout << n << endl;

}





