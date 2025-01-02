#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age,roll_number;
    string grade;
};

int main()
{
    Student *S = new Student;
    (*S).name="VANSHIKA";
    (*S).age=19;
    (*S).grade="O";
    (*S).roll_number=944;

    cout<<S->name<<" ";
    cout<<S->age<<" ";
    cout<<S->grade<<" ";
    cout<<S->roll_number<<" ";
}
