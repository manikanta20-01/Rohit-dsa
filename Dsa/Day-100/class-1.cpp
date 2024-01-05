#include<iostream>
using namespace std;

class Customer
{
    string name;
    int account_number;
    int balance;
    int *roi;

// Default constructor

    public:
    Customer()  
    {
        name = "manikanta";
        account_number = 123;
        balance = 1000;
        roi = new int[100];
    }

// parameterized constructor

    Customer(string name,int account_number,int balance)  
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }

// constructor overloading

    Customer(string a,int b)  
    {
        name = a;
        account_number = b;
        balance = 50;
    }

// Inline constructor

    // inline Customer(string a,int b,int c): name(a),account_number(b),balance(c){

    // } 

// display function

    void display()
    {
        cout << name << " " << account_number << " " << balance << endl;
    }

// copy constructor

 Customer(Customer &B)
    {
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;
    }



};  // don't forget to semicolumn

int main()
{
   Customer C1;  
    Customer c2("ganesh", 156, 2200);
    Customer c3("pavan", 254);
    Customer c4(c3);
    C1.display();
    c2.display();
    c3.display();
    
    
    c4.display();


}