#include<iostream>
using namespace std;

class Customer
{
    public:
    string name;
    int *data; //this is dynamicallu allocated memory so destructor will delete this memory only it will not delete the whole object

    Customer()
    {
        name="VANSHIKA";
        data= new int;
        *data=10;
        cout<<"constructor is called\n";
    }

    ~Customer()
    {
        delete data;
        cout<<"Destructor is called\n";
    }
};

int main()
{
    Customer A;
}


// DELETION AND ALLOCATION 
#include<iostream>
using namespace std;

class Customer
{
    public:
    string name;
    int *data; //this is dynamicallu allocated memory so destructor will delete this memory only it will not delete the whole object

    Customer(string name)
    {
        this->name=name;
        cout<<"constructor is "<<name<<endl;
    }

    ~Customer()
    {
        cout<<"destructor "<<name<<endl;
    }
};

int main()
{
    Customer A1("1"),A2("2"),A3("3");
}
