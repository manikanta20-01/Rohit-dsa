#include<iostream>
using namespace std;

int main()
{
    //int variable is assigned to heap

    int *ptr = new int;
    *ptr = 5;
    cout << *ptr << endl;

//    float variable is assigned to heap

    float *ptr1 = new float;
    *ptr1 = 5.5;
    cout << *ptr1 << endl;

   int n;
   cout << "Enter the size of array: " << endl;
   cin >> n;

   int *p = new int[n];

   // Take the input

   for(int i = 0;i < n;i++)
   {
    p[i] = i + 1;
   }

   // Print the output

   for(int i = 0;i < n;i++)
   {
    cout << p[i] << endl;
   }

   // delete the allocated memory in Heap

   delete ptr;
   delete ptr1;
   delete[] p;
   
}