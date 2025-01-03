//1.COMPILE TTIME POLYMORPHISM HAS TWO PARTS : FUNCTION OVERLOADING AND OPERATOR OVERLOADING
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

// OPERATOR OVERLOADING

#include<iostream>
using namespace std;

class Complex
{
    int real,img;

    public:

    Complex()
    {

    }

    Complex(int real,int img)
    {
        this->real=real;
        this->img=img;
    }

    void display()
    {
        cout<<real<<" +i"<<img<<endl;
    }
    
    //OPERATOR OVERLOADING
    Complex operator +(Complex &C) // C1 HAS CALLED THIS FUNCION AND C2 IS PASSED AS ARGUMNENT HERE
    {
        Complex ans;
        ans.real=real+C.real; // within the class if we had created any function which is using the private declared members it will nor create any error so the real and img had not created any error
        ans.img = img+C.img;
        return ans;
    }
};

int main()
{
    Complex C1(3,4);
    Complex C2(4,6);
    
    Complex C3=C1+C2;
    C3.display();

}
