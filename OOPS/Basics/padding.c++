#include<iostream>
using namespace std;

class a{
    char c;
    char b;
    int a;
};

int main()
{
    a obj;
    cout<<sizeof(obj)<<" ";
}

//THIS WILL GIVE OUTPUT OF 8 BYTE MEMORY ALLOCATION BUT WHEN WE ALLIGN THESE WITH SOME OTHER METHOD THEN WE SEE THE MEMORY ALLOCATION IS DIFFERENT

#include<iostream>
using namespace std;

class a{
    char c;
    int a;
    char b;
};

int main()
{
    a obj;
    cout<<sizeof(obj)<<" ";
}

// THIS WILL GIVE OUTPUT OF 12 BYTE AS WE HAVE SHIFTED INT UPWARD SO MEMORY ALLOCATION WILL BE DONE FIRST FOR CHAR TYPE THEN FOR INT AND THEN FOR CHAR TYPE DATA INT THIS METHOD  FREE SPACE IS LEFT AS INT WILL BE ALLOCATED ONLY WHERE THE MULTIPLE ID OF 4 TYPE 
