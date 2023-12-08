#include<iostream>
using namespace std;

int main()
{
    //int variable is assigned to heap

    int *intptr = new int;
    *intptr = 5;
    cout << *intptr << endl;

//    float variable is assigned to heap

    float *floatptr = new float;
    *floatptr = 5.5;
    cout << *floatptr << endl;

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

   delete intptr;
   delete floatptr;
   delete[] p;
   
}