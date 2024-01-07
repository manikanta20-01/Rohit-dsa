#include<iostream>
using namespace std;

class Human
{
    private:
    int a;

    protected:
    void fun()
    {
        a = 10;
        b = 20;
        c = 30;
    }
    int b;
    public:
    int c ;
};
int main()
{
    Human mani;
    mani.c = 10;

}