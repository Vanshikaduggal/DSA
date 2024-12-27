#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}

// Tine Complexity For this approach is O(n)

Another method with Time Complexity O(sqrt(n))

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
            if((n/i) !=i)
            count++;
        }
    }
    if(count==2)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}

