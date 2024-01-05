#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int roll_no,score;
    string grade;

};

int main()
{
    Student S1;
    S1.name = "manikanta";
    S1.roll_no = 215;
    S1.score = 80;
    S1.grade = "A+";
    cout << S1.name << " ";
    
    Student S2;
    S2.name = "ganesh";
    S2.roll_no = 215;
    S2.score = 80;
    S1.grade = "A+";
    cout << S2.name << " ";
    
}
