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
