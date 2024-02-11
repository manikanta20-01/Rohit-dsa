#include<iostream>
using namespace std;

class Customer
{
    string name;
    int acc_num,balance;
    static int totalCustomer;
    static int total_balance;
    public:

    Customer(string name,int acc_num,int balance)
    {
        this->name = name;
        this->acc_num = acc_num;
        this->balance = balance;
        totalCustomer++;
        total_balance+=balance;
    }
    static void accStatic()
    {
        cout << "total_customer: " << totalCustomer << endl;
        cout << "total_balance: " << total_balance << endl;
    }
    void deposit(int amount)
    {
        if(balance > 0)
        {
            balance += amount;
            total_balance += amount;
        }
    }
    void withdraw(int amount)
    {
        if(amount <= balance && amount > 0)
        {
            balance -= amount;
            total_balance -= amount;
        }

    }
    void display()
    {
        cout << name << " " << acc_num << " "<< balance << " " << totalCustomer  << endl;
    }
    void total()
    {
        cout << totalCustomer << endl;
    }

};

int Customer::totalCustomer = 0;
int Customer::total_balance = 0;


int main()
{
    
    Customer A1("manikanta",0123,4000);
    Customer A2("ganesh",1235,5000);

    // A1.display();
    // A2.display();
    Customer::accStatic();
    // A1.deposit(800);
    // A2.withdraw(2000);
    A1.display();
    A2.display();

}