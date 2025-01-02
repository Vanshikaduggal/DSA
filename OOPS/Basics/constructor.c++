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

    //INLINE CONSTRUCTOR
    inline Constructor(string a,int b,int c):name(a),acc_num(b),balance(c){ 
    } //IT WORK SAME AS OTHER CONSTRUCTOR IF WE WANT TO USE IT THEN WE HAVE TO DELETE THE OTHER CONSTRUCTOR WHICH IS GIVING SAME THREE PARAMETERS .

    void display()
    {
        cout<<name<<" "<<acc_num<<" "<< balance<<endl;
    }
};int main()
{
    Constructor A; // HERE WE HAD NOT PASSED ANY PARAMETER SO DEFAULT CONSTRUCTOR VALUE WILL BE STORED AND GIVEN AS OUTPUT HERE
    A.display();
    Constructor B("vansh",34); //HERE WE HAVE PASSED ONLY TWO VALUES SO THE CONSTRUCTOR WITH 2 PARAMETER WILL BE CALLEDM
    B.display(); // PS D:\c++> ./a.exe
//Vanshika 789 1000
//vansh 1984069987 34  ------->> WHEN WE EXWCUTED THIS WE HAD GOT A GARBAGE VALUE FOR ACCOUNT_NUMBER AS IT IS IN PUBLIC BUT NOT PASSED IN CONSTRUCTOR
}
