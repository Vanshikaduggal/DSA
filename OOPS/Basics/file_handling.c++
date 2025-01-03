#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fout; //IT IS USED TO OPEN THE FILE.
    fout.open("zoom.txt"); // HERE WE GIVE THE PATH OF THE FILE IF THE FILE IS NOT PRESENT THEN NEW FILE IS CREATED AND THEN OPEN IT FILE

    fout<<"Hello India"; //fout is OBJECT AND open IS MEMBER FUNCTION
    fout.close(); // RELEASE THE RESOURCES WHICH ARE HANDLING THIS FILE 
}


#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin; //open the file
    fin.open("zoom.txt");//read the data

    char c;
    c=fin.get(); // using this method we can read the space as well
    while(!fin.eof()) //eof --> end of file
    {
        cout<<c;
        c=fin.get();
    }
    fin.close(); // when we excute this the spaces will not get printed so to avoid that .get() method is used
}
