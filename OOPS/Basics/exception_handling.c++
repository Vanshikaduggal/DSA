#include<iostream>
using namespace std;

class Customer
{
    string name;
    int balance,account_number;

    public:
    Customer(string name,int balance,int account_number)
    {
        this->name=name;
        this->balance=balance;
        this->account_number=account_number;
    }

    void deposit(int amount)
    {
        if(amount>0)
        {
            balance+=amount;
            cout<<amount<<"rs is credited successfully\n";
        }else{
            throw "amount should be greater than zero";
        }
    }

    void withdraw(int amount)
    {
        if(amount>0 && amount<=balance)
        {
            balance-=amount;
            cout<<amount<<"rs is debited successfully";
        }
        else if(amount<0){
            throw "Balance should be greater than zero";
        }
        else
        {
            throw "Your balance is low";
        }
    }
};

int main()
{
    Customer C1("Vanshika",5000,13);
    
    try{
        C1.deposit(100);
        C1.withdraw(6000);
        C1.deposit(100); // THIS STATEMENT WILL NOT BE EXECUTED BECAUSE IN ABOVE STATEMENT EXCEPTION IS THROWN SO IT WILL BE GO IN CATCH BLOCK AND WILL NOT RETURN BACK TO THIS STATEMENT
    }
    catch(const char *e)
    {
        cout<<"Exception occured : "<<e<<endl;
    }
}
