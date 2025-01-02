#include<iostream>
using namespace std;

class Customer{
    string name;
    int acc_num,balance;
   static int total_customer; // USING THE STATIC KEYWORD WITH THIS HELP US TO USE THE INITIALIZED VALUE OF TOTAL_CUSTOMER  /// STATIC IS ATTRIBUTE OF CLASSES OR CLASS MEMBERS
    static int total_balance;
    public:
    Customer(string name,int acc_num,int balance)
    {
        this->name=name;
        this->acc_num=acc_num;
        this->balance=balance;
        total_customer++;
        total_balance+=balance;
    }

    static void accesStatic()
    {
        cout<<"Total number of customer : "<<total_customer<<endl;
        cout<<"Total number of balance : "<<total_balance<<endl;
    }

    void deposit(int amount)
    {
        if(amount>0)
        {
            balance+=amount;
            total_balance+=amount;
        }
    }

    void withdwaw(int amount)
    {
        if(amount<=balance && amount>=0)
        {
            balance-=amount;
            total_balance-=amount;
        }
    }
    void display()
    {
        cout<<name<<" "<<acc_num<<" "<<balance<<" "<<total_customer<<endl;
    }

    void display_total()
    {
        cout<<total_customer<<endl;
    }
};

int Customer ::total_customer =0; //:: is resolution operation .
//int class_name ::(resolution operation) name =0; ----> WITH THIS METHOD WE CAN INITIALIZE THE VALUE GLOBALLY WHICH IS APPLICABLE FOR ALL THE OBJECTCREATED ----> WITH STATIC KEYWORD WE CAN USE IT IN THE CLASS
int Customer ::total_balance =0;

int main()
{
    Customer A("Vanshika",56,10000);
    Customer A2("Vansh",45,10000);
    Customer A3("Vanshu",45,50000);
    Customer::accesStatic();
    A.display_total();
    A.deposit(800);
    Customer::accesStatic();
}
