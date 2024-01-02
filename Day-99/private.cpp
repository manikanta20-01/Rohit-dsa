#include<iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll_no;
    int score;
    string grade;

public:
    void setname(string n)
    {
        if (n.size() == 0)
        {
            cout << "Invalid name " << endl;
            return;
        }
        name = n;
    }
    void setroll_no(int r)
    {
        if (r < 0 or r > 100)  // Fix the condition here
        {
            cout << "Invalid roll number" << endl;
            return;
        }
        roll_no = r;
    }
    void setscore(int s)
    {
        if (s <= 35)
        {
            cout << "Fail" << endl;
            
        }
        else
        {
            cout << "Pass" << endl;
            score = s;
        }
        
    }
    void setgrade(string g)
    {
        grade = g;
    }

    void getname()
    {
        cout << "Name: " << name << endl;
    }
    void getroll_no()
    {
        cout << "Roll Number: " << roll_no << endl;
    }
    void getscore()
    {
        cout << "Score: " << score << endl;
    }
    void getgrade()
    {
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    Student S1;
    S1.setname("manikanta");
    S1.setroll_no(21);
    S1.setscore(80);
    S1.setgrade("A+");

    S1.getname();
    S1.getroll_no();
    S1.getscore();
    S1.getgrade();

    return 0;
}
