#include<iostream>
using namespace std;

class Human{
    private:
    int a;
    protected:
    int b;
    public :
    int c;

    void fun() // we can access all the members within the class whether it is public private or protected
    {
        a=10;
        b=20;
        c=30;
    }
};

int main()
{
    Human Vanshika;
    //Vanshika.a=10; // private member cannnot be accessed like this .
    Vanshika.c=30;
    
}
