/* WHEN WE USE MULTIPLE PATH INHERITANCE THEN MULTIPLE CLASSES GET ACCESS TO SAME THING AND IF 2 PARENT CLASSES HAVE SAME FUNCTION THE BOTH 
WILL PASS THAT SAME PROPERTY TO ITS CHILD CLASS SO IT WILL GET CONFUSED . TO RESOLVE THIS WE USE VIRTUAL KEYWORD IN ACCESSING PARENT CLASS */

#include<iostream>
using namespace std;

class Human
{
    public:
    string name;

    void display()
    {
        cout<<"my name is "<<name<<endl;
    }

};

class Engineer :public  virtual Human // we use virtual keyword to avoid multiple copies and to make sure in child class that both are the name are same 
{
    public:
    string specialization;
    
    void work()
    {
        cout<<"I have specialization in "<<specialization<<endl;
    }
};

class Youtuber :public virtual Human
{
    public:
    int subscriber;

    void contentcreater()
    {
        cout<<"I have subscriber base of "<<subscriber<<endl;
    }
};

class CodeTeacher : public Engineer, public Youtuber // ACCESSING PROPERTIES OF MULTIPLE CLASSES IN ONE 
{
    public:
    int salary;

    CodeTeacher()
    {

    }

    CodeTeacher(string name,string specialization,int subscriber,int salary)
    {
        this->name=name;
        this->specialization=specialization;
        this->subscriber=subscriber;
        this->salary=salary;
    }

};

int main()
{
    CodeTeacher A1("Vanshika","CSE",8900,99);
    A1.display();
}
