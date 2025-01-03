#include<iostream>
using namespace std; 

class Human
{
    protected: //THIS WILL BE TREATED AS PROTECTED IN STUDENT CLASS AS IT IS MORE SECURE AND POWERFUL THEN PUBLIC 
    string name;
    int age;

    public:

    Human() // FIRST THE CONSTRUCTOR OF PARENT CLASS WILL BE CALLED THEN CONSTRUCTOR OF CHILD CLASS WILL BE CALLED
    {
        cout<<"Hello Human \n";
    }

    void work() //THIS WILL BE TREATED AS PUBLIC IN STUDENT CLASS 
    {
        cout<<"I am working \n";
    }

};

class Student : public Human
{
    int roll_no,fees;

    public:
    Student(string name ,int age,int roll_no,int fees)
    {
        this->name=name;
        this->age=age;
        this->roll_no=roll_no;
        this->fees=fees;
    }

   Student()
   {
    cout<<"Hello student";
   }
};

int main()
{
    Student A1("Rohit",26,32,99);
    A1.work();
}