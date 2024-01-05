// #include<iostream>
// using namespace std;

// class customer
// {
//     string name;
//     int *data;

//     public:
//     customer()
//     {
//         name = "manikanta";
//         data = new int;
//         *data = 12;
//         cout << "Construcor called\n";
//     }

//     ~customer()
//     {
//         delete data;
//         cout << "destructor called\n";
//     }
// };

// int main()
// {
//     customer A1;
// }


#include<iostream>
using namespace std;

class customer
{
    string name;
    int *data;

    public:
    customer(string name)
    {
        this->name = name;
        cout << "Construcor called : " << name << endl;
    }

    ~customer()
    {
        cout << "destructor called: " << name << endl;
    }
};

int main()
{
    customer A1("1"),A2("2"),A3("3");
}