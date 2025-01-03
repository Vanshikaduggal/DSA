// FUNCTION OVERLOADING POLYMORPHISM

#include<iostream>
using namespace std;

class Area
{
    public:
    int calulateArea(int r) 
    {
        return 3.14*r*r;
    }
    int calulateArea(int l,int b) //same function name with different parameter
    {
        return l*b;
    }
    
};

int main()
{
    Area A1,A2;
    cout<<A1.calulateArea(4)<<endl; // we have passed only one parameter so it is decided in compile time only which function to be called
    cout<<A2.calulateArea(3,4);
}
