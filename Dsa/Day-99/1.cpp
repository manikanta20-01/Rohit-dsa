/*
1. Bank Customer Class:
Challenge: Design a Customer class for a bank system that manages customer information and basic operations.
Attributes:
name: String containing the customer's full name.
accountNumber: Unique integer identifying the customer's account.
accountBalance: Double representing the current balance in the account.
isActive: Boolean indicating whether the account is active.
Methods:
deposit(amount): Adds the specified amount to the account balance.
withdraw(amount): Deducts the specified amount from the account balance (check for sufficient funds).
transfer(amount, targetAccount): Transfers the specified amount to another customer's account (within the system).
printDetails(): Prints the customer's name, account number, and current balance.
*/


#include<iostream>
using namespace std;

class bankcust
{
private:
    string name;
    int accountNumber;
    int accountBalance;
    bool isActive;

public:
    // set
    void setname(string s)
    {
        name = s;
    }
    void setaccountNumber(int n)
    {
        accountNumber = n;
    }
    void setaccountBalance(int b)
    {
        accountBalance = b;
    }
    void setisActive(bool t)
    {
        isActive = t;
    }

    // get
    void getname()
    {
        cout << "Name: " << name << endl;
    }
    void getaccountNumber()
    {
    cout << "AccountNumber: " << accountNumber << endl;    
    }
    void getaccountBalance()
    {
    cout << "AccountBalance: " << accountBalance << endl;    
    }
    void getisActive()
    {
    cout << "isActive: " << isActive << endl;    
    }

};

int main()
{
    bankcust b;
    string name;
    cout << "Enter the name: ";
    cin >> name;
    int an;
    cout << "Enter accout number: ";
    cin >> an;



    b.setname(name);
    b.setaccountNumber(an);
    b.setaccountBalance(2000);
    b.setisActive(true);

    b.getname();
    b.getaccountNumber();
    b.getaccountBalance();
    b.getisActive();
    
    return 0;
}
