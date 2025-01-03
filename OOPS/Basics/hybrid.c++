/*It is mixture of hierarchial and multiple level inheritance */

#include<iostream>
using namespace std;

class Student
{
    public:
    void print()
    {
        cout<<"I am student\n";
    }
};

class Male 
{
    public:
    void Maleprint()
    {
        cout<<"I am Male\n";
    }
};

class Female 
{
    public:
    void Femaleprint()
    {
        cout<<"I am Female\n";
    }
};

class Boy :public Student ,public Male
{
    public:
    void Boyprint()
    {
        cout<<"I am Boy\n";
    }
};

class Girl :public Student ,public Female
{
    public:
    void Girlprint()
    {
        cout<<"I am Girl\n";
    }
};



int main()
{
    Girl g1;
    g1.Girlprint();
    g1.print();
    Boy b1;
    b1.Boyprint();
    b1.Maleprint();
}
