#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            count++;
            cout<<count;
        }
        cout<<endl;
    }
}

1
23
456
78910
