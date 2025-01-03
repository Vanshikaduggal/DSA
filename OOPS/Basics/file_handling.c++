#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ofstream fout; //IT IS USED TO OPEN THE FILE.
    fout.open("zoom.txt"); // HERE WE GIVE THE PATH OF THE FILE IF THE FILE IS NOT PRESENT THEN NEW FILE IS CREATED AND THEN OPEN IT FILE

    fout<<"Hello India"; //fout is OBJECT AND open IS MEMBER FUNCTION
    fout.close(); // RELEASE THE RESOURCES WHICH ARE HANDLING THIS FILE 

    // WE WNAT TO STORE SOME INTEGER VALUE AND SORT THE FUNCTION THEN WE CAN DO BY THIS METHOD :
    vector<int>arr(5);
   cout<<"Enter the input : ";
   for(int i=0;i<5;i++)
   {
    cin>>arr[i];
   }

   ofstream fout;
   fout.open("zero.txt");
   fout<<"Original data\n"<<endl;;
   for(int i=0;i<5;i++)
   {
        fout<<arr[i]<<" ";
   }
   fout<<"Sorted data"<<endl;;
   sort(arr.begin(),arr.end());
    for(int i=0;i<5;i++)
    {
        fout<<arr[i]<<" ";
    }
   fout.close();
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
