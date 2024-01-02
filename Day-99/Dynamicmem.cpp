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
    Student *S = new Student;
    (*S).name = "manikanta";
    (*S).roll_no = 21;
    (*S).score = 80;
    (*S).grade = "A+";

    cout << S->name << " " << endl;
}
