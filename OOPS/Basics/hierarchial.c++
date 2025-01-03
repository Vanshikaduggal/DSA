/* IN THIS WE HAVEONE BASE/PARENT CLASS AND MANY CHILD CLASSES*/
#include<iostream>
using namespace std; 

class Human
{
    protected: 
    string name;
    int age;

    public:

    Human() 
    {
        cout<<"Hello Human \n";
    }

    void work() 
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

    void display1()
    {
        cout<<name<<" "<<age<<" "<<roll_no<<" "<<fees<<endl;
    }
};

class Teacher :public Human
{
    int salary;

    public :
    Teacher(int salary ,string name,int age)
    {
        this->salary=salary;
        this->name=name;
        this->age=age;
    }

    void display()
    {
        cout<<name<<" "<<age<<" "<<salary<<" "<<endl;
    }
};

int main()
{
    Student A1("Vanshika",23,44,99);
    A1.display1(); // First it will go in parent class and hello human will get printed and then it willcome in base class of student to print this
    Teacher A2(99,"Mohit",23);
    A2.display(); // again it will go in parent class first and hello human will get printed and then it willcome in base class of teacher to print this
    
}
