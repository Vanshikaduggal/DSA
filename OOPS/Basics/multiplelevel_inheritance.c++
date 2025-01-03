/* MULTIPLE LEVEL INHERITANCE :
    WE HAVE MANY PARENT CLASSES AND ONE CHILD CLASS
*/

#include<iostream>
using namespace std;

class Engineer
{
    public:
    string specialization;
    
    void work()
    {
        cout<<"I have specialization in "<<specialization<<endl;
    }
};

class Youtuber
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
    string name;

    CodeTeacher(string name,string specialization,int subscriber)
    {
        this->name=name;
        this->specialization=specialization;
        this->subscriber=subscriber;
    }

    void display()
    {
        cout<<"My name is "<<name<<endl;
        work(); // IN ABOVE CLASSES WE HAVE CREATED THESE FUNCTIONS AS PUBLIC SO WE CAN DIRECTLY ACCESS TO THESE FUNCTIONS
        contentcreater();
    }
};

int main()
{
    CodeTeacher A1("Vanshika","CSE",8900);
    A1.display();
}

/* IF WE CALL THE CONSTRUCTOR IN MULTIPLE LEVEL THE :
    WE HAVE MULTIPLE PARENT CLASSES THE THE LEVEL IN WHICH WE INHERIT THE CHILD CLASS THE CONSTRUCTOR IS CALLED IN THAT LEVEL
    IN ABOVE EXAMPLE WE HAVE INHERITED FIRST ENGINNER CLASS IN CODETEACHER SO IT'S CONSTRUCTOR WILL BE CALLED FIRST

*/
