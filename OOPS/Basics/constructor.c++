#include<iostream>
using namespace std;

class Constructor{
    public:
    string name;
    int acc_num;
    int balance;

    //DEFAULT CONSTRUCTOR
    Constructor()
    {
        name="Vanshika";
        acc_num=789;
        balance=1000;
    }

    //PARAMETRIZED CONSTRUCTOR
    Constructor(string name,int acc_num,int balance)
    {
        this->name=name;
        this->acc_num=acc_num;
        this->balance=balance; //this is used to store the address of object created 
    }

    Constructor(string a,int b)
    {
        name=a;
        balance=b;
    }

    void display()
    {
        cout<<name<<" "<<acc_num<<" "<< balance<<endl;
    }
};

int main()
{
    Constructor A; // HERE WE HAD NOT PASSED ANY PARAMETER SO DEFAULT CONSTRUCTOR VALUE WILL BE STORED AND GIVEN AS OUTPUT HERE
    A.display();
    Constructor B("vansh",34); //HERE WE HAVE PASSED ONLY TWO VALUES SO THE CONSTRUCTOR WITH 2 PARAMETER WILL BE CALLEDM
}
